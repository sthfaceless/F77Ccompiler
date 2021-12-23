/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HOME_DANIL_CLIONPROJECTS_F77CCOMPILER_SRC_F77PARSER_H_INCLUDED
# define YY_YY_HOME_DANIL_CLIONPROJECTS_F77CCOMPILER_SRC_F77PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"

	#include "defs.h"

#line 52 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.h"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    END = 259,
    EOL = 260,
    END_OF_FILE = 261,
    FUNCTION = 262,
    SUBROUTINE = 263,
    RETURN = 264,
    CALL = 265,
    GOTO = 266,
    STOP = 267,
    PAUSE = 268,
    IF = 269,
    THEN = 270,
    ELSE = 271,
    ELSEIF = 272,
    ENDIF = 273,
    DO = 274,
    BREAK = 275,
    CONTINUE = 276,
    ENDDO = 277,
    WHILE = 278,
    READ = 279,
    WRITE = 280,
    PRINT = 281,
    OPEN = 282,
    CLOSE = 283,
    FORMAT = 284,
    AFILE = 285,
    ADD = 286,
    MINUS = 287,
    MUL = 288,
    POW = 289,
    DIV = 290,
    EQUAL = 291,
    LEFT_PARENT = 292,
    RIGHT_PARENT = 293,
    COMMA = 294,
    COLON = 295,
    PARAM = 296,
    CMP = 297,
    OR = 298,
    XOR = 299,
    AND = 300,
    EQV = 301,
    NEQV = 302,
    NOT = 303,
    COMMENT = 304,
    SYMNAME = 305,
    CHARS = 306,
    NUMBER = 307,
    TYPE = 308
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_DANIL_CLIONPROJECTS_F77CCOMPILER_SRC_F77PARSER_H_INCLUDED  */
