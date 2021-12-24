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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

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
       0,    64,    64,    70,    76,    77,    78,    79,    81,    82,
      84,    85,    87,    88,    89,    91,    92,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,   110,   113,   120,   127,   128,   130,   131,   132,   134,
     135,   136,   137,   138,   140,   141,   142,   143,   144,   145,
     146,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   159,   160,   161,   168,   169,   172,   173,   175,   176,
     181,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     193,   194,   195,   196,   198,   199,   201,   211,   225,   226,
     227,   232,   233,   234,   237,   242,   247,   252,   257,   262,
     267,   272,   277,   282,   287,   294,   299,   304,   310
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
  "stmts", "stmt", "exec_stmt", "control_stmt", "if_stmt", "elseif_stmt",
  "do_stmt", "io_stmt", "read_stmt", "write_stmt", "print_stmt",
  "nonexec_stmt", "var_def", "assign_stmt", "fn_def", "fn_call",
  "exp_list", "type", "aexp", "symname", YY_NULLPTR
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

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,   -35,   -26,   -26,   -79,   -26,   416,   -79,   416,   -15,
     -16,   -79,   -79,   -12,    -9,   130,    -4,     8,   -79,   -79,
     344,     4,    48,    94,    39,   -35,   -79,   -79,   -79,   -79,
     -79,   -79,    61,   -79,    84,   -79,   -79,   -79,    -6,     3,
     -79,  1041,    41,   -19,    87,   416,   416,   416,   416,   -79,
     -79,   -79,  1258,    88,  1258,   416,   416,   106,   102,   160,
     244,   -79,  1258,   416,   416,   -79,    24,    -3,   -79,   -79,
      39,   -79,    96,     9,  1041,   416,   -26,   -26,   -79,   115,
     416,   298,   -79,   -79,   104,   107,   370,   462,   430,   509,
     141,   141,   854,   -79,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   556,  1054,   804,   416,   416,
      27,   945,   116,   995,  1071,  1088,   -79,    10,   -79,   -79,
     -79,  1258,   -79,   115,   120,  1258,   122,    44,  1258,   -79,
     -79,   -35,    52,   -35,    60,   -79,   -79,    71,   -79,   416,
     141,   141,    92,    92,    92,  1264,    28,   -28,   112,   105,
     -79,   -79,    73,   149,   806,  1105,   126,   416,   603,   416,
     650,   697,   416,  1026,   136,   -79,   -79,   885,   416,   132,
     416,   477,   -35,   524,   -35,   -79,  1122,   -79,   -35,   -79,
     416,   126,   131,  1139,   126,   134,  1156,   145,  1173,   126,
     151,  1190,   154,   -35,    78,  1258,   416,  1258,   -79,   571,
     -79,   618,   -79,   759,   757,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   665,   -35,  1258,   -79,   -79,   -35,
     157,   -79,    69,   416,   853,   126,   126,   126,   126,   126,
     126,   126,   126,  1207,   -79,   712,   900,   416,   -35,   158,
     -79,   804,   -79,   -79,   -79,   -79,  1224,   947,   416,   994,
     181,   -79,  1241,   -79,   -35,   185,  1041,   -35,  1041
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    26,     0,     0,    28,     0,     0,
       0,    27,    25,     0,     0,     0,     0,     0,     5,   108,
       0,    86,     0,     0,     0,     0,    18,    21,    22,    19,
      39,    40,    41,     4,    65,    17,    64,    23,     0,     0,
      12,     8,     0,     0,     0,     0,     0,     0,     0,    90,
      89,    88,    24,    91,    29,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     0,    20,     0,     0,     1,     7,
       0,     6,     0,     0,     9,     0,     0,     0,    67,    66,
       0,     0,    13,    14,     0,     0,     0,     0,     0,     0,
     100,    99,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    10,     3,
      11,    63,    69,    68,     0,    70,    80,     0,    84,    15,
      16,     0,     0,     0,     0,    77,    82,     0,    92,     0,
      97,    98,    95,    94,    96,   101,   104,   106,   105,   102,
     103,    80,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,    55,     0,     0,    43,     2,     0,     0,    81,
       0,     0,     0,     0,     0,    83,     0,    81,     0,    38,
       0,    45,     0,     0,    46,     0,     0,     0,     0,    60,
       0,     0,     0,     0,     0,    71,     0,    85,    74,     0,
      78,     0,    93,     0,     0,     0,     0,     0,     0,    51,
      53,    52,    54,     0,     0,     0,    72,    76,    79,     0,
       0,    30,     0,     0,     0,    50,    48,    49,    47,    56,
      58,    57,    59,     0,    73,     0,     0,     0,     0,     0,
      33,     0,    36,    42,    75,    31,     0,     0,     0,     0,
       0,    32,     0,    37,     0,     0,    34,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -79,   179,   143,   173,   -79,    12,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,    13,   -79,   -34,   -79,
       6,   -78,   -79,   223,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    73,    41,    83,    84,    26,    27,
     222,    28,    29,    30,    31,    32,    85,    34,    35,    36,
      51,   127,    38,   128,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    77,    42,    43,    78,    44,    37,    56,   132,   134,
      57,   137,    25,    33,    40,   119,   166,   102,    87,   104,
      66,    58,    55,    39,    19,    59,    37,   152,    60,    37,
      40,   156,    65,    63,    19,    25,    71,    67,    79,    80,
      81,    39,   122,    72,    19,    64,     1,    37,    68,   116,
       2,     3,     4,     5,     6,     7,     8,     9,   120,   120,
      80,   105,    10,    11,    12,   157,   158,    13,    14,    15,
      16,    17,   101,   102,    39,   104,   123,   124,    86,   181,
      37,   184,   169,   170,   189,   238,   239,   240,    39,   194,
     172,   170,    18,    19,    37,    20,    21,     1,   174,   170,
      75,     2,     3,     4,     5,     6,     7,     8,     9,   175,
     170,   177,   170,    10,    11,    12,   215,   170,    13,    14,
      15,    16,    17,    76,    89,   105,    97,   225,   226,   227,
     228,   229,   230,   231,   232,   100,   101,   102,   103,   104,
       5,   109,   108,    69,    19,   118,    20,    21,   100,   101,
     102,    80,   104,   129,    39,   161,   130,   167,   168,   104,
      37,    45,    46,    61,   178,   170,   192,    47,   196,   205,
       5,    39,   207,    39,    96,    97,    98,    37,    48,    37,
      19,    49,    50,   209,   100,   101,   102,   103,   104,   211,
     213,    45,    46,   110,   237,   248,   254,    47,    74,    39,
     257,    39,    70,    39,     0,    37,     0,    37,    48,    37,
      19,    49,    50,   117,    39,     0,    88,     0,     0,     0,
      37,     0,     0,     0,    39,     0,     0,     0,     0,    52,
      37,    54,     0,     0,     0,    39,    39,     0,    62,     0,
       0,    37,    37,     0,     0,     0,     0,    39,     0,    39,
       0,     0,     0,    37,     5,    37,    39,     0,    39,     0,
       0,     0,    37,     0,    37,     0,     0,     0,    90,    91,
      92,    93,     0,     0,     0,    45,    46,   112,   106,   107,
     154,    47,   111,   113,     0,     0,   114,   115,     0,     0,
       0,     0,    48,     0,    19,    49,    50,     0,   121,     0,
       0,     0,     0,   125,   171,     0,   173,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,    45,
      46,   155,     0,     0,     0,    47,   126,     0,     0,     0,
       0,     0,     0,     0,     0,   199,    48,   201,    19,    49,
      50,   203,     0,     4,     5,     6,     7,     8,     9,     0,
       0,     0,   176,    10,    11,    12,   214,     0,    13,    14,
      15,    16,    17,     0,     0,     0,     0,   224,     0,     0,
       5,   183,     0,   186,   188,     0,   191,     0,   235,     0,
       0,   195,   236,   197,    19,     0,    20,     0,     0,     0,
       0,    45,    46,   204,     0,     0,     0,    47,   131,     0,
       0,   247,     0,     0,   249,     0,     0,     0,    48,   216,
      19,    49,    50,     0,     0,     0,     5,   256,     0,     0,
     258,     0,     0,     0,   135,     0,   233,     2,     3,     4,
       5,     6,     7,     8,     9,     0,   241,    45,    46,    10,
      11,    12,     0,    47,    13,    14,    15,    16,    17,     0,
     246,     0,     0,     0,    48,     0,    19,    49,    50,     0,
       0,   252,     5,     0,     0,     0,     0,     0,     0,    82,
      19,   198,    20,    21,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    45,    46,     0,    10,    11,    12,    47,
     133,    13,    14,    15,    16,    17,     0,     0,     0,     0,
      48,     0,    19,    49,    50,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,    82,    19,   200,    20,
      21,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      45,    46,     0,    10,    11,    12,    47,   136,    13,    14,
      15,    16,    17,     0,     0,     0,     0,    48,     0,    19,
      49,    50,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    82,    19,   217,    20,    21,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    45,    46,     0,
      10,    11,    12,    47,   151,    13,    14,    15,    16,    17,
       0,     0,     0,     0,    48,     0,    19,    49,    50,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
      82,    19,   218,    20,    21,     2,     3,     4,     5,     6,
       7,     8,     9,     0,    45,    46,   182,    10,    11,    12,
      47,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    48,     0,    19,    49,    50,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,    82,    19,   234,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
       0,    45,    46,   185,    10,    11,    12,    47,     0,    13,
      14,    15,    16,    17,     0,     0,     0,     0,    48,     0,
      19,    49,    50,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,    82,    19,   244,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,     0,    45,    46,
     187,    10,    11,    12,    47,     0,    13,    14,    15,    16,
      17,     0,     0,     0,     0,    48,     0,    19,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    19,     0,    20,    21,     2,     3,     4,     5,
       6,     7,     8,     9,     0,   219,   220,   221,    10,    11,
      12,     0,     0,    13,    14,    15,    16,    17,    94,    95,
      96,    97,    98,     0,     0,     0,   223,     0,     0,    99,
     100,   101,   102,   103,   104,     0,    40,     0,    82,    19,
       0,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,    12,   179,     0,
      13,    14,    15,    16,    17,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,     0,    40,     0,    82,    19,     0,    20,    21,
       2,     3,     4,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,    11,    12,   242,     0,    13,    14,    15,
      16,    17,     0,     0,     0,    94,    95,    96,    97,    98,
       0,     0,   138,   139,     0,     5,    99,   100,   101,   102,
     103,   104,    82,    19,     0,    20,    21,     2,     3,     4,
       5,     6,     7,     8,     9,     0,    45,    46,   245,    10,
      11,    12,    47,   193,    13,    14,    15,    16,    17,     0,
       0,     0,     0,    48,     0,    19,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      19,     0,    20,    21,     2,     3,     4,     5,     6,     7,
       8,     9,     0,     0,     0,   251,    10,    11,    12,     0,
       0,    13,    14,    15,    16,    17,    94,    95,    96,    97,
      98,     0,     0,   159,   160,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,    82,    19,     0,    20,
      21,     2,     3,     4,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,    11,    12,   253,     0,    13,    14,
      15,    16,    17,     0,     0,     0,    94,    95,    96,    97,
      98,     0,     0,   162,   163,     0,     5,    99,   100,   101,
     102,   103,   104,    82,    19,     0,    20,    21,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    45,    46,   190,
      10,    11,    12,    47,     0,    13,    14,    15,    16,    17,
       0,     0,     0,     0,    48,     0,    19,    49,    50,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,    98,
      82,    19,   153,    20,    21,     0,    99,   100,   101,   102,
     103,   104,    94,    95,    96,    97,    98,     0,     0,     0,
     164,     0,     0,    99,   100,   101,   102,   103,   104,    94,
      95,    96,    97,    98,     0,     0,   165,     0,     0,     0,
      99,   100,   101,   102,   103,   104,    94,    95,    96,    97,
      98,     0,     0,     0,   180,     0,     0,    99,   100,   101,
     102,   103,   104,    94,    95,    96,    97,    98,     0,     0,
     202,     0,     0,     0,    99,   100,   101,   102,   103,   104,
      94,    95,    96,    97,    98,     0,     0,   206,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    94,    95,    96,
      97,    98,     0,     0,   208,     0,     0,     0,    99,   100,
     101,   102,   103,   104,    94,    95,    96,    97,    98,     0,
       0,   210,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    94,    95,    96,    97,    98,     0,     0,   212,     0,
       0,     0,    99,   100,   101,   102,   103,   104,    94,    95,
      96,    97,    98,     0,     0,   243,     0,     0,     0,    99,
     100,   101,   102,   103,   104,    94,    95,    96,    97,    98,
       0,     0,   250,     0,     0,     0,    99,   100,   101,   102,
     103,   104,    94,    95,    96,    97,    98,     0,     0,   255,
       0,     0,     0,    99,   100,   101,   102,   103,   104,    94,
      95,    96,    97,    98,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,   100,   101,   102,
     103,   104
};

