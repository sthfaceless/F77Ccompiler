%{
#include <string>
#include "f77parser.h"
using namespace std;
%}

ss (" "{6}|\t)
exp ((e|d)(\+|\-)?[0-9]{1,3})

%option caseless yylineno noyywrap stack

%x PROGRAM_ENDS
%x STMT

%%
{ss} {
	if(YY_START != STMT){
		BEGIN(STMT);
	}
}
	/* comments, empty string and newline */
((("c"|\*)(" ".*)?)|" "*)\n {yylval._str = string(strdup(yytext));return COMMENT;}
	/*label statement*/
[0-9][0-9]{0,3} {
	BEGIN(STMT);
	yylval._constant = new constant_node(new complex_type(integer), replace_all(string(strdup(yytext)), " ", ""));
	return NUMBER;
}
<STMT>((!(" ".*)?)|" "*)\n {
	BEGIN(INITIAL);
	yylval._str = string(strdup(yytext));
	return COMMENT;
}
<STMT>[ \t] {}
<STMT>"integer" |
<STMT>"byte" |
<STMT>"real" |
<STMT>"double precision" |
<STMT>"complex" |
<STMT>"double complex" |
<STMT>"logical" |
<STMT>"character" {yylval._type = parse_type(yytext);return TYPE;}
	/* operators */
<STMT>"+" {return ADD;}
<STMT>"-" {return MINUS;}
<STMT>"**" {return POW;}
<STMT>"*" {return MUL;}
<STMT>"/" {return DIV;}
<STMT>"(" {return LEFT_PARENT;}
<STMT>")" {return RIGHT_PARENT;}
<STMT>"=" {return EQUAL;}
<STMT>"," {return COMMA;}
<STMT>":" {return COLON;}
	/* numerical constants */
<STMT>[0-9]+{exp}? {yylval._constant = new constant_node(new complex_type(integer), replace_all(string(strdup(yytext)), "d", "e")); return NUMBER;}
<STMT>[0-9]+(\.[0-9]+){exp}? {yylval._constant = new constant_node(new complex_type(real), replace_all(string(strdup(yytext)), "d", "e")); return NUMBER;}
<STMT>b"'"(0|1)+"'" {yylval._constant = new constant_node(new complex_type(integer), binary_string_to_int(substring(string(strdup(yytext)), 2, -2))); return NUMBER;}
<STMT>o[0-8]+ {yylval._constant = new constant_node(new complex_type(integer), "0" + substring(string(strdup(yytext)), 1, -1)); return NUMBER;}
<STMT>o"'"[0-8]+"'" {yylval._constant = new constant_node(new complex_type(integer),"0" + substring(string(strdup(yytext)), 2, -2)); return NUMBER;}
<STMT>"'"[0-8]+"'"oa {yylval._constant = new constant_node(new complex_type(integer), "0" + substring(string(strdup(yytext)), 1, -4)); return NUMBER;}
<STMT>\$[0-9a-f]+ {yylval._constant = new constant_node(new complex_type(integer),"0x" + substring(string(strdup(yytext)), 1, -1)); return NUMBER;}
<STMT>x"'"[0-9a-f]+"'" {yylval._constant = new constant_node(new complex_type(integer), "0x" + substring(string(strdup(yytext)), 2, -2)); return NUMBER;}
<STMT>"'"[0-9a-f]+"'"xa {yylval._constant = new constant_node(new complex_type(integer), "0x" + substring(string(strdup(yytext)), 1, -4)); return NUMBER;}
<STMT>z"'"[0-9a-f]+"'" {yylval._constant = new constant_node(new complex_type(integer),"0x" + substring(string(strdup(yytext)), 2, -2)); return NUMBER;}
<STMT>"'"[0-9a-f]+"'"za {yylval._constant = new constant_node(new complex_type(integer), "0x" + substring(string(strdup(yytext)), 1, -4)); return NUMBER;}
<STMT>(".true."|".false.") {yylval._constant = new constant_node(new complex_type(boolean), parse_bool(yytext));return NUMBER;}
	/* describe string*/
<STMT>"'"(\\.|''|[^'])*"'" {yylval._constant = new constant_node(new complex_type(chars), "\"" + replace_all(replace_all(substring(string(strdup(yytext)), 1, -2), "\\", "\\\\"), "''", "'") + "\"");return CHARS;}
<STMT>"\""(\\.|\"\"|[^"])*"\"" {yylval._constant = new constant_node(new complex_type(chars), "\"" + replace_all(replace_all(substring(string(strdup(yytext)), 1, -2), "\\", "\\\\"), "\"\"", "\\\"") + "\"" );return CHARS;}
	/* comparison operators */
<STMT>".eq." {yylval._str = "==";return CMP;}
<STMT>".ne." {yylval._str = "!=";return CMP;}
<STMT>".gt." {yylval._str = ">";return CMP;}
<STMT>".ge." {yylval._str = ">=";return CMP;}
<STMT>".lt." {yylval._str = "<";return CMP;}
<STMT>".le." {yylval._str = "<=";return CMP;}
	/* logical operators */
<STMT>".not." {yylval._str = "~";return NOT;}
<STMT>".and." {yylval._str = "&";return AND;}
<STMT>".or." {yylval._str = "|";return OR;}
<STMT>".eqv." {yylval._str = "&";return EQV;}
<STMT>".neqv." |
<STMT>".xor." {yylval._str = "^";return XOR;}
<STMT>"parameter" {return PARAM;}
<STMT>"if" {return IF;} /* statements */
<STMT>"else" {return ELSE;}
<STMT>"else"(" ")*"if" {return ELSEIF;}
<STMT>"then" {return THEN;}
<STMT>"end"(" ")*"if" {return ENDIF;}
<STMT>"do" {return DO;}
<STMT>"end"(" ")*"do" {return ENDDO;}
<STMT>"while" {return WHILE;}
<STMT>"break" {return BREAK;}
<STMT>"continue" {return CONTINUE;}
<STMT>"return" {return RETURN;}
<STMT>"function" {return FUNCTION;}
<STMT>"subroutine" {return SUBROUTINE;}
<STMT>"call" {return CALL;}
<STMT>"go"(" ")*"to" {return GOTO;}
<STMT>"stop" {return STOP;}
<STMT>"pause" {return PAUSE;}
	/* input / output */
<STMT>"format" {return FORMAT;}
<STMT>"write" {return WRITE;}
<STMT>"read" {return READ;}
<STMT>"print" {return PRINT;}
<STMT>"open" {return OPEN;}
<STMT>"close" {return CLOSE;}
<STMT>"file" {return AFILE;}
	/* main program units */
<STMT>"program "[a-z][a-z0-9_]+ {return PROGRAM;}
<STMT>"end" {return END;}
<STMT>[a-z][0-9a-z_]* {yylval._str = string(strdup(yytext)); return SYMNAME;}
	/*tabs and space*/
<STMT>. {}
. {}
	/*end of file*/
<INITIAL,STMT><<EOF>>        { BEGIN(PROGRAM_ENDS); return END_OF_FILE; }
<PROGRAM_ENDS><<EOF>>      { return 0; }
%%