%{
#include <iostream>
#include <string>
#include "defs.h"
#include "functions.h"

extern int yylineno;
extern int yylex();

void yyerror(char *s){
	std::cerr << "line " << yylineno << " error: " << s << std::endl;
	exit(1);
}
%}

/* more smart but slow parser */
// %glr-parser

/* declaring tokens */
%token PROGRAM END EOL END_OF_FILE
%token FUNCTION SUBROUTINE RETURN
%token CALL GOTO STOP PAUSE
%token IF THEN ELSE ENDIF
%token DO BREAK CONTINUE
%token READ WRITE PRINT OPEN CLOSE
%token ADD MINUS MUL POW DIV EQUAL LEFT_PARENT RIGHT_PARENT COMMA COLON
%token <_str> CMP
%token <_str> OR XOR AND EQV NEQV NOT
%token <_str> COMMENT CHARS NUMBER SYMNAME
%token <_bool> BOOL
%token <_type> TYPE

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
program: program_head program_body program_end END_OF_FILE {translate_program();}
;
program_head: comments
| nonexec_stmt comments
| program_end nonexec_stmt comments
;
program_body: PROGRAM stmts
| exec_stmt stmts
;
program_end: END
| program_end comments
;
comments: COMMENT
| comments COMMENT
;
stmts: /*empty stmt*/
| stmts stmt
;
stmt: exec_stmt COMMENT
| nonexec_stmt COMMENT
;
/* statements */
exec_stmt: assign_stmt
| control_stmt
| io_stmt
assign_stmt: SYMNAME EQUAL aexp
;
control_stmt: if_stmt
| DO
| GOTO
| CONTINUE
| RETURN
| BREAK
| STOP
| PAUSE
;
if_stmt: IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts ENDIF
| IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts ELSE stmts ENDIF
| IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts elseif_stmt ELSE stmts ENDIF
;
elseif_stmt: ELSE IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts
| elseif_stmt ELSE IF LEFT_PARENT aexp RIGHT_PARENT THEN stmts
;
io_stmt: READ
| WRITE
| PRINT
| OPEN
| CLOSE
;
nonexec_stmt: var_def
| fn_def
;
/* definitions */
var_def: type SYMNAME
| type arr_def
| var_def COMMA SYMNAME
| var_def COMMA arr_def
;
arr_def: SYMNAME LEFT_PARENT exp_list RIGHT_PARENT
;
fn_def: SYMNAME LEFT_PARENT RIGHT_PARENT EQUAL aexp
| SYMNAME LEFT_PARENT var_list RIGHT_PARENT EQUAL aexp
| type FUNCTION SYMNAME LEFT_PARENT RIGHT_PARENT comments stmts program_end
| type FUNCTION SYMNAME LEFT_PARENT var_list RIGHT_PARENT comments stmts program_end
| SUBROUTINE SYMNAME comments stmts program_end
| SUBROUTINE SYMNAME LEFT_PARENT RIGHT_PARENT comments stmts program_end
| SUBROUTINE SYMNAME LEFT_PARENT var_list RIGHT_PARENT comments stmts program_end
;
fn_call: SYMNAME LEFT_PARENT RIGHT_PARENT
| SYMNAME LEFT_PARENT exp_list RIGHT_PARENT
;
var_list: SYMNAME
| var_list SYMNAME
;
exp_list: aexp
| exp_list COMMA aexp
;
type: TYPE
| TYPE MUL NUMBER
;
/* expressions */
aexp: NUMBER
| BOOL
| CHARS
| SYMNAME
| fn_call
| LEFT_PARENT aexp RIGHT_PARENT
| aexp POW aexp
| aexp MUL aexp
| aexp DIV aexp
| aexp ADD aexp
| aexp MINUS aexp
| MINUS aexp
| aexp CMP aexp
| aexp EQV aexp
| aexp NEQV aexp
| aexp OR aexp
| aexp AND aexp
| aexp XOR aexp
| NOT aexp
;
%%
int main(int argc, char **argv){
	yyparse();
}