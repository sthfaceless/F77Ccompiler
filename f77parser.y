%{
#include <stdio.h>
#include "functions.h"
%}

/* declaring tokens */
%token PROGRAM_BEGIN PROGRAM_END COMMENT EOL
%token FN_CALL
%token IF THEN ELSE ELSEIF DO END
%token BINARY_OPERATOR UNARY_OPERATOR
%token TYPE VARIABLE
%token NUMBER STRING BOOL


%%
expression: NUMBER
| BOOL
| VARIABLE
| FN_CALL
| expression BINARY_OPERATOR expression
| UNARY_OPERATOR expression
%%
int main(int argc, char **argv){
	yyparse();
}