static const yytype_int16 yycheck[] =
{
       0,     7,     2,     3,    38,     5,     0,    23,    86,    87,
      10,    89,     0,     0,    49,     6,     6,    45,    37,    47,
      20,    33,    37,    23,    50,    37,    20,   105,    37,    23,
      49,   109,    20,    37,    50,    23,    23,    33,    38,    36,
      37,    41,    76,     4,    50,    37,     3,    41,     0,    52,
       7,     8,     9,    10,    11,    12,    13,    14,    49,    49,
      36,    37,    19,    20,    21,    38,    39,    24,    25,    26,
      27,    28,    44,    45,    74,    47,    76,    77,    37,   157,
      74,   159,    38,    39,   162,    16,    17,    18,    88,   167,
      38,    39,    49,    50,    88,    52,    53,     3,    38,    39,
      39,     7,     8,     9,    10,    11,    12,    13,    14,    38,
      39,    38,    39,    19,    20,    21,    38,    39,    24,    25,
      26,    27,    28,    39,    37,    37,    34,   205,   206,   207,
     208,   209,   210,   211,   212,    43,    44,    45,    46,    47,
      10,    39,    36,    49,    50,    49,    52,    53,    43,    44,
      45,    36,    47,    49,   154,    39,    49,    37,    36,    47,
     154,    31,    32,    33,    15,    39,    30,    37,    36,    38,
      10,   171,    38,   173,    33,    34,    35,   171,    48,   173,
      50,    51,    52,    38,    43,    44,    45,    46,    47,    38,
      36,    31,    32,    33,    37,    37,    15,    37,    25,   199,
      15,   201,    23,   203,    -1,   199,    -1,   201,    48,   203,
      50,    51,    52,    70,   214,    -1,    43,    -1,    -1,    -1,
     214,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,     6,
     224,     8,    -1,    -1,    -1,   235,   236,    -1,    15,    -1,
      -1,   235,   236,    -1,    -1,    -1,    -1,   247,    -1,   249,
      -1,    -1,    -1,   247,    10,   249,   256,    -1,   258,    -1,
      -1,    -1,   256,    -1,   258,    -1,    -1,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    31,    32,    33,    55,    56,
     107,    37,    59,    60,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    75,    -1,
      -1,    -1,    -1,    80,   131,    -1,   133,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    31,
      32,   108,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    48,   174,    50,    51,
      52,   178,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,   139,    19,    20,    21,   193,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      10,   158,    -1,   160,   161,    -1,   163,    -1,   215,    -1,
      -1,   168,   219,   170,    50,    -1,    52,    -1,    -1,    -1,
      -1,    31,    32,   180,    -1,    -1,    -1,    37,    38,    -1,
      -1,   238,    -1,    -1,   241,    -1,    -1,    -1,    48,   196,
      50,    51,    52,    -1,    -1,    -1,    10,   254,    -1,    -1,
     257,    -1,    -1,    -1,     4,    -1,   213,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,   223,    31,    32,    19,
      20,    21,    -1,    37,    24,    25,    26,    27,    28,    -1,
     237,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,   248,    10,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,     4,    52,    53,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    31,    32,    -1,    19,    20,    21,    37,
      38,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,     4,    52,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      31,    32,    -1,    19,    20,    21,    37,    38,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,     4,    52,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    31,    32,    -1,
      19,    20,    21,    37,    38,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,     4,    52,    53,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    31,    32,    33,    19,    20,    21,
      37,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,     4,
      52,    53,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    31,    32,    33,    19,    20,    21,    37,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,     4,    52,    53,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    31,    32,
      33,    19,    20,    21,    37,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    49,    50,
      -1,    52,    53,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    49,    50,    -1,    52,    53,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    10,    42,    43,    44,    45,
      46,    47,    49,    50,    -1,    52,    53,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    31,    32,    18,    19,
      20,    21,    37,    38,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    53,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    31,    32,    33,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    -1,    -1,    38,    39,    -1,    10,    42,    43,    44,
      45,    46,    47,    49,    50,    -1,    52,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    31,    32,    33,
      19,    20,    21,    37,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      49,    50,    38,    52,    53,    -1,    42,    43,    44,    45,
      46,    47,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    31,    32,    33,
      34,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    31,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    31,    32,    33,    34,    35,
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
      52,    53,    55,    56,    57,    61,    62,    63,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    76,    78,
      49,    59,    78,    78,    78,    31,    32,    37,    48,    51,
      52,    74,    77,    78,    77,    37,    23,    78,    33,    37,
      37,    33,    77,    37,    37,    61,    78,    33,     0,    49,
      57,    70,     4,    58,    59,    39,    39,     7,    72,    78,
      36,    37,    49,    60,    61,    70,    37,    37,    59,    37,
      77,    77,    77,    77,    31,    32,    33,    34,    35,    42,
      43,    44,    45,    46,    47,    37,    77,    77,    36,    39,
      33,    77,    33,    77,    77,    77,    52,    58,    49,     6,
      49,    77,    72,    78,    78,    77,    38,    75,    77,    49,
      49,    38,    75,    38,    75,     4,    38,    75,    38,    39,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    38,    75,    38,    59,    77,    75,    38,    39,    38,
      39,    39,    38,    39,    39,    38,     6,    37,    36,    38,
      39,    59,    38,    59,    38,    38,    77,    38,    15,    22,
      39,    75,    33,    77,    75,    33,    77,    33,    77,    75,
      33,    77,    30,    38,    75,    77,    36,    77,     4,    59,
       4,    59,    38,    59,    77,    38,    38,    38,    38,    38,
      38,    38,    38,    36,    59,    38,    77,     4,     4,    16,
      17,    18,    64,    39,    59,    75,    75,    75,    75,    75,
      75,    75,    75,    77,     4,    59,    59,    37,    16,    17,
      18,    77,    22,    38,     4,    18,    77,    59,    37,    59,
      38,    18,    77,    22,    15,    38,    59,    15,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       7,     9,    10,     8,     6,     7,     8,    10,     5,     1,
       1,     1,     8,     4,     4,     5,     5,     7,     7,     7,
       7,     6,     6,     6,     6,     4,     7,     7,     7,     7,
       5,     2,     2,     3,     1,     1,     2,     2,     3,     3,
       3,     5,     6,     7,     6,     8,     7,     4,     6,     7,
       3,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     3,     5,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     1
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
#line 65 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_childs((yyvsp[-3]._items));
	program_root.add_child((yyvsp[-2]._node));
	translate_program();
}
#line 1747 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 3:
#line 71 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_child((yyvsp[-2]._node));
	translate_program();
}
#line 1756 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 4:
#line 76 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                           {(yyval._items) = {(yyvsp[0]._items)};}
#line 1762 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 5:
#line 77 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
          {(yyval._items) = {create_comment((yyvsp[0]._str))};}
