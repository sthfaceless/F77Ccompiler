/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"

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

#line 88 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 135 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"

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



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1011

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    69,    75,    76,    77,    78,    80,    81,
      83,    84,    86,    87,    88,    90,    91,    94,    95,    96,
      97,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,   110,   112,   119,   126,   127,   129,   130,   131,   133,
     134,   135,   136,   137,   139,   140,   141,   148,   150,   151,
     158,   159,   161,   162,   165,   167,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   180,   181,   182,   183,   185,
     186,   188,   198,   212,   213,   214,   219,   220,   221,   226,
     231,   236,   241,   246,   251,   256,   261,   266,   271,   278,
     283,   288
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "END", "EOL", "END_OF_FILE",
  "FUNCTION", "SUBROUTINE", "RETURN", "CALL", "GOTO", "STOP", "PAUSE",
  "IF", "THEN", "ELSE", "ELSEIF", "ENDIF", "DO", "BREAK", "CONTINUE",
  "ENDDO", "WHILE", "READ", "WRITE", "PRINT", "OPEN", "CLOSE", "FORMAT",
  "AFILE", "ADD", "MINUS", "MUL", "POW", "DIV", "EQUAL", "LEFT_PARENT",
  "RIGHT_PARENT", "COMMA", "COLON", "PARAM", "CMP", "OR", "XOR", "AND",
  "EQV", "NEQV", "NOT", "COMMENT", "SYMNAME", "CHARS", "NUMBER", "TYPE",
  "$accept", "program", "program_head", "program_body", "program_end",
  "stmts", "stmt", "exec_stmt", "assign_stmt", "control_stmt", "if_stmt",
  "elseif_stmt", "do_stmt", "io_stmt", "read_stmt", "write_stmt",
  "print_stmt", "format", "nonexec_stmt", "var_def", "fn_def", "fn_call",
  "exp_list", "type", "aexp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   -32,   -17,    -7,   -77,    -4,   -77,   -77,    13,    25,
      -8,   -77,   -77,   155,    39,   275,    43,    63,   -77,   -24,
      17,   120,   290,   122,   -32,   -77,   -77,   -77,   -77,   -77,
      93,   -77,    95,   -77,    96,   -77,   -77,    -5,   -77,   901,
     107,   -21,   109,   -77,   557,   557,   105,   557,   557,   -77,
     275,   557,   117,   -77,   -77,   -77,   -77,   958,   275,   557,
     -77,   557,   557,   557,   227,   110,   -77,   -77,   122,   -77,
     108,    -2,   901,   557,   557,   113,   114,   -77,   -77,   -77,
     118,   119,   322,   369,   103,   416,   664,    24,   557,   104,
     104,   127,   711,   -77,   463,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   130,   711,   758,   805,
     958,   123,    22,   958,   -77,     5,   -77,   -77,   -77,   958,
     958,   -77,   133,   -77,   -77,   -32,    44,   -32,    64,   -77,
     -77,    66,   157,   666,   852,   275,   -77,   -77,    70,   104,
     104,   -20,   -20,   -20,   964,    30,   -16,   128,    54,   -77,
     275,   144,   -77,   557,   141,   557,   -77,   510,   337,   -32,
     384,   -32,   -77,   -32,   -77,   557,   143,   -77,   146,   153,
     958,   557,   958,   -32,    80,   -77,   431,   -77,   478,   619,
     617,   557,   557,   557,   958,   525,   -32,   -77,   -77,   -32,
     156,   -77,     3,   557,   713,   958,   151,   899,   -77,   572,
     760,   557,   -32,   158,   -77,    24,   -77,   -77,   -77,   -77,
     924,   807,   557,   854,   181,   -77,   941,   -77,   -32,   182,
     901,   -32,   901
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    26,     0,    24,    28,     0,     0,
       0,    27,    25,     0,     0,     0,     0,     0,     5,     0,
      71,     0,     0,     0,     0,    17,    18,    21,    22,    19,
      39,    40,    41,     4,    53,    52,    23,     0,    12,     8,
       0,     0,     0,    29,     0,     0,     0,     0,     0,    50,
       0,     0,    76,    75,    74,    44,    73,    51,     0,     0,
      48,     0,     0,     0,     0,     0,     1,     7,     0,     6,
       0,     0,     9,     0,     0,     0,     0,    54,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      83,     0,    51,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    65,     0,    69,    72,     0,    10,     3,    11,    46,
      49,    55,     0,    15,    16,     0,     0,     0,     0,    62,
      67,     0,     0,     0,     0,     0,    77,    65,     0,    81,
      82,    79,    78,    80,    85,    88,    90,    89,    86,    87,
       0,     0,    43,     0,    66,     0,     2,     0,     0,     0,
       0,     0,    68,     0,    38,     0,     0,    66,     0,     0,
      56,     0,    70,     0,     0,    59,     0,    63,     0,     0,
       0,     0,     0,     0,    57,     0,     0,    61,    64,     0,
       0,    30,     0,     0,     0,    45,    47,     0,    58,     0,
       0,     0,     0,     0,    33,     0,    36,    42,    60,    31,
       0,     0,     0,     0,     0,    32,     0,    37,     0,     0,
      34,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   176,   136,    55,   -77,     8,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -14,    10,   -77,
     -77,     0,   -76,   -77,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    71,    39,    79,    80,    25,    26,
      27,   192,    28,    29,    30,    31,    32,    55,    81,    34,
      35,    56,   112,    37,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    60,    76,    57,   117,    57,   126,   128,    24,   131,
      33,   156,    63,    64,    98,    45,    83,    38,   138,   202,
     203,   204,    36,   101,   102,   103,   104,   105,    38,   103,
      24,   105,    69,    40,    86,    87,    91,    89,    90,    36,
      92,    93,    46,    41,   106,    77,    42,   118,    57,   107,
      65,   108,   109,   110,   118,    95,    96,    97,    98,    99,
     154,   155,    44,   119,   120,    43,   100,   101,   102,   103,
     104,   105,    36,    38,   102,   103,    58,   105,   134,    72,
      61,   174,   159,   155,    36,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    84,   101,   102,   103,
      62,   105,   161,   155,   162,   155,   196,   129,   167,   155,
       2,     3,     4,     5,     6,     7,     8,     9,   186,   155,
      66,   166,    10,    11,    12,    57,    70,    13,    14,    15,
      16,    17,    73,    36,    74,    75,   168,    97,    98,    99,
      57,    88,   133,   170,    82,   172,    85,   101,   102,   103,
     104,   105,    78,    19,    94,   180,    20,   116,    36,   153,
      36,   184,   114,   121,   122,     5,   135,   123,   124,   150,
     157,   195,   163,   197,   169,   105,    36,   171,    36,    36,
     158,   181,   160,   205,   182,    36,    47,    48,    49,   183,
     155,   210,    50,   201,    36,   212,   218,   221,    68,    36,
      36,     0,   216,    51,   115,    52,    53,    54,     0,     0,
       0,    36,     0,    36,   176,     0,   178,     0,   179,     0,
      36,     0,    36,     0,     0,     0,     0,     0,   185,     0,
       0,     0,     0,     0,     0,   194,     0,     5,     0,     0,
       0,   199,     0,     0,   200,     1,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,   211,    47,    48,
     213,    10,    11,    12,    59,   111,    13,    14,    15,    16,
      17,     0,     0,   220,     0,    51,   222,    52,    53,    54,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,    18,    19,     1,     0,    20,     0,     2,     3,     4,
       5,     6,     7,     8,     9,     0,    47,    48,    49,    10,
      11,    12,    59,     0,    13,    14,    15,    16,    17,     0,
       0,     0,     0,    51,     0,    52,    53,    54,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    67,
      19,   175,     0,    20,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    47,    48,     0,    10,    11,    12,    59,
     125,    13,    14,    15,    16,    17,     0,     0,     0,     0,
      51,     0,    52,    53,    54,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,    78,    19,   177,     0,
      20,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      47,    48,     0,    10,    11,    12,    59,   127,    13,    14,
      15,    16,    17,     0,     0,     0,     0,    51,     0,    52,
      53,    54,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    78,    19,   187,     0,    20,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    47,    48,     0,
      10,    11,    12,    59,   130,    13,    14,    15,    16,    17,
       0,     0,     0,     0,    51,     0,    52,    53,    54,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
      78,    19,   188,     0,    20,     2,     3,     4,     5,     6,
       7,     8,     9,     0,    47,    48,     0,    10,    11,    12,
      59,   137,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    51,     0,    52,    53,    54,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,    78,    19,   198,
       0,    20,     2,     3,     4,     5,     6,     7,     8,     9,
       0,    47,    48,     0,    10,    11,    12,    59,   173,    13,
      14,    15,    16,    17,     0,     0,     0,     0,    51,     0,
      52,    53,    54,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,    78,    19,   208,     0,    20,     2,
       3,     4,     5,     6,     7,     8,     9,     0,    47,    48,
       0,    10,    11,    12,    59,     0,    13,    14,    15,    16,
      17,     0,     0,     0,     0,    51,     0,    52,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    19,     0,     0,    20,     2,     3,     4,     5,
       6,     7,     8,     9,     0,   189,   190,   191,    10,    11,
      12,     0,     0,    13,    14,    15,    16,    17,    95,    96,
      97,    98,    99,     0,     0,     0,   193,     0,     0,   100,
     101,   102,   103,   104,   105,     0,    38,     0,    78,    19,
       0,     0,    20,     2,     3,     4,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,    12,   164,     0,
      13,    14,    15,    16,    17,    95,    96,    97,    98,    99,
       0,     0,   132,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,    78,    19,     0,     0,    20,
       2,     3,     4,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,    11,    12,   206,     0,    13,    14,    15,
      16,    17,    95,    96,    97,    98,    99,     0,     0,   136,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,     0,    78,    19,     0,     0,    20,     2,     3,     4,
       5,     6,     7,     8,     9,     0,     0,     0,   209,    10,
      11,    12,     0,     0,    13,    14,    15,    16,    17,    95,
      96,    97,    98,    99,     0,     0,     0,   151,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,    78,
      19,     0,     0,    20,     2,     3,     4,     5,     6,     7,
       8,     9,     0,     0,     0,   215,    10,    11,    12,     0,
       0,    13,    14,    15,    16,    17,    95,    96,    97,    98,
      99,     0,     0,   152,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     0,     0,     0,    78,    19,     0,     0,
      20,     2,     3,     4,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,    11,    12,   217,     0,    13,    14,
      15,    16,    17,    95,    96,    97,    98,    99,     0,     0,
       0,   165,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,    78,    19,     0,     0,    20,     2,     3,
       4,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,    11,    12,     0,     0,    13,    14,    15,    16,    17,
      95,    96,    97,    98,    99,     0,     0,   207,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,     0,
      78,    19,     0,     0,    20,    95,    96,    97,    98,    99,
       0,     0,   214,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    95,    96,    97,    98,    99,     0,     0,   219,
       0,     0,     0,   100,   101,   102,   103,   104,   105,    95,
      96,    97,    98,    99,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,   101,   102,   103,
     104,   105
};

