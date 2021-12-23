%code requires{
	#include "defs.h"
}
%{
#include <iostream>
#include <string>
#include "debug.h"
#include "global.h"

extern int yylineno;
extern char* yytext;
extern root_node program_root;

//#define YYDEBUG 1

void yyerror(char *s){
	std::cerr << "line " << yylineno << " \"" << yytext << "\" error: " << s << std::endl;
	exit(1);
}
%}

/* more smart but slow parser */
// %glr-parser

/* declaring tokens */
%token PROGRAM END EOL END_OF_FILE
%token FUNCTION SUBROUTINE RETURN
%token CALL GOTO STOP PAUSE
%token IF THEN ELSE ELSEIF ENDIF
%token DO BREAK CONTINUE ENDDO WHILE
%token READ WRITE PRINT OPEN CLOSE FORMAT AFILE
%token ADD MINUS MUL POW DIV EQUAL LEFT_PARENT RIGHT_PARENT COMMA COLON
%token PARAM
%token <_str> CMP
%token <_str> OR XOR AND EQV NEQV NOT
%token <_str> COMMENT SYMNAME
%token <_constant> CHARS NUMBER
%token <_type> TYPE

%type <_node> exec_stmt assign_stmt control_stmt io_stmt fn_call program_body read_stmt write_stmt print_stmt if_stmt do_stmt
%type <_items> stmts program_head stmt var_def fn_def nonexec_stmt
%type <_complex_type> type
%type <_list> exp_list elseif_stmt
%type <_eval_tree> aexp format

%right EQUAL

%nonassoc CMP

%left ADD MINUS
%left MUL DIV
%right POW

%left EQV
%left OR
%left XOR
%left AND
%left NEQV
%nonassoc NOT

