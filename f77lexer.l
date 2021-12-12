%{
#include <string>
#include "defs.h"
#include "functions.h"
using namespace std;
%}

ss (" "{6}|\t)
exp ((e|d)(+|-)?[0-9]{1, 3})
comm (((c|\*|!)(" ".*)?)|" "*)

%option caseless yylineno noyywrap

%x PROGRAM_ENDS
%x CHARACTERS

%%
{comm}\n {yylval._str = string(strdup(yytext+1));return COMMENT;} /* main program parts */
"program "[a-z][a-z0-9_]+{comm}?\n {return PROGRAM;}
"end"{comm}?\n {return END;}
(integer|real|double" "precision|complex|double" "complex|logical|character) {yylval._type = parse_type(yytext));return TYPE;} /* data types */
"parameter" {return PARAMETER;}
(+|-)?[0-9]+(\.[0-9]+)?{exp}? {yylval._str = replace_all(string(strdup(yytext)), "d", "e"); return NUMBER;}
b`(0|1)+` {yylval._str = binary_string_to_int(substring(string(strdup(yytext)), 2, -2)); return NUMBER;}
o[0-8]+ {yylval._str = "0" + substring(string(strdup(yytext)), 1, -1); return NUMBER;}
o`[0-8]+` {yylval._str = "0" + substring(string(strdup(yytext)), 2, -2); return NUMBER;}
`[0-8]+`oa {yylval._str = "0" + substring(string(strdup(yytext)), 1, -4); return NUMBER;}
\$[0-9a-f]+ {yylval._str = "0x" + substring(string(strdup(yytext)), 1, -1); return NUMBER;}
x`[0-9a-f]+` {yylval._str = "0x" + substring(string(strdup(yytext)), 2, -2); return NUMBER;}
`[0-9a-f]+`xa {yylval._str = "0x" + substring(string(strdup(yytext)), 1, -4); return NUMBER;}
z`[0-9a-f]+` {yylval._str = "0x" + substring(string(strdup(yytext)), 2, -2); return NUMBER;}
`[0-9a-f]+`za {yylval._str = "0x" + substring(string(strdup(yytext)), 1, -4); return NUMBER;}
(.true.|.false.) {yylval._bool = parse_bool(yytext);return BOOl;}
`(\\.|``|[^`])*` {yylval._str = replace_all(substring(string(strdup(yytext)), 1, -2), "``", "`");return CHARS;} /* describe string */
\"(\\.|\\\"|[^"])*\" {yylval._str = substring(string(strdup(yytext)), 1, -2);return CHARS;}
"+" {return ADD;} /* operators */
"-" {return MINUS;}
"**" {return POW;}
"*" {return MUL;}
"/" {return DIV;}
"(" {return LEFT_PARENT;} q
")" {return RIGHT_PARENT;}
"=" {return EQUAL;}
"," {return COMMA;}
":" {return COLON;}
".eq." {yylval._str = "==";return CMP;} /* comparison operators */
".ne." {yylval._str = "!=";return CMP;}
".gt." {yylval._str = ">";return CMP;}
".ge." {yylval._str = ">=";return CMP;}
".lt." {yylval._str = "<";return CMP;}
".le." {yylval._str = "<=";return CMP;}
".not." {yylval._str = "~";return NOT;} /* logical operators */
".and." {yylval._str = "&";return AND;}
".or." {yylval._str = "|";return OR;}
".eqv." {yylval._str = "&";return EQV;}
".neqv." |
".xor." {yylval._str = "^";return XOR;}
"if" {return IF;} /* statements */
"else" {return ELSE;}
"then" {return THEN;}
"end"(" ")?"if" {return ENDIF;}
"do" {return DO;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"return" {return RETURN;}
"function" {return FUNCTION;}
"subroutine" {return SUBROUTINE;}
"call" {return CALL;}
"go"(" ")?"to" {return GOTO;}
"stop" {return STOP;}
"pause" {return PAUSE;}
"format" {return FORMAT;}
"write" {return WRITE;} /* input / output */
"read" {return READ;}
"print" {return PRINT;}
"open" {return OPEN;}
"close" {return CLOSE;}
[a-z][0-9a-z_]+ {yylval._str = string(strdup(yytext)); return SYMNAME;} /* symbolic name in the end of all statements */
\n {return EOL;} /* simple tabs and eol */
[ \t] {}
. {}
<INITIAL><<EOF>>        { BEGIN(PROGRAM_ENDS); return END_OF_FILE; } /* end of file */
<PROGRAM_ENDS><<EOF>>      { return 0; }
%%