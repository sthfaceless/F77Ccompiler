//
// Created by danil on 19.12.2021.
//

#include "classes.h"

extern root_node program_root;

/* type classes */
string complex_type::get_c_name() {
    switch (base_type) {
        case integer:
            return "long";
        case real:
            return "double";
        case double_precision:
            return "long double";
        case boolean:
            return "int";
        case chars:
            return "char";
        case byte_type:
            return "int";
        case double_complex:
        case complex:
            return "_complex";
    }
}

bool is_primitive_type(complex_type *type) {
    data_type _type = type->base_type;
    bool base_primitive = false;
    switch (_type) {
        case boolean:
        case byte_type:
        case integer:
        case real:
        case complex:
        case double_complex:
        case double_precision:
            base_primitive = true;
            break;
        default:
            break;
    }
    if (base_primitive && (type->multiplier == 1)) return true;
    return false;
}


data_type parse_type(const char *name) {
    char *str = get_lower_copy(name);
    if (!strcmp(str, "integer")) {
        return integer;
    } else if (!strcmp(str, "real")) {
        return real;
    } else if (!strcmp(str, "logical")) {
        return boolean;
    } else if (!strcmp(str, "double precision")) {
        return double_precision;
    } else if (!strcmp(str, "complex")) {
        return complex;
    } else if (!strcmp(str, "double complex")) {
        return double_complex;
    } else if (!strcmp(str, "character")) {
        return chars;
    } else if (!strcmp(str, "byte")) {
        return byte_type;
    }
    throw runtime_error("bad data type - " + string(str));
}

header_type get_cmp_header(string val) {
    if (val == "==") {
        return def_equ;
    } else if (val == "!=") {
        return def_neq;
    } else if (val == "<") {
        return def_les;
    } else if (val == "<=") {
        return def_leq;
    } else if (val == ">") {
        return def_gre;
    } else if (val == ">=") {
        return def_geq;
    }
    throw runtime_error("bad compare item - " + val);
}

eval_type get_cmp_eval(string val) {
    if (val == "==") {
        return e_equ;
    } else if (val == "!=") {
        return e_neq;
    } else if (val == "<") {
        return e_les;
    } else if (val == "<=") {
        return e_leq;
    } else if (val == ">") {
        return e_gre;
    } else if (val == ">=") {
        return e_geq;
    }
    throw runtime_error("bad compare item - " + val);
}

node *sexpr(string expr) {
    return new static_node(expr);
}

node *create_comment(string &comm) {
    return new comment(process_comment(comm));
}

node *create_empty_node() {
    return sexpr("");
}


/* scope classes */

void scope::add_element(complex_type *type, string &name) {
    scope[name] = type;
}

complex_type *scope::find_element(string &name) {
    if (scope.count(name))
        return scope[name];
    else
        return nullptr;
}

void scope_chain::add_scope(scope *_scope) {
    items.push_back(_scope);
}

void scope_chain::pop_scope() {
    items.pop_back();
}

complex_type *scope_chain::find_element(string &name) {
    for (scope *_scope: items) {
        complex_type *_type = _scope->find_element(name);
        if (_type != nullptr) return _type;
    }
    return nullptr;
}

string process_add(string &l, string &r, complex_type *type) {
    switch (type->base_type) {
        case chars:
            return "_str_add(" + l + "," + r + ")";
        default:
            break;
    }
    return l + " + " + r;
}

string process_pow(string &l, string &r, complex_type *type) {
    switch (type->base_type) {
        case complex:
        case double_complex:
            return "cpow(" + l + ", " + r + ")";
        default:
            break;
    }
    return "pow(" + l + ", " + r + ")";
}


string cast_to_type(string &val, complex_type *old, complex_type *ntype) {
    if ((ntype->base_type == old->base_type && ntype->multiplier == old->multiplier)
        || ntype->base_type < chars)
        return val;
    switch (old->base_type) {
        case boolean:
        case byte_type:
            return "_int_to_string(" + val + ")";
        case integer:
            return "_long_to_string(" + val + ")";
        case real:
        case double_precision:
            return "_double_to_string(" + val + ")";
        case complex:
        case double_complex:
            return "_complex_to_string(" + val + ")";
        default:
            break;
    }
    return val;
}