%%
/* main program structure*/
program: program_head program_body program_end END_OF_FILE
{
	program_root.add_childs($1);
	program_root.add_child($2);
	translate_program();
}
| program_body program_end END_OF_FILE
{
	program_root.add_child($1);
	translate_program();
}
;
program_head: nonexec_stmt {$$ = {$1};}
| COMMENT {$$ = {create_comment($1)};}
| program_head nonexec_stmt  {$1.insert($1.end(),$2.begin(), $2.end());$$ = $1;}
| program_head COMMENT {$1.push_back(create_comment($2));$$ = $1;}
;
program_body: PROGRAM stmts {main_node* _main = new main_node($2);$$ = _main;}
| exec_stmt stmts {$2.insert($2.begin(), $1);main_node* _main = new main_node($2);$$ = _main;}
;
program_end: END COMMENT
| program_end COMMENT
;
stmts: COMMENT {$$ = {create_comment($1)};}
| stmts COMMENT {$1.push_back(create_comment($2));$$ = $1;}
| stmts stmt {$1.insert($1.end(), $2.begin(), $2.end());$$ = $1;}
;
stmt: exec_stmt COMMENT {$$ = {$1, create_comment($2)};}
| nonexec_stmt COMMENT {$1.push_back(create_comment($2)); $$ = $1;}
;
/* statements */
exec_stmt: assign_stmt
| control_stmt
| io_stmt
assign_stmt: SYMNAME EQUAL aexp {$$ = new assign_node($1, $3);}
;
control_stmt: if_stmt
| do_stmt
| fn_call
| GOTO {$$ = sexpr("goto");}
| CONTINUE {$$ = sexpr("continue");}
| RETURN {$$ = sexpr("return");}
| BREAK {$$ = sexpr("break");}
| STOP {$$ = sexpr("exit(0)");}
| PAUSE NUMBER {$$ = sexpr("sleep("+$2->val+")");}
;
if_stmt: IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts ENDIF {$$ = new list_node(dynamic_cast<node*>(new if_block("if", $3, $6)));}
| IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts ELSE stmts ENDIF {
$$ = new list_node({dynamic_cast<node*>(new if_block("if", $3, $6)), dynamic_cast<node*>(new if_block("else", nullptr, $8))});}
| IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts elseif_stmt ELSE stmts ENDIF
{	
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", $3, $6)));
	list->add_list($7);
	list->add_item(dynamic_cast<node*>(new if_block("else", nullptr, $9)));
	$$ = list;
}
| IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts elseif_stmt ENDIF
{
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", $3, $6)));
	list->add_list($7);
	$$ = list;
}
;
elseif_stmt: ELSEIF LEFT_PARENT aexp RIGHT_PARENT THEN stmts {$$ = new list_node(dynamic_cast<node*>(new if_block("else if", $3, $6)));}
| elseif_stmt ELSEIF LEFT_PARENT aexp RIGHT_PARENT THEN stmts {$1->add_item(dynamic_cast<node*>(new if_block("else if", $4, $7))); $$ = $1;}
;
do_stmt: DO SYMNAME EQUAL aexp COMMA aexp stmts ENDDO {$$ = new doloop_node(new assign_node($2, $4), $6, $7);}
| DO SYMNAME EQUAL aexp COMMA aexp COMMA aexp stmts ENDDO {$$ = new doloop_node(new assign_node($2, $4), $6, $8, $9);}
| DO WHILE aexp stmts ENDDO {$$ = new dowhile_node($3, $4);}
;
io_stmt: read_stmt
| write_stmt
| print_stmt
| OPEN LEFT_PARENT aexp COMMA AFILE EQUAL aexp RIGHT_PARENT {$$ = new open_node($3, $7);}
| CLOSE LEFT_PARENT aexp RIGHT_PARENT {$$ = new close_node($3);}
;
read_stmt: READ format {$$ = new read_node(nullptr, $2, new list_node());}
| READ LEFT_PARENT format COMMA format RIGHT_PARENT aexp {$$ = new read_node($3, $5, new list_node(dynamic_cast<node*>($7)));}
| read_stmt COMMA aexp
{
	auto* _node = dynamic_cast<read_node*>($1);
	_node->ioargs->add_item(dynamic_cast<node*>($3));
	$$ = _node;
}
;
write_stmt: WRITE LEFT_PARENT format COMMA format RIGHT_PARENT exp_list {$$ = new write_node($3, $5, $7);}
;
print_stmt: PRINT format {$$ = new write_node(nullptr, $2, new list_node());}
| print_stmt COMMA aexp
{
	auto* _node = dynamic_cast<write_node*>($1);
	_node->ioargs->add_item(dynamic_cast<node*>($3));
	$$ = _node;
}
;
format: MUL {$$ = nullptr;}
| aexp
;
nonexec_stmt: fn_def
| var_def
;
/* definitions */
var_def: type SYMNAME {$$ = {new var_node($1, $2)};}
//| type SYMNAME LEFT_PARENT exp_list RIGHT_PARENT
| var_def COMMA SYMNAME {$1.insert($1.end(), new var_node(dynamic_cast<var_node*>(*$1.begin())->type,$3)); $$ = $1;}
//| var_def COMMA SYMNAME LEFT_PARENT exp_list RIGHT_PARENT
;
fn_def: SYMNAME LEFT_PARENT RIGHT_PARENT EQUAL aexp {$$ = {new function_node($1, new list_node(), {new assign_node($1, $5)})};}
| SYMNAME LEFT_PARENT exp_list RIGHT_PARENT EQUAL aexp {$$ = {new function_node($1, $3, {new assign_node($1, $6)})};}
| type FUNCTION SYMNAME LEFT_PARENT RIGHT_PARENT stmts END {$$ = {new function_node($1, $3, new list_node(), $6)};}
| FUNCTION SYMNAME LEFT_PARENT RIGHT_PARENT stmts END {$$ = {new function_node($2, new list_node(), $5)};}
| type FUNCTION SYMNAME LEFT_PARENT exp_list RIGHT_PARENT stmts END {$$ = {new function_node($1, $3, $5, $7)};}
| FUNCTION SYMNAME LEFT_PARENT exp_list RIGHT_PARENT stmts END {$$ = {new function_node($2, $4, $6)};}
| SUBROUTINE SYMNAME stmts END {$$ = {new function_node(new complex_type(integer), $2, new list_node(), $3)};}
| SUBROUTINE SYMNAME LEFT_PARENT RIGHT_PARENT stmts END {$$ = {new function_node(new complex_type(integer), $2, new list_node(), $5)};}
| SUBROUTINE SYMNAME LEFT_PARENT exp_list RIGHT_PARENT stmts END {$$ = {new function_node(new complex_type(integer), $2, $4, $6)};}
;
fn_call: SYMNAME LEFT_PARENT RIGHT_PARENT {$$ = new call_node($1, new list_node());}
| SYMNAME LEFT_PARENT exp_list RIGHT_PARENT {$$ = new call_node($1, $3);}
| CALL SYMNAME LEFT_PARENT RIGHT_PARENT {$$ = new call_node($2, new list_node());}
| CALL SYMNAME LEFT_PARENT exp_list RIGHT_PARENT {$$ = new call_node($2, $4);}
;
exp_list: aexp {$$ = new list_node(dynamic_cast<node*>($1), ", ");}
| exp_list COMMA aexp {$1->add_item(dynamic_cast<node*>($3));$$ = $1;}
;
type: TYPE
{
	if($1 == complex || $1 == double_complex) {
		program_root.add_header(def_complex);
	}
	if($1 == chars){
		program_root.add_header(def_str);
	}
	$$ = new complex_type($1);
}
| TYPE MUL NUMBER
{
	if($1 == complex || $1 == double_complex) {
		program_root.add_header(def_complex);
	}
	if($1 == chars){
        	program_root.add_header(def_str);
        }
	int multiplier = 1;
	if($1 == chars) multiplier = stoi($3->val);
	$$ = new complex_type($1, multiplier);
}
;
/* expressions */
aexp: fn_call {$$ = new eval_tree(e_name, $1);}
| NUMBER {$$ = new eval_tree(e_constant, $1);}
| CHARS
 {
 	program_root.add_header(def_str);
 	$$ = new eval_tree(e_constant, $1);
 }