static const yytype_int16 yycheck[] =
{
       0,    15,     7,    13,     6,    15,    82,    83,     0,    85,
       0,     6,    36,    37,    34,    23,    37,    49,    94,    16,
      17,    18,    22,    43,    44,    45,    46,    47,    49,    45,
      22,    47,    22,    50,    44,    45,    50,    47,    48,    39,
      50,    51,    50,    50,    58,    50,    50,    49,    58,    59,
      33,    61,    62,    63,    49,    31,    32,    33,    34,    35,
      38,    39,    37,    73,    74,    52,    42,    43,    44,    45,
      46,    47,    72,    49,    44,    45,    37,    47,    88,    24,
      37,   157,    38,    39,    84,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    41,    43,    44,    45,
      37,    47,    38,    39,    38,    39,   182,     4,    38,    39,
       7,     8,     9,    10,    11,    12,    13,    14,    38,    39,
       0,   135,    19,    20,    21,   135,     4,    24,    25,    26,
      27,    28,    39,   133,    39,    39,   150,    33,    34,    35,
     150,    36,    87,   153,    37,   155,    37,    43,    44,    45,
      46,    47,    49,    50,    37,   165,    53,    49,   158,    36,
     160,   171,    52,    50,    50,    10,    39,    49,    49,    39,
      37,   181,    15,   183,    30,    47,   176,    36,   178,   179,
     125,    38,   127,   193,    38,   185,    31,    32,    33,    36,
      39,   201,    37,    37,   194,    37,    15,    15,    22,   199,
     200,    -1,   212,    48,    68,    50,    51,    52,    -1,    -1,
      -1,   211,    -1,   213,   159,    -1,   161,    -1,   163,    -1,
     220,    -1,   222,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,   180,    -1,    10,    -1,    -1,
      -1,   186,    -1,    -1,   189,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,   202,    31,    32,
     205,    19,    20,    21,    37,    38,    24,    25,    26,    27,
      28,    -1,    -1,   218,    -1,    48,   221,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    49,    50,     3,    -1,    53,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    31,    32,    33,    19,
      20,    21,    37,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,     4,    -1,    53,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    31,    32,    -1,    19,    20,    21,    37,
      38,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,     4,    -1,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      31,    32,    -1,    19,    20,    21,    37,    38,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,     4,    -1,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    31,    32,    -1,
      19,    20,    21,    37,    38,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,     4,    -1,    53,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    31,    32,    -1,    19,    20,    21,
      37,    38,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,     4,
      -1,    53,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    31,    32,    -1,    19,    20,    21,    37,    38,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,     4,    -1,    53,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    31,    32,
      -1,    19,    20,    21,    37,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    49,    50,
      -1,    -1,    53,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    31,    32,    33,    34,    35,    -1,    -1,    38,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    28,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    31,    32,    33,    34,
      35,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    28,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    31,    32,    33,    34,    35,    -1,    -1,    38,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    31,
      32,    33,    34,    35,    -1,    31,    32,    33,    34,    35,
      42,    43,    44,    45,    46,    47,    42,    43,    44,    45,
      46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      19,    20,    21,    24,    25,    26,    27,    28,    49,    50,
      53,    55,    56,    57,    61,    62,    63,    64,    66,    67,
      68,    69,    70,    72,    73,    74,    75,    77,    49,    59,
      50,    50,    50,    52,    37,    23,    50,    31,    32,    33,
      37,    48,    50,    51,    52,    71,    75,    78,    37,    37,
      71,    37,    37,    36,    37,    33,     0,    49,    57,    72,
       4,    58,    59,    39,    39,    39,     7,    50,    49,    60,
      61,    72,    37,    37,    59,    37,    78,    78,    36,    78,
      78,    71,    78,    78,    37,    31,    32,    33,    34,    35,
      42,    43,    44,    45,    46,    47,    71,    78,    78,    78,
      78,    38,    76,    78,    52,    58,    49,     6,    49,    78,
      78,    50,    50,    49,    49,    38,    76,    38,    76,     4,
      38,    76,    38,    59,    78,    39,    38,    38,    76,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      39,    39,    38,    36,    38,    39,     6,    37,    59,    38,
      59,    38,    38,    15,    22,    39,    71,    38,    71,    30,
      78,    36,    78,    38,    76,     4,    59,     4,    59,    59,
      78,    38,    38,    36,    78,    59,    38,     4,     4,    16,
      17,    18,    65,    39,    59,    78,    76,    78,     4,    59,
      59,    37,    16,    17,    18,    78,    22,    38,     4,    18,
      78,    59,    37,    59,    38,    18,    78,    22,    15,    38,
      59,    15,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       7,     9,    10,     8,     6,     7,     8,    10,     5,     1,
       1,     1,     8,     4,     2,     7,     3,     7,     2,     3,
       1,     1,     1,     1,     2,     3,     5,     6,     7,     6,
       8,     7,     4,     6,     7,     3,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 64 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_childs((yyvsp[-3]._items));
	program_root.add_child((yyvsp[-2]._node));
	translate_program();
}
#line 1675 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 3:
#line 70 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_child((yyvsp[-2]._node));
	translate_program();
}
#line 1684 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 4:
#line 75 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                           {(yyval._items) = {(yyvsp[0]._items)};}
#line 1690 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 5:
#line 76 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
          {(yyval._items) = {create_comment((yyvsp[0]._str))};}