/* evaluation tree */
string eval_tree::recursive_eval(scope_chain *scope) {
    if (type == e_constant) {
        if (auto *_constant = dynamic_cast<constant_node *>(val)) {
            expr = _constant->type;
        }
        return val->eval(scope);
    }
    if (type == e_name) {
        if (auto *_node = dynamic_cast<name_node *>(val)) {
            string name = _node->name;
            complex_type *el_type = scope->find_element(name);
            if (el_type) {
                expr = el_type;
            }
        }
        return val->eval(scope);
    }

    for (eval_tree *_node: items)
        expr->base_type = max(expr->base_type, _node->expr->base_type);

    vector<string> expressions;
    for (eval_tree *_node: items) {
        string exp = _node->recursive_eval(scope);
        if (_node->type == e_name && _node->expr->base_type < chars && (_node->expr->multiplier == 1))
            exp = "*" + exp; // for primitive types
        if (expr > _node->expr) cast_to_type(exp, _node->expr, expr);
        expressions.push_back(exp);
    }

    switch (type) {
        case e_pow:
            return process_pow(expressions[0], expressions[1], expr);
        case e_add:
            return process_add(expressions[0], expressions[1], expr);
        case e_uminus:
            return "-" + expressions[0];
        case e_not:
            return "~" + expressions[0];
        case e_equ:
        case e_leq:
        case e_les:
        case e_geq:
        case e_gre:
            expr = new complex_type(boolean);
        default:
            break;
    }
    return expressions[0] + " " + val->eval(scope) + " " + expressions[1];
}

void eval_tree::build_string() {
    string value = recursive_eval(chain);
    if(type == e_name) value = "*" + value;
    add(value);
}

string eval_tree::wrap_expression(scope_chain* chain){
    stmt = recursive_eval(chain);
    data_type base_type = expr->base_type;
    if (base_type == chars || expr->multiplier > 1) {
        return stmt;
    }
    if (type == e_name) {
        return stmt;
    }
    if (base_type == byte_type || base_type == boolean) stmt = "_wrap_int(" + stmt + ")";
    if (base_type == integer) stmt = "_wrap_long(" + stmt + ")";
    if (base_type == real || base_type == double_precision) stmt = "_wrap_long_double(" + stmt + ")";
    if (base_type == complex || base_type == double_complex) stmt = "_wrap_complex(" + stmt + ")";
    return stmt;
}

/* base node */
void node::add(string val) {
    stmt.append(val);
}

void node::begin_line(int val) {
    if (chain) {
        for (int i = 0; i < chain->items.size() + val; ++i)
            add("\t");
    }
}

void node::begin_line() {
    if (chain) {
        for (int i = 0; i < chain->items.size(); ++i)
            add("\t");
    }
}

void node::begin_stmt() {
    add("\n");
    begin_line();
}

void node::end_stmt() {
    add(";");
}

void node::add_stmt(string val) {
    begin_stmt();
    add(val); // add value of new statement
    end_stmt();
}

void node::append_child(node *_child, string value) {
    if (auto *_comment = dynamic_cast<comment *>(_child)) {
        if (!value.empty()) {
            begin_stmt();
            add(value);
        }
    } else if (auto *_block = dynamic_cast<block_node *>(_child)) {
        begin_stmt();
        add(value);
    } else {
        add_stmt(value);
    }
}

void node::append_child(node *_child) {
    string value = _child->eval(this->chain);
    if (auto *_comment = dynamic_cast<comment *>(_child)) {
        if (!value.empty()) {
            begin_stmt();
            add(value);
        }
    } else if (auto *_block = dynamic_cast<block_node *>(_child)) {
        begin_stmt();
        add(value);
    }else if (auto *_list = dynamic_cast<list_node *>(_child)) {
        begin_stmt();
        add(value);
    } else {
        add_stmt(value);
    }
}

