//
// Created by danil on 19.12.2021.
//

#ifndef F77CCOMPILER_CLASSES_H
#define F77CCOMPILER_CLASSES_H

#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <iostream>
#include <fstream>
#include <streambuf>

#include "utils.h"

using namespace std;

typedef enum {
    boolean,
    byte_type,
    integer,
    real,
    double_precision,
    complex,
    double_complex,
    chars
} data_type;

class complex_type {
public:
    data_type base_type;
    int multiplier;

    complex_type(data_type type) : base_type(type), multiplier(1) {}

    complex_type(data_type type, int multiplier) : base_type(type), multiplier(multiplier) {}

    string get_c_name();
};

class scope {
public:
    map<string, complex_type *> scope;

    void add_element(complex_type *type, string &name);

    complex_type *find_element(string &name);

private:
};

class scope_chain {
public:
    vector<scope *> items;

    void add_scope(scope *_scope);

    void pop_scope();

    complex_type *find_element(string &name);

private:
};

typedef enum {
    io_ops,
    str_ops,
    def_complex,
    def_str,
    def_pow,
    def_mul,
    def_div,
    def_add,
    def_minus,
    def_uminus,
    def_uplus,
    def_equ,
    def_neq,
    def_les,
    def_leq,
    def_gre,
    def_geq,
    def_or,
    def_and,
    def_xor,
    def_not
} header_type;

class node {
public:
    vector<node *> childs;
    string stmt;
    scope_chain *chain = nullptr;

    node() = default;

    node(vector<node *> _childs) {
        this->childs.insert(this->childs.begin(), _childs.begin(), _childs.end());
    }

    virtual string eval(scope_chain *chain);

    virtual void ask(node *_node); // do nothing by default

    void add_child(node *item);

    void add_childs(vector<node *> &_childs);

protected:
    void add(string val);
    void begin_line(int val);
    void begin_line();
    void begin_stmt();

    void end_stmt();

    void add_stmt(string val);
    void append_child(node* _child);
    void append_child(node* _child, string value);
    void append_childs();

    virtual void build_string() = 0;
};

class static_node : public node {
public:
    string expr;
    static_node(string &expr): expr(expr) {}

private:
    void build_string() override;
};


class comment : public node {
public:
    string comm;

    comment(string &comm) : comm(comm) {}

private:
    void build_string() override;
};

typedef enum {
    e_constant,
    e_complex,
    e_name,
    e_pow,
    e_mul,
    e_div,
    e_add,
    e_minus,
    e_uminus,
    e_uplus,
    e_equ,
    e_neq,
    e_les,
    e_leq,
    e_gre,
    e_geq,
    e_or,
    e_and,
    e_xor,
    e_not
} eval_type;

class eval_tree : public node {
public:
    vector<eval_tree *> items;
    node *val;
    eval_type type;
    complex_type *expr = new complex_type(integer);

    eval_tree(eval_type type, node *val) : type(type), val(val) {}

    eval_tree(eval_type type, node *val, vector<eval_tree *> items) : type(type), val(val), items(items) {}
    string wrap_expression(scope_chain* chain);
private:
    void build_string() override;

    string recursive_eval(scope_chain *scope);
};

class list_node : public node {
public:
    string separator;

    list_node() = default;

    list_node(node *_node) {
        this->add_item(_node);
    }

    list_node(node *_node, string separator): separator(separator) {
        this->add_item(_node);
    }

    list_node(vector<node *> _nodes) {
        this->childs.insert(childs.begin(), _nodes.begin(), _nodes.end());
    }

    list_node(vector<node *> _nodes, string separator) {
        this->childs.insert(childs.begin(), _nodes.begin(), _nodes.end());
        this->separator = separator;
    }

    void add_item(node *_node);

    void add_list(list_node *list);

private:
    void build_string() override;
};

class typed_node : public node {
public:
    complex_type *type;

    typed_node(complex_type *type) : type(type) {}
};

class constant_node : public typed_node {
public:
    string val;

    constant_node(complex_type *type, string val) : typed_node(type), val(val) {}

private:
    void build_string() override;
};

class name_node : public node {
public:
    string name;

    name_node(string &name) : name("_" + name) {}

private:
    void build_string() override;
};

class assign_node : public name_node {
public:
    eval_tree *aexp;

    assign_node(string name, eval_tree *aexp) : name_node(name), aexp(aexp) {}

private:
    void build_string() override;
};


class call_node : public name_node {
public:
    list_node *args;

    call_node(string &name, list_node *args) : name_node(name), args(args) {}

private:
    void build_string() override;
};

