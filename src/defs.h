//
// Created by danil on 05.12.2021.
//

#ifndef F77CCOMPILER_DEFS_H
#define F77CCOMPILER_DEFS_H

#include <vector>
#include <string>

typedef enum {
    program_unit,
    comment
} node_type;


typedef enum{
    integer,
    real,
    double_precision,
    boolean,
    complex,
    double_complex,
    chars,
    byte_type
} data_type;

typedef struct node {
    node_type type;
    std::vector<node *> childs;
} node;

typedef struct {
    std::string _str;
    struct node *_node;
    string _number;
    data_type _type;
    bool _bool;
} YYSTYPE;
#define YYSTYPE YYSTYPE

#ifndef YYTOKENTYPE
# define YYTOKENTYPE
enum yytokentype {
    /*
     * main
     * */
    PROGRAM = 300,
    END = 301,
    EOL = 302,
    END_OF_FILE = 303,
    COMMENT = 304,
    /*
     * constants
     * */
    BOOL = 400,
    NUMBER = 401,
    CHARS = 402,
    /*
     * definition
     * */
    TYPE = 450,
    PARAMETER = 451,
    SYMNAME = 452,
    /*
     * operators
     * */
    ADD = 500,
    MINUS = 501,
    MUL = 502,
    DIV = 503,
    EQUAL = 504,
    POW = 505,
    LEFT_PARENT = 506,
    RIGHT_PARENT = 507,
    COMMA = 508,
    COLON = 509,
    /*
     * comparison operators
     * */
    CMP = 510,
    /*
     * logical operators
     * */
    NOT = 515,
    AND = 516,
    OR = 517,
    EQV = 518,
    XOR = 519,
    /*
     * logical statements
     * */
    IF = 600,
    THEN = 601,
    ELSE = 602,
    ENDIF = 603,
    DO = 604,
    BREAK = 605,
    CONTINUE = 606,
    RETURN = 607,
    /*
     * statements
     * */
    FUNCTION = 700,
    SUBROUTINE = 701,
    CALL = 702,
    GOTO = 703,
    STOP = 704,
    PAUSE = 705,
    FORMAT = 706,
    /*
     * Input/Output
     * */
    WRITE = 800,
    READ = 801,
    PRINT = 802,
    OPEN = 803,
    CLOSE = 804
};
#endif

extern YYSTYPE yylval;

#endif