void node::append_childs() {
    for (node *_child: this->childs) {
        append_child(_child);
    }
}

void node::add_childs(vector<node *> &_childs) {
    childs.insert(childs.end(), _childs.begin(), _childs.end());
}

string node::eval(scope_chain *chain) {
    this->chain = chain;
    this->stmt = "";
    build_string();
    return this->stmt;
}

void node::ask(node *_node) {}; // do nothing by default

void node::add_child(node *item) {
    this->childs.push_back(item);
}

/* get string from simple nodes */
void comment::build_string() {
    add(this->comm);
}

void static_node::build_string() {
    add(expr);
}

void assign_node::build_string() {
    complex_type *type = chain->find_element(name);
    if (!type) {
        type = program_root.determine_type(name);
        chain->items.back()->add_element(type, name);
        add(type->get_c_name() + " *");
        add(name);
        add(" = " + aexp->wrap_expression(chain));
    } else {
        if(is_primitive_type(type)) add("*");
        add(name + " = " + aexp->eval(this->chain));
    }
}

void list_node::add_item(node *_node) {
    childs.push_back(_node);
}

void list_node::add_list(list_node *list) {
    this->childs.insert(childs.end(), list->childs.begin(), list->childs.end());
}

void list_node::build_string() {
    for (int i = 0; i < childs.size(); i++) {
        add(childs[i]->eval(this->chain));
        if ((i < childs.size() - 1) && !separator.empty())
            add(separator);
    }
}

void call_node::build_string() {
    add(name + "(" + this->args->eval(this->chain) + ")");
}

void constant_node::build_string() {
    add(val);
}

void name_node::build_string() {
    add(name);
}

void def_node::ask(node *_node) {
    if (auto *block = dynamic_cast<block_node *>(_node)) {
        block->add_scope_item(type, name);
    }
}

void var_node::build_string() {
    string cname = type->get_c_name();
    add(cname + " *" + name + " = malloc(sizeof(" + cname + ")");
    if (type->multiplier != 1) {
        add("*" + to_string(type->multiplier));
    }
    add(")");
}

void open_node::build_string() {
    add("_io_units[");
    add(unit->eval(chain));
    add("] = fopen(");
    add(filename->eval(chain));
    add(", \"a+t\")");
}

void close_node::build_string() {
    add("fclose(_io_units[");
    add(unit->eval(chain));
    add("])");
}

string get_c_specifier(complex_type *type) {
    switch (type->base_type) {
        case byte_type:
        case boolean:
            return "%d";
        case integer:
            return "%ld";
        case real:
        case double_precision:
            return "%Lf";
        case complex:
        case double_complex:
            return "%Lf";
        case chars:
            return "%s";
    }
}

void write_node::build_string() {
    string stream_name = (unit == nullptr) ? "stdout" : "_io_units[" + unit->eval(chain) + "]";
    string cformat, arglist;
    for (node *exp: ioargs->childs) {
        if (auto *expr = dynamic_cast<eval_tree *>(exp)) {
            expr->eval(chain);
            complex_type *argtype = expr->expr;

            string specifier = get_c_specifier(argtype);
            cformat.append(specifier);
            if (argtype->base_type == complex || argtype->base_type == double_complex) {
                cformat.append(" i" + specifier);
            }

            arglist.append(expr->eval(chain));

            if (exp != ioargs->childs.back()) cformat.append(" "), arglist.append(", ");
            else cformat.append("\\n");
        }
    }
    add("fprintf(");
    add(stream_name + ", \"");
    add(cformat + "\", ");
    add(arglist);
    add(")");
}

void read_node::build_string() {
    string stream_name = (unit == nullptr) ? "stdin" : "_io_units[" + unit->eval(chain) + "]";
    string cformat, arglist;
    for (node *exp: ioargs->childs) {
        if (auto *expr = dynamic_cast<eval_tree *>(exp)) {
            expr->eval(chain);
            complex_type *argtype = expr->expr;

            string specifier = get_c_specifier(argtype);
            cformat.append(specifier);
            if (argtype->base_type == complex || argtype->base_type == double_complex) {
                cformat.append(" i" + specifier);
            }

            arglist.append(expr->wrap_expression(chain));

            if (exp != ioargs->childs.back()) cformat.append(" "), arglist.append(", ");
            else cformat.append("\\n");
        }
    }
    add("fscanf(");
    add(stream_name + ", \"");
    add(cformat + "\", ");
    add(arglist);
    add(")");
}