#line 1696 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 6:
#line 77 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                             {(yyvsp[-1]._items).insert((yyvsp[-1]._items).end(),(yyvsp[0]._items).begin(), (yyvsp[0]._items).end());(yyval._items) = (yyvsp[-1]._items);}
#line 1702 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 7:
#line 78 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                       {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str)));(yyval._items) = (yyvsp[-1]._items);}
#line 1708 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 8:
#line 80 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                            {main_node* _main = new main_node((yyvsp[0]._items));(yyval._node) = _main;}
#line 1714 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 9:
#line 81 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                  {(yyvsp[0]._items).insert((yyvsp[0]._items).begin(), (yyvsp[-1]._node));main_node* _main = new main_node((yyvsp[0]._items));(yyval._node) = _main;}
#line 1720 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 12:
#line 86 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
               {(yyval._items) = {create_comment((yyvsp[0]._str))};}
#line 1726 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 13:
#line 87 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str)));(yyval._items) = (yyvsp[-1]._items);}
#line 1732 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 14:
#line 88 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
             {(yyvsp[-1]._items).insert((yyvsp[-1]._items).end(), (yyvsp[0]._items).begin(), (yyvsp[0]._items).end());(yyval._items) = (yyvsp[-1]._items);}
#line 1738 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 15:
#line 90 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                        {(yyval._items) = {(yyvsp[-1]._node), create_comment((yyvsp[0]._str))};}
#line 1744 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 16:
#line 91 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                       {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str))); (yyval._items) = (yyvsp[-1]._items);}
#line 1750 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 20:
#line 97 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                {(yyval._node) = new assign_node((yyvsp[-2]._str), (yyvsp[0]._eval_tree));}
#line 1756 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 24:
#line 102 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
       {(yyval._node) = sexpr("goto");}