class label_node: public node{
public:
    constant_node* id;
    label_node(constant_node *id, vector<node*> label_stmts): id(id) {
        add_childs(label_stmts);
    }
private:
    void build_string() override;
};

class goto_node : public node{
public:
    eval_tree* aexp;
    goto_node(eval_tree* aexp): aexp(aexp){}
private:
    void build_string() override;
};

class pause_node: public node{
public:
    eval_tree *aexp;
    pause_node(eval_tree* aexp): aexp(aexp) {}

private:
    void build_string() override;
};

class block_node : public node {
public:
    scope *local_scope = new scope();

    block_node() {}

    void add_scope_item(complex_type *type, string &name);

    string eval(scope_chain *chain) override;

private:
    void ask(node *_node) override {}
    void build_string() override{}
};

class if_block : public block_node {
public:
    string type;
    eval_tree *aexp;

    if_block(string type, eval_tree *aexp, vector<node *> items) {
        this->type = type;
        this->aexp = aexp;
        this->childs.insert(this->childs.begin(), items.begin(), items.end());
    }

private:

    void build_string() override;
};

class doloop_node : public block_node {
public:
    assign_node *assign;
    eval_tree *end, *step;

    doloop_node(assign_node *assign, eval_tree *end, vector<node *> childs)
            : assign(assign), end(end),
              step(new eval_tree(e_constant, new constant_node(new complex_type(integer), "1"))) {
        this->add_childs(childs);
    }

    doloop_node(assign_node *assign, eval_tree *end, eval_tree *step, vector<node *> childs)
            : assign(assign),
              end(end), step(step) {
        this->add_childs(childs);
    }

private:
    void build_string() override;
};

class dowhile_node : public block_node {
public:
    eval_tree *cond;

    dowhile_node(eval_tree *aexp, vector<node *> childs) : cond(aexp) {
        this->add_childs(childs);
    }

private:
    void build_string() override;
};

class function_node : public block_node {
public:
    name_node *name;
    complex_type *type;
    list_node *vars;

    function_node(string &name, list_node *vars, vector<node *> stmts);

    function_node(complex_type *type, string &name, list_node *vars, vector<node *> stmts)
            : type(type), name(new name_node(name)), vars(vars) {
        this->add_childs(stmts);
    }

private:
    void build_string() override;
    void ask(node *_node) override;
};

class open_node : public node {
public:
    eval_tree *unit, *filename;

    open_node(eval_tree *unit, eval_tree *filename) : unit(unit), filename(filename) {}

private:
    void build_string() override;
};

class close_node : public node {
public:
    eval_tree *unit;

    close_node(eval_tree *unit) : unit(unit) {}

private:
    void build_string() override;
};

class write_node : public node {
public:
    eval_tree *unit, *format;
    list_node *ioargs;

    write_node(eval_tree *unit, eval_tree *format, list_node *ioargs) : unit(unit), format(format), ioargs(ioargs) {}

private:
    void build_string() override;
};

class read_node : public node {
public:
    eval_tree *unit, *format;
    list_node *ioargs;

    read_node(eval_tree *unit, eval_tree *format, list_node *args) : unit(unit), format(format), ioargs(args) {}

private:
    void build_string() override;
};

class main_node : public block_node {
public:
    main_node(vector<node *> v) {
        childs.insert(childs.begin(), v.begin(), v.end());
    }

private:
    void build_string() override;
};

class def_node : public name_node {
public:
    complex_type *type = nullptr;

    def_node(string &name) : name_node(name) {
        this->type = new complex_type(integer);
    }

    def_node(complex_type *type, string &name) : name_node(name), type(type) {}

    void ask(node *_node) override;
};

class var_node : public def_node {
public:
    assign_node* assign = nullptr;
    var_node(string &name) : def_node(name) {}

    var_node(complex_type *type, string name) : def_node(type, name) {}

    var_node(complex_type *type, assign_node* assign) : def_node(type, assign->name), assign(assign) {}

private:
    void build_string() override;
};

class root_node : public node {
public:

    void add_header(header_type header);

    complex_type *determine_type(string name);

private:
    set<header_type> headers;

    void put_header(header_type type, string val);

    void put_headers(vector<header_type> types, string val);

    void make_headers();

    void build_string() override;
};

data_type parse_type(const char *name);

node *sexpr(string expr);

node *create_empty_node();

node *create_comment(string &comm);

header_type get_cmp_header(string val);

eval_type get_cmp_eval(string val);

bool is_primitive_type(complex_type *type);

eval_tree *constant_integer_expression(string val);

#endif //F77CCOMPILER_CLASSES_H