/* block nodes */
void block_node::add_scope_item(complex_type *type, string &name) {
    local_scope->add_element(type, name);
}

string block_node::eval(scope_chain *chain) {
    this->chain = chain;
    for (node *_child: this->childs) {
        _child->ask(this);
    }
    chain->add_scope(local_scope);
    build_string();
    chain->pop_scope();
    return stmt;
}

void if_block::build_string() {
    add(type);
    if (aexp) {
        add("(" + aexp->eval(this->chain) + ")");
    }
    add(" {");
    append_childs();
    add("\n");
    begin_line(-1);
    add("}");
}

void doloop_node::build_string() {
    add("for (");
    add(assign->eval(this->chain));
    add(";*" + assign->name + " <= " + end->eval(this->chain) + "; ");
    add("*" + assign->name + " += " + step->eval(this->chain) + "){");
    append_childs();
    add("\n");
    begin_line(-1);
    add("}");
}

void dowhile_node::build_string() {
    add("while (");
    add(cond->eval(this->chain));
    add("){");
    append_childs();
    add("\n");
    begin_line(-1);
    add("}");
}

function_node::function_node(string &name, list_node *vars, vector<node *> stmts)
        : name(new name_node(name)), vars(vars) {
    this->add_childs(stmts);
    this->type = program_root.determine_type(this->name->name);
}

void function_node::build_string() {
    add(type->get_c_name() + "* ");
    add(name->name + " (");

    set<string> function_variables;
    for (node *_var: vars->childs) {
        if (auto *_varname = dynamic_cast<eval_tree *>(_var)) {
            string value = _varname->wrap_expression(chain);
            complex_type *_vartype = chain->find_element(value);
            if (!_vartype) _vartype = program_root.determine_type(value);
            add(_vartype->get_c_name() + " *" + value);
            if (_var != vars->childs.back()) add(", ");
            function_variables.insert(value);
        }
    }
    add(") {");

    auto *ret_var = new var_node(type, string(substring(name->name, 1, -1)));
    ret_var->ask(this);
    append_child(ret_var);

    bool last_return = false;
    for (node *stmt: childs) {
        string expr = stmt->eval(chain);
        last_return = false;
        if (expr == "return") {
            last_return = true;
            expr = "return " + name->name;
            add_stmt(expr);
            continue;
        }
        if (auto *var_def = dynamic_cast<var_node *>(stmt)) {
            if (function_variables.count(var_def->name)) {
                continue;
            }
        }
        append_child(stmt, expr);
    }

    if (!last_return) add_stmt("return " + name->name);
    add("\n");
    begin_line(-1);
    add("}\n");
}

void main_node::build_string() {
    add("\nint main(int argc, char **args){");
    append_childs();
    add("\n}");
}

/* root program */
complex_type *root_node::determine_type(string name) {
    name = substring(name, 1, -1);
    data_type _type = real;
    switch (tolower(name[0])) {
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
            _type = integer;
            break;
    }
    return new complex_type(_type);
}

void root_node::add_header(header_type header) {
    this->headers.insert(header);
}

void root_node::put_header(header_type type, string val) {
    if (headers.count(type)) {
        add(val);
    }
}

void root_node::put_headers(vector<header_type> types, string val) {
    bool any = false;
    for (header_type _type: types)
        any |= headers.count(_type);
    if (any) add(val);
}


void root_node::make_headers() {
    /*
     * copy util functions to header of the file
     * */
    ifstream f77header("f77.h");
    string buffer((istreambuf_iterator<char>(f77header)), istreambuf_iterator<char>());
    add(buffer);
    add("\n\n");
}

void root_node::build_string() {
    make_headers();
    append_childs();
}