#line 1762 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 25:
#line 103 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
           {(yyval._node) = sexpr("continue");}
#line 1768 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 26:
#line 104 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
         {(yyval._node) = sexpr("return");}
#line 1774 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 27:
#line 105 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
        {(yyval._node) = sexpr("break");}
#line 1780 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 28:
#line 106 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
       {(yyval._node) = sexpr("exit(0)");}
#line 1786 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 29:
#line 107 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
               {(yyval._node) = sexpr("sleep("+(yyvsp[0]._constant)->val+")");}
#line 1792 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 30:
#line 109 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                           {(yyval._node) = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-4]._eval_tree), (yyvsp[-1]._items))));}
#line 1798 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 31:
#line 110 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                               {
(yyval._node) = new list_node({dynamic_cast<node*>(new if_block("if", (yyvsp[-6]._eval_tree), (yyvsp[-3]._items))), dynamic_cast<node*>(new if_block("else", nullptr, (yyvsp[-1]._items)))});}
#line 1805 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 32:
#line 113 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{	
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-7]._eval_tree), (yyvsp[-4]._items))));
	list->add_list((yyvsp[-3]._list));
	list->add_item(dynamic_cast<node*>(new if_block("else", nullptr, (yyvsp[-1]._items))));
	(yyval._node) = list;
}
#line 1816 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 33:
#line 120 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-5]._eval_tree), (yyvsp[-2]._items))));
	list->add_list((yyvsp[-1]._list));
	(yyval._node) = list;
}
#line 1826 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 34:
#line 126 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                             {(yyval._list) = new list_node(dynamic_cast<node*>(new if_block("else if", (yyvsp[-3]._eval_tree), (yyvsp[0]._items))));}
#line 1832 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 35:
#line 127 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                              {(yyvsp[-6]._list)->add_item(dynamic_cast<node*>(new if_block("else if", (yyvsp[-3]._eval_tree), (yyvsp[0]._items)))); (yyval._list) = (yyvsp[-6]._list);}
#line 1838 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 36:
#line 129 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                      {(yyval._node) = new doloop_node(new assign_node((yyvsp[-6]._str), (yyvsp[-4]._eval_tree)), (yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1844 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 37:
#line 130 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                          {(yyval._node) = new doloop_node(new assign_node((yyvsp[-8]._str), (yyvsp[-6]._eval_tree)), (yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1850 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 38:
#line 131 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                            {(yyval._node) = new dowhile_node((yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1856 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 42:
#line 136 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                            {(yyval._node) = new open_node((yyvsp[-5]._eval_tree), (yyvsp[-1]._eval_tree));}
#line 1862 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 43:
#line 137 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                      {(yyval._node) = new close_node((yyvsp[-1]._eval_tree));}
#line 1868 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 44:
#line 139 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                       {(yyval._node) = new read_node(nullptr, (yyvsp[0]._eval_tree), new list_node());}
#line 1874 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 45:
#line 140 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                         {(yyval._node) = new read_node((yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), new list_node(dynamic_cast<node*>((yyvsp[0]._eval_tree))));}
#line 1880 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 46:
#line 142 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	auto* _node = dynamic_cast<read_node*>((yyvsp[-2]._node));
	_node->ioargs->add_item(dynamic_cast<node*>((yyvsp[0]._eval_tree)));
	(yyval._node) = _node;
}
#line 1890 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 47:
#line 148 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                                        {(yyval._node) = new write_node((yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), (yyvsp[0]._list));}
#line 1896 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 48:
#line 150 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                         {(yyval._node) = new write_node(nullptr, (yyvsp[0]._eval_tree), new list_node());}
#line 1902 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 49:
#line 152 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	auto* _node = dynamic_cast<write_node*>((yyvsp[-2]._node));
	_node->ioargs->add_item(dynamic_cast<node*>((yyvsp[0]._eval_tree)));
	(yyval._node) = _node;
}
#line 1912 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 50:
#line 158 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
            {(yyval._eval_tree) = nullptr;}