#line 1768 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 6:
#line 78 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                             {(yyvsp[-1]._items).insert((yyvsp[-1]._items).end(),(yyvsp[0]._items).begin(), (yyvsp[0]._items).end());(yyval._items) = (yyvsp[-1]._items);}
#line 1774 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 7:
#line 79 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                       {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str)));(yyval._items) = (yyvsp[-1]._items);}
#line 1780 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 8:
#line 81 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                            {main_node* _main = new main_node((yyvsp[0]._items));(yyval._node) = _main;}
#line 1786 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 9:
#line 82 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                  {(yyvsp[0]._items).insert((yyvsp[0]._items).begin(), (yyvsp[-1]._node));main_node* _main = new main_node((yyvsp[0]._items));(yyval._node) = _main;}
#line 1792 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 12:
#line 87 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
               {(yyval._items) = {create_comment((yyvsp[0]._str))};}
#line 1798 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 13:
#line 88 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str)));(yyval._items) = (yyvsp[-1]._items);}
#line 1804 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 14:
#line 89 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
             {(yyvsp[-1]._items).insert((yyvsp[-1]._items).end(), (yyvsp[0]._items).begin(), (yyvsp[0]._items).end());(yyval._items) = (yyvsp[-1]._items);}
#line 1810 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 15:
#line 91 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                        {(yyval._items) = {(yyvsp[-1]._node), create_comment((yyvsp[0]._str))};}
#line 1816 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 16:
#line 92 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                       {(yyvsp[-1]._items).push_back(create_comment((yyvsp[0]._str))); (yyval._items) = (yyvsp[-1]._items);}
#line 1822 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 20:
#line 98 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                   {(yyval._node) = new label_node((yyvsp[-1]._constant), {(yyvsp[0]._node)});}
#line 1828 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 24:
#line 102 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
            {(yyval._node) = new goto_node((yyvsp[0]._eval_tree));}