| SYMNAME {$$ = new eval_tree(e_name, new name_node($1));}
| LEFT_PARENT aexp RIGHT_PARENT {$$ = $2;}
| aexp POW aexp
{
	program_root.add_header(def_pow);
	$$ = new eval_tree(e_pow, sexpr("pow"), {$1, $3});
}
| aexp MUL aexp
{
	program_root.add_header(def_mul);
	$$ = new eval_tree(e_mul, sexpr("*"), {$1, $3});
}
| aexp DIV aexp
{
	program_root.add_header(def_div);
	$$ = new eval_tree(e_div, sexpr("/"), {$1, $3});
}
| aexp ADD aexp
{
	program_root.add_header(def_add);
	$$ = new eval_tree(e_add, sexpr("+"), {$1, $3});
}
| aexp MINUS aexp
{
	program_root.add_header(def_minus);
	$$ = new eval_tree(e_minus, sexpr("-"), {$1, $3});
}
| MINUS aexp
{
	program_root.add_header(def_uminus);
	$$ = new eval_tree(e_uminus, sexpr("-"), {$2});
}
| ADD aexp
{
	program_root.add_header(def_uplus);
	$$ = new eval_tree(e_uplus, sexpr("+"), {$2});
}
| aexp CMP aexp
{
	program_root.add_header(get_cmp_header($2));
	$$ = new eval_tree(get_cmp_eval($2), sexpr($2), {$1, $3});
}
| aexp EQV aexp
{
	program_root.add_header(def_and);
	$$ = new eval_tree(e_and, sexpr("&"), {$1, $3});
}
| aexp NEQV aexp
{
	program_root.add_header(def_xor);
	$$ = new eval_tree(e_xor, sexpr("^"), {$1, $3});
}
| aexp OR aexp
{
{
	program_root.add_header(def_or);
	$$ = new eval_tree(e_or, sexpr("|"), {$1, $3});
}
}
| aexp AND aexp
{
	program_root.add_header(def_and);
	$$ = new eval_tree(e_and, sexpr("&"), {$1, $3});
}
| aexp XOR aexp
{
	program_root.add_header(def_xor);
	$$ = new eval_tree(e_xor, sexpr("^"), {$1, $3});
}
| NOT aexp
{
	program_root.add_header(def_not);
	$$ = new eval_tree(e_not, sexpr("~"), {$2});
}
;
%%
int main(int argc, char **args){
//	yydebug = 1;
	if(argc > 1 && **(args+1) == '-' && *(*(args+1)+1) == 'd'){
		debug();
	}else {
		yyparse();
	}
	return 0;
}