#line 1918 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 54:
#line 165 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                      {(yyval._items) = {new var_node((yyvsp[-1]._complex_type), (yyvsp[0]._str))};}
#line 1924 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 55:
#line 167 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                        {(yyvsp[-2]._items).insert((yyvsp[-2]._items).end(), new var_node(dynamic_cast<var_node*>(*(yyvsp[-2]._items).begin())->type,(yyvsp[0]._str))); (yyval._items) = (yyvsp[-2]._items);}
#line 1930 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 56:
#line 170 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                    {(yyval._items) = {new function_node((yyvsp[-4]._str), new list_node(), {new assign_node((yyvsp[-4]._str), (yyvsp[0]._eval_tree))})};}
#line 1936 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 57:
#line 171 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                       {(yyval._items) = {new function_node((yyvsp[-5]._str), (yyvsp[-3]._list), {new assign_node((yyvsp[-5]._str), (yyvsp[0]._eval_tree))})};}
#line 1942 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 58:
#line 172 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                           {(yyval._items) = {new function_node((yyvsp[-6]._complex_type), (yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 1948 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 59:
#line 173 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                      {(yyval._items) = {new function_node((yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 1954 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 60:
#line 174 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                                    {(yyval._items) = {new function_node((yyvsp[-7]._complex_type), (yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 1960 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 61:
#line 175 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                               {(yyval._items) = {new function_node((yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 1966 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 62:
#line 176 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                               {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-2]._str), new list_node(), (yyvsp[-1]._items))};}
#line 1972 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 63:
#line 177 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                        {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 1978 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 64:
#line 178 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                                 {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 1984 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 65:
#line 180 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                          {(yyval._node) = new call_node((yyvsp[-2]._str), new list_node());}
#line 1990 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 66:
#line 181 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                            {(yyval._node) = new call_node((yyvsp[-3]._str), (yyvsp[-1]._list));}
#line 1996 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 67:
#line 182 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                        {(yyval._node) = new call_node((yyvsp[-2]._str), new list_node());}
#line 2002 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 68:
#line 183 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                 {(yyval._node) = new call_node((yyvsp[-3]._str), (yyvsp[-1]._list));}
#line 2008 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 69:
#line 185 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
               {(yyval._list) = new list_node(dynamic_cast<node*>((yyvsp[0]._eval_tree)), ", ");}