#line 1834 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 25:
#line 103 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
           {(yyval._node) = sexpr("");}
#line 1840 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 26:
#line 104 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
         {(yyval._node) = sexpr("formreturn");}
#line 1846 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 27:
#line 105 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
        {(yyval._node) = sexpr("break");}
#line 1852 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 28:
#line 106 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
       {(yyval._node) = sexpr("exit(0)");}
#line 1858 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 29:
#line 107 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
             {(yyval._node) = new pause_node((yyvsp[0]._eval_tree));}
#line 1864 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 30:
#line 109 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                           {(yyval._node) = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-4]._eval_tree), (yyvsp[-1]._items))));}
#line 1870 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 31:
#line 110 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                               {
	(yyval._node) = new list_node({dynamic_cast<node*>(new if_block("if", (yyvsp[-6]._eval_tree), (yyvsp[-3]._items))), dynamic_cast<node*>(new if_block("else", nullptr, (yyvsp[-1]._items)))});
}
#line 1878 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 32:
#line 114 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{	
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-7]._eval_tree), (yyvsp[-4]._items))));
	list->add_list((yyvsp[-3]._list));
	list->add_item(dynamic_cast<node*>(new if_block("else", nullptr, (yyvsp[-1]._items))));
	(yyval._node) = list;
}
#line 1889 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 33:
#line 121 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	list_node* list = new list_node(dynamic_cast<node*>(new if_block("if", (yyvsp[-5]._eval_tree), (yyvsp[-2]._items))));
	list->add_list((yyvsp[-1]._list));
	(yyval._node) = list;
}
#line 1899 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 34:
#line 127 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                             {(yyval._list) = new list_node(dynamic_cast<node*>(new if_block("else if", (yyvsp[-3]._eval_tree), (yyvsp[0]._items))));}
#line 1905 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 35:
#line 128 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                              {(yyvsp[-6]._list)->add_item(dynamic_cast<node*>(new if_block("else if", (yyvsp[-3]._eval_tree), (yyvsp[0]._items)))); (yyval._list) = (yyvsp[-6]._list);}
#line 1911 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 36:
#line 130 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                      {(yyval._node) = new doloop_node(new assign_node((yyvsp[-6]._str), (yyvsp[-4]._eval_tree)), (yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1917 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 37:
#line 131 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                          {(yyval._node) = new doloop_node(new assign_node((yyvsp[-8]._str), (yyvsp[-6]._eval_tree)), (yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1923 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 38:
#line 132 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                            {(yyval._node) = new dowhile_node((yyvsp[-2]._eval_tree), (yyvsp[-1]._items));}
#line 1929 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 42:
#line 137 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                            {(yyval._node) = new open_node((yyvsp[-5]._eval_tree), (yyvsp[-1]._eval_tree));}
#line 1935 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 43:
#line 138 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                      {(yyval._node) = new close_node((yyvsp[-1]._eval_tree));}
#line 1941 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 44:
#line 140 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                   {(yyval._node) = new read_node(nullptr, nullptr, (yyvsp[0]._list));}
#line 1947 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 45:
#line 141 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                             {(yyval._node) = new read_node(nullptr, nullptr, (yyvsp[0]._list));}
#line 1953 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 46:
#line 142 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                              {(yyval._node) = new read_node((yyvsp[-2]._eval_tree), nullptr, (yyvsp[0]._list));}
#line 1959 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 47:
#line 143 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                         {(yyval._node) = new read_node((yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), (yyvsp[0]._list));}
#line 1965 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 48:
#line 144 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                        {(yyval._node) = new read_node(nullptr, (yyvsp[-2]._eval_tree), (yyvsp[0]._list));}
#line 1971 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 49:
#line 145 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                        {(yyval._node) = new read_node((yyvsp[-4]._eval_tree), nullptr, (yyvsp[0]._list));}
#line 1977 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 50:
#line 146 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                       {(yyval._node) = new read_node(nullptr, nullptr, (yyvsp[0]._list));}
#line 1983 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 51:
#line 148 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                         {(yyval._node) = new write_node(nullptr, nullptr, new list_node());}
#line 1989 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 52:
#line 149 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                {(yyval._node) = new write_node((yyvsp[-3]._eval_tree), nullptr, new list_node());}
#line 1995 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 53:
#line 150 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                {(yyval._node) = new write_node(nullptr, (yyvsp[-1]._eval_tree), new list_node());}
#line 2001 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 54:
#line 151 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                 {(yyval._node) = new write_node((yyvsp[-3]._eval_tree), (yyvsp[-1]._eval_tree), new list_node());}
#line 2007 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 55:
#line 152 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                      {(yyval._node) = new write_node((yyvsp[-1]._eval_tree), nullptr, new list_node());}
#line 2013 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 56:
#line 153 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                        {(yyval._node) = new write_node(nullptr, nullptr, (yyvsp[0]._list));}
#line 2019 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 57:
#line 154 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                         {(yyval._node) = new write_node((yyvsp[-4]._eval_tree), nullptr, (yyvsp[0]._list));}
#line 2025 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 58:
#line 155 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                         {(yyval._node) = new write_node(nullptr, (yyvsp[-2]._eval_tree), (yyvsp[0]._list));}
#line 2031 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 59:
#line 156 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                          {(yyval._node) = new write_node((yyvsp[-4]._eval_tree), (yyvsp[-2]._eval_tree), (yyvsp[0]._list));}
#line 2037 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 60:
#line 157 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                               {(yyval._node) = new write_node((yyvsp[-2]._eval_tree), nullptr, (yyvsp[0]._list));}
#line 2043 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 61:
#line 159 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                      {(yyval._node) = new write_node(nullptr, nullptr, new list_node());}
#line 2049 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 62:
#line 160 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
             {(yyval._node) = new write_node(nullptr, (yyvsp[0]._eval_tree), new list_node());}
