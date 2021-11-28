%{
#include <stdio.h>
#include <string.h>
#include "f77parser.h"
#include "functions.h"
%}

%option caseless

%%
(c|\*)" ".*\n {return COMMENT;}
[0-9]+" ".*\n {}
\n {return EOL;}
"program "[a-z][A-z0-9]+ {return PROGRAM_BEGIN;}
integer|real|string|logical {return TYPE;}
"if" {return IF;}
"then" {return THEN;}
"do" {return DO;}
end[a-z]+ {return END;}
[ \t] {}
. {}
%%

int main(int argc, char **argv){
    enum yytokentype token;
    while ((token = yylex())){
    	printf("%d\n", token);
    }
    return 0;
}