#line 2014 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 70:
#line 186 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                      {(yyvsp[-2]._list)->add_item(dynamic_cast<node*>((yyvsp[0]._eval_tree)));(yyval._list) = (yyvsp[-2]._list);}
#line 2020 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 71:
#line 189 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	if((yyvsp[0]._type) == complex || (yyvsp[0]._type) == double_complex) {
		program_root.add_header(def_complex);
	}
	if((yyvsp[0]._type) == chars){
		program_root.add_header(def_str);
	}
	(yyval._complex_type) = new complex_type((yyvsp[0]._type));
}
#line 2034 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 72:
#line 199 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	if((yyvsp[-2]._type) == complex || (yyvsp[-2]._type) == double_complex) {
		program_root.add_header(def_complex);
	}
	if((yyvsp[-2]._type) == chars){
        	program_root.add_header(def_str);
        }
	int multiplier = 1;
	if((yyvsp[-2]._type) == chars) multiplier = stoi((yyvsp[0]._constant)->val);
	(yyval._complex_type) = new complex_type((yyvsp[-2]._type), multiplier);
}
#line 2050 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 73:
#line 212 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
              {(yyval._eval_tree) = new eval_tree(e_name, (yyvsp[0]._node));}
#line 2056 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 74:
#line 213 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
         {(yyval._eval_tree) = new eval_tree(e_constant, (yyvsp[0]._constant));}
