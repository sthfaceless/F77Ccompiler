//
// Created by danil on 12.12.2021.
//

#ifndef F77CCOMPILER_DEBUG_H
#define F77CCOMPILER_DEBUG_H
#include <map>
#include <cstring>
#include "f77parser.h"

using namespace std;

extern yytokentype yylex();
extern YYSTYPE yylval;
extern char* yytext;

std::map<yytokentype, std::string> token_map = {
        {PROGRAM, "program"},
        {END, "end"},
        {EOL, "eol"},
        {END_OF_FILE, "end_of_file"},
        {COMMENT, "comment"},
        {NUMBER, "number"},
        {CHARS, "chars"},
        {TYPE, "type"},
        {PARAM, "param"},
        {SYMNAME, "symname"},
        {ADD, "add"},
        {MINUS, "minus"},
        {MUL, "mul"},
        {POW, "pow"},
        {DIV, "div"},
        {EQUAL, "equal"},
        {LEFT_PARENT, "left_parent"},
        {RIGHT_PARENT, "right_parent"},
        {COMMA, "comma"},
        {COLON, "colon"},
        {CMP, "cmp"},
        {NOT, "not"},
        {AND, "and"},
        {OR, "or"},
        {EQV, "eqv"},
        {XOR, "xor"},
        {IF, "if"},
        {THEN, "then"},
        {ELSE, "else"},
        {ENDIF, "endif"},
        {DO, "do"},
        {BREAK, "break"},
        {CONTINUE, "continue"},
        {RETURN, "return"},
        {FUNCTION, "function"},
        {SUBROUTINE, "subroutine"},
        {CALL, "call"},
        {GOTO, "goto"},
        {STOP, "stop"},
        {PAUSE, "pause"},
        {FORMAT, "format"},
        {WRITE, "write"},
        {READ, "read"},
        {PRINT, "print"},
        {OPEN, "open"},
        {CLOSE, "close"}
};

void debug(){
    enum yytokentype token;
    while ((token = yylex())){
        string token_val = replace_all(string(strdup(yytext)), "\n", "\\n");
        cerr << token_map[token] << "[" << token_val << "]" << " ";
        if(token == COMMENT && yylval._str[yylval._str.size()-1] == '\n'){
            cerr << endl;
        }
    }
}


#endif //F77CCOMPILER_DEBUG_H