#line 2055 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 63:
#line 162 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	auto* _node = dynamic_cast<write_node*>((yyvsp[-2]._node));
	_node->ioargs->add_item(dynamic_cast<node*>((yyvsp[0]._eval_tree)));
	(yyval._node) = _node;
}
#line 2065 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 66:
#line 172 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                      {(yyval._items) = {new var_node((yyvsp[-1]._complex_type), (yyvsp[0]._str))};}
#line 2071 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 67:
#line 173 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                   {(yyval._items) = {new var_node((yyvsp[-1]._complex_type), dynamic_cast<assign_node*>((yyvsp[0]._node)))};}
#line 2077 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 68:
#line 175 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                        {(yyvsp[-2]._items).insert((yyvsp[-2]._items).end(), new var_node(dynamic_cast<var_node*>(*(yyvsp[-2]._items).begin())->type,(yyvsp[0]._str))); (yyval._items) = (yyvsp[-2]._items);}
#line 2083 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 69:
#line 176 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                            {
	(yyvsp[-2]._items).insert((yyvsp[-2]._items).end(), new var_node(dynamic_cast<var_node*>(*(yyvsp[-2]._items).begin())->type, dynamic_cast<assign_node*>((yyvsp[0]._node)))); (yyval._items) = (yyvsp[-2]._items);
}
#line 2091 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 70:
#line 181 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                {(yyval._node) = new assign_node((yyvsp[-2]._str), (yyvsp[0]._eval_tree));}
#line 2097 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 71:
#line 183 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                    {(yyval._items) = {new function_node((yyvsp[-4]._str), new list_node(), {new assign_node((yyvsp[-4]._str), (yyvsp[0]._eval_tree))})};}
#line 2103 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 72:
#line 184 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                       {(yyval._items) = {new function_node((yyvsp[-5]._str), (yyvsp[-3]._list), {new assign_node((yyvsp[-5]._str), (yyvsp[0]._eval_tree))})};}
#line 2109 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 73:
#line 185 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                           {(yyval._items) = {new function_node((yyvsp[-6]._complex_type), (yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 2115 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 74:
#line 186 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                      {(yyval._items) = {new function_node((yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 2121 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 75:
#line 187 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                                    {(yyval._items) = {new function_node((yyvsp[-7]._complex_type), (yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 2127 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 76:
#line 188 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                               {(yyval._items) = {new function_node((yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 2133 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 77:
#line 189 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                               {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-2]._str), new list_node(), (yyvsp[-1]._items))};}
#line 2139 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 78:
#line 190 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                        {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-4]._str), new list_node(), (yyvsp[-1]._items))};}
#line 2145 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 79:
#line 191 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                                 {(yyval._items) = {new function_node(new complex_type(integer), (yyvsp[-5]._str), (yyvsp[-3]._list), (yyvsp[-1]._items))};}
#line 2151 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 80:
#line 193 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                          {(yyval._node) = new call_node((yyvsp[-2]._str), new list_node());}
#line 2157 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 81:
#line 194 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                            {(yyval._node) = new call_node((yyvsp[-3]._str), (yyvsp[-1]._list));}
#line 2163 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 82:
#line 195 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                        {(yyval._node) = new call_node((yyvsp[-2]._str), new list_node());}
#line 2169 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 83:
#line 196 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                                 {(yyval._node) = new call_node((yyvsp[-3]._str), (yyvsp[-1]._list));}
#line 2175 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 84:
#line 198 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
               {(yyval._list) = new list_node(dynamic_cast<node*>((yyvsp[0]._eval_tree)), ", ");}