#line 2062 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 75:
#line 215 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
 {
 	program_root.add_header(def_str);
 	(yyval._eval_tree) = new eval_tree(e_constant, (yyvsp[0]._constant));
 }
#line 2071 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 76:
#line 219 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
          {(yyval._eval_tree) = new eval_tree(e_name, new name_node((yyvsp[0]._str)));}
#line 2077 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 77:
#line 220 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                {(yyval._eval_tree) = (yyvsp[-1]._eval_tree);}
#line 2083 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 78:
#line 222 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_pow);
	(yyval._eval_tree) = new eval_tree(e_pow, sexpr("pow"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2092 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 79:
#line 227 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_mul);
	(yyval._eval_tree) = new eval_tree(e_mul, sexpr("*"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2101 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 80:
#line 232 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_div);
	(yyval._eval_tree) = new eval_tree(e_div, sexpr("/"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2110 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 81:
#line 237 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_add);
	(yyval._eval_tree) = new eval_tree(e_add, sexpr("+"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2119 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 82:
#line 242 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_minus);
	(yyval._eval_tree) = new eval_tree(e_minus, sexpr("-"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2128 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 83:
#line 247 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_uminus);
	(yyval._eval_tree) = new eval_tree(e_uminus, sexpr("-"), {(yyvsp[0]._eval_tree)});
}
#line 2137 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 84:
#line 252 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_uplus);
	(yyval._eval_tree) = new eval_tree(e_uplus, sexpr("+"), {(yyvsp[0]._eval_tree)});
}
#line 2146 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 85:
#line 257 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(get_cmp_header((yyvsp[-1]._str)));
	(yyval._eval_tree) = new eval_tree(get_cmp_eval((yyvsp[-1]._str)), sexpr((yyvsp[-1]._str)), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2155 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 86:
#line 262 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_and);
	(yyval._eval_tree) = new eval_tree(e_and, sexpr("&"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2164 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 87:
#line 267 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_xor);
	(yyval._eval_tree) = new eval_tree(e_xor, sexpr("^"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2173 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 88:
#line 272 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
{
	program_root.add_header(def_or);
	(yyval._eval_tree) = new eval_tree(e_or, sexpr("|"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
}
#line 2184 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 89:
#line 279 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_and);
	(yyval._eval_tree) = new eval_tree(e_and, sexpr("&"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2193 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 90:
#line 284 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_xor);
	(yyval._eval_tree) = new eval_tree(e_xor, sexpr("^"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2202 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 91:
#line 289 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_not);
	(yyval._eval_tree) = new eval_tree(e_not, sexpr("~"), {(yyvsp[0]._eval_tree)});
}
#line 2211 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;


#line 2215 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 294 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"

int main(int argc, char **args){
//	yydebug = 1;
	if(argc > 1 && **(args+1) == '-' && *(*(args+1)+1) == 'd'){
		debug();
	}else {
		yyparse();
	}
	return 0;
}