#line 2181 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 85:
#line 199 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                      {(yyvsp[-2]._list)->add_item(dynamic_cast<node*>((yyvsp[0]._eval_tree)));(yyval._list) = (yyvsp[-2]._list);}
#line 2187 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 86:
#line 202 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	if((yyvsp[0]._type) == complex || (yyvsp[0]._type) == double_complex) {
		program_root.add_header(def_complex);
	}
	if((yyvsp[0]._type) == chars){
		program_root.add_header(def_str);
	}
	(yyval._complex_type) = new complex_type((yyvsp[0]._type));
}
#line 2201 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 87:
#line 212 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
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
#line 2217 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 88:
#line 225 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
              {(yyval._eval_tree) = new eval_tree(e_name, (yyvsp[0]._node));}
#line 2223 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 89:
#line 226 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
         {(yyval._eval_tree) = new eval_tree(e_constant, (yyvsp[0]._constant));}
#line 2229 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 90:
#line 228 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
 {
 	program_root.add_header(def_str);
 	(yyval._eval_tree) = new eval_tree(e_constant, (yyvsp[0]._constant));
 }
#line 2238 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 91:
#line 232 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
          {(yyval._eval_tree) = new eval_tree(e_name, new name_node((yyvsp[0]._str)));}
#line 2244 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 92:
#line 233 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                {(yyval._eval_tree) = (yyvsp[-1]._eval_tree);}
#line 2250 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 93:
#line 234 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
                                           {
	(yyval._eval_tree) = new eval_tree(e_complex, sexpr(","), {(yyvsp[-3]._eval_tree), (yyvsp[-1]._eval_tree)});
}
#line 2258 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 94:
#line 238 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_pow);
	(yyval._eval_tree) = new eval_tree(e_pow, sexpr("pow"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2267 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 95:
#line 243 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_mul);
	(yyval._eval_tree) = new eval_tree(e_mul, sexpr("*"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2276 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 96:
#line 248 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_div);
	(yyval._eval_tree) = new eval_tree(e_div, sexpr("/"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2285 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 97:
#line 253 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_add);
	(yyval._eval_tree) = new eval_tree(e_add, sexpr("+"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2294 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 98:
#line 258 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_minus);
	(yyval._eval_tree) = new eval_tree(e_minus, sexpr("-"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2303 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 99:
#line 263 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_uminus);
	(yyval._eval_tree) = new eval_tree(e_uminus, sexpr("-"), {(yyvsp[0]._eval_tree)});
}
#line 2312 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 100:
#line 268 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_uplus);
	(yyval._eval_tree) = new eval_tree(e_uplus, sexpr("+"), {(yyvsp[0]._eval_tree)});
}
#line 2321 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 101:
#line 273 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(get_cmp_header((yyvsp[-1]._str)));
	(yyval._eval_tree) = new eval_tree(get_cmp_eval((yyvsp[-1]._str)), sexpr((yyvsp[-1]._str)), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2330 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 102:
#line 278 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_and);
	(yyval._eval_tree) = new eval_tree(e_and, sexpr("&"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2339 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 103:
#line 283 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_xor);
	(yyval._eval_tree) = new eval_tree(e_xor, sexpr("^"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2348 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 104:
#line 288 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
{
	program_root.add_header(def_or);
	(yyval._eval_tree) = new eval_tree(e_or, sexpr("|"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
}
#line 2359 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 105:
#line 295 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_and);
	(yyval._eval_tree) = new eval_tree(e_and, sexpr("&"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2368 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 106:
#line 300 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_xor);
	(yyval._eval_tree) = new eval_tree(e_xor, sexpr("^"), {(yyvsp[-2]._eval_tree), (yyvsp[0]._eval_tree)});
}
#line 2377 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;

  case 107:
#line 305 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"
{
	program_root.add_header(def_not);
	(yyval._eval_tree) = new eval_tree(e_not, sexpr("~"), {(yyvsp[0]._eval_tree)});
}
#line 2386 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"
    break;


#line 2390 "/home/danil/CLionProjects/F77Ccompiler/src/f77parser.c"

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
#line 312 "/home/danil/CLionProjects/F77Ccompiler/f77parser.y"

int main(int argc, char **args){
//	yydebug = 1;
	if(argc > 1 && **(args+1) == '-' && *(*(args+1)+1) == 'd'){
		debug();
	}else {
		yyparse();
	}
	return 0;
}
