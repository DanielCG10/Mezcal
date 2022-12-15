/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler/grammar.y" /* yacc.c:337  */

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	extern int  yylineno;
	std::string result;
	int yylex(void);
	void yyerror(char const *);

#line 85 "grammar.tab.c" /* yacc.c:337  */
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

/* In a future release of Bison, this section will be replaced
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y" /* yacc.c:352  */

	#include <string>

#line 122 "grammar.tab.c" /* yacc.c:352  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    COLON = 259,
    LEFT_BRACKET = 260,
    RIGHT_BRACKET = 261,
    RIGHT_ARROW = 262,
    LEFT_CURLY_BRACE = 263,
    RIGHT_CURLY_BRACE = 264,
    SINGLECOMMENT = 265,
    MULTILINECOMMENTS = 266,
    QUOTES = 267,
    INT = 268,
    DEC = 269,
    SHOW = 270,
    ANSWER = 271,
    SEMICOLON = 272,
    CHARACTERS = 273,
    LOAD = 274,
    DOLLAR_SIGN = 275,
    GREATHER_THAN = 276,
    LESS_THAN = 277,
    BLN = 278,
    STR = 279,
    INTEGER_VALUE = 280,
    PIPE_MARK = 281,
    QUESTION_MARK = 282,
    IGUAL = 283,
    MAYOR_IGUAL = 284,
    MENOR_IGUAL = 285,
    DIFERENTES = 286,
    PLUS = 287,
    MINUS = 288,
    ARROBA = 289,
    DIAG_INV = 290,
    COMA = 291,
    PSG = 292,
    DIV = 293,
    INCREMENTO = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef std::string YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  327

#define YYUNDEFTOK  2
#define YYMAXUTOK   294

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    34,    36,    40,    45,    47,    51,    53,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      77,    81,    85,    87,    89,    91,    95,    97,    99,   101,
     103,   105,   107,   109,   113,   116,   121,   124,   127,   131,
     135,   138,   141,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   166,   168,   170,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   192,   194,   196,   198,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   240,   244,
     246,   248,   250,   252,   254,   258,   260,   264,   268,   270,
     272,   274,   276,   278,   282,   287,   291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "COLON", "LEFT_BRACKET",
  "RIGHT_BRACKET", "RIGHT_ARROW", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE",
  "SINGLECOMMENT", "MULTILINECOMMENTS", "QUOTES", "INT", "DEC", "SHOW",
  "ANSWER", "SEMICOLON", "CHARACTERS", "LOAD", "DOLLAR_SIGN",
  "GREATHER_THAN", "LESS_THAN", "BLN", "STR", "INTEGER_VALUE", "PIPE_MARK",
  "QUESTION_MARK", "IGUAL", "MAYOR_IGUAL", "MENOR_IGUAL", "DIFERENTES",
  "PLUS", "MINUS", "ARROBA", "DIAG_INV", "COMA", "PSG", "DIV",
  "INCREMENTO", "$accept", "input", "function_list", "function",
  "statements", "statement", "unitaryOperation", "unitaryOperation_dos",
  "operaciones_dos", "operaciones", "loops", "bifurcation",
  "logicalComparison", "assignment", "integer_value", "definition",
  "identifiers", "ids", "std_output", "std_input", "characters", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -30

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,  -153,    39,    25,    67,  -153,  -153,    25,    76,  -153,
      94,   113,   132,   140,   143,   207,   148,  -153,    16,    -3,
    -153,  -153,  -153,   243,   251,   252,  -153,  -153,   209,  -153,
    -153,   242,  -153,  -153,   249,   254,     7,   255,   257,  -153,
    -153,   264,   250,   265,    10,   109,  -153,  -153,    73,  -153,
    -153,  -153,  -153,   400,   258,   268,  -153,  -153,  -153,  -153,
      29,   106,    -3,   267,   267,   267,   267,   267,   267,   123,
    -153,  -153,   239,    25,    74,    52,   284,   285,  -153,  -153,
    -153,   181,  -153,  -153,  -153,   277,    77,    83,   147,   161,
     178,   215,   267,   290,   291,   274,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,   273,     2,   281,  -153,  -153,   275,
     267,   267,    15,   267,   267,   267,   267,    72,   172,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,   279,  -153,  -153,  -153,    59,   267,   292,   293,
    -153,    27,   267,   310,   311,   218,   219,   267,   267,   267,
     298,   304,  -153,  -153,     4,   267,   302,   152,    25,    25,
      25,    25,    25,    25,   267,    96,   127,   317,    78,   305,
    -153,  -153,  -153,    34,   314,   338,  -153,  -153,  -153,   339,
    -153,   332,   334,  -153,  -153,   225,   267,  -153,   346,  -153,
     405,  -153,    14,  -153,   321,   229,   118,    25,   341,  -153,
    -153,   120,  -153,   182,  -153,  -153,  -153,    25,   352,   168,
     340,   348,   361,   365,   368,   369,    -3,   358,   376,  -153,
     183,     4,  -153,   201,  -153,   267,   371,   192,   372,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,   381,  -153,  -153,    62,
     267,   267,  -153,   390,  -153,   375,  -153,   253,   262,    25,
      25,    25,    25,   370,   154,   173,   267,   267,  -153,  -153,
    -153,   202,  -153,    25,   387,   392,   401,  -153,  -153,  -153,
    -153,  -153,   128,  -153,  -153,  -153,  -153,   267,    64,    85,
     191,   404,   267,   267,    18,  -153,   410,   411,    -3,   413,
    -153,  -153,   416,  -153,   402,   222,   422,  -153,  -153,   309,
      19,    -3,   423,   426,  -153,   412,   328,   429,  -153,  -153,
     331,    28,    -3,   430,   434,  -153,   415,   364,   435,  -153,
    -153,   367,   393,   436,  -153,   389,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   106,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     7,    96,    96,
       5,    10,    12,     0,     0,     0,    96,     6,     0,    19,
      17,     0,     8,     9,     0,     0,     0,     0,     0,    96,
      88,     0,     0,     0,     0,     0,    96,     7,    21,    18,
      16,    15,    13,     0,     0,     0,    95,    97,    11,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,    96,    99,   104,    96,     0,    91,    92,    96,    93,
      94,    70,    80,    96,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    50,    54,    58,
      62,    67,    96,    70,     0,    98,     0,    37,    96,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,    96,
      96,    47,    96,    52,    96,    56,    96,    60,    96,    64,
      96,    69,     0,     7,     7,    96,    71,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    25,    32,    30,     0,     0,     0,     0,    46,    51,
      55,    59,    63,    68,     0,    96,    96,     0,     0,     0,
     100,    96,    96,     0,     0,     0,    89,    90,    96,     0,
      96,    22,    24,    33,    31,     0,    96,    84,     0,    96,
       0,    66,    36,    34,     0,     0,     0,   103,     0,    96,
      78,     0,    77,    86,    96,    83,    81,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,   102,   101,     0,    76,     0,     0,    72,     0,    82,
      96,    96,    96,    96,    96,    96,     0,     7,     7,     0,
       0,     0,    79,     0,    96,     0,    96,    43,    48,    53,
      57,    61,    65,     0,    96,    96,     0,     0,    23,    25,
      85,     0,    96,    75,     0,     0,     0,    38,    35,    22,
      24,    87,     0,    96,    96,     7,    73,     0,     0,     0,
      96,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      44,    49,     0,     7,     0,    96,     0,    39,     7,    96,
       0,     0,     0,     0,     7,     0,    96,     0,    40,     7,
      96,     0,     0,     0,     0,     7,     0,    96,     0,    41,
       7,    96,     0,     0,     7,    96,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,   438,   446,   -47,  -153,  -153,  -152,   312,  -153,
    -153,  -153,   -59,   -15,   216,  -153,   -10,  -153,  -153,  -153,
     -44,   144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     7,    18,    27,    28,    29,    30,    31,
      32,    33,    41,    34,    43,    35,    36,    56,    37,    38,
      82,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,    72,   187,    95,    42,     1,    69,   138,   185,    44,
       1,    53,    54,     1,    69,    54,    48,    39,     1,   216,
     145,    19,    40,   288,   301,    20,    21,    22,     1,    60,
       1,    23,     1,   312,    85,    24,    73,     1,   139,     5,
     217,    55,    25,   186,   289,   302,    55,   146,   147,    55,
      86,    87,   148,   149,   313,    26,   104,    88,    89,    90,
      91,   105,     1,   174,   145,     1,    92,     1,   112,   187,
     198,     8,   108,   117,   118,     1,     1,    40,   154,    19,
      10,     1,   195,   107,    21,    22,   165,   166,     1,    23,
     -20,   169,   136,    24,   256,   257,   282,   120,   141,    11,
      25,    19,    40,   122,   155,   192,    21,    22,    40,   157,
     158,    23,   159,    26,   160,    24,   161,   283,   162,    12,
     163,     1,    25,     1,   221,   168,   224,    70,    75,    71,
     173,     1,    19,    93,   276,    26,   193,    21,    22,    13,
      94,    70,    23,   102,     4,    14,    24,     4,    40,    15,
     155,     4,   225,    25,   222,     1,    17,   236,   190,    19,
     277,   196,   197,   267,    21,    22,    26,   124,   201,    23,
     203,     1,    40,    24,   229,     1,   207,   156,    19,   209,
      25,   126,   268,    21,    22,     1,    40,   226,    23,   223,
     254,   255,    24,    26,   227,     1,    19,   245,   128,    25,
     284,    21,    22,    40,     1,     1,    23,   242,   271,   239,
      24,    16,    26,   113,   114,   240,   241,    25,   115,   116,
     247,   248,   249,   250,   251,   252,    49,    19,   280,   292,
      26,   297,    21,    22,   261,   130,   263,    23,   178,   180,
      40,    24,   303,    40,    40,   204,   295,    45,    25,   219,
      40,   299,   272,   314,    40,    46,     1,   306,   264,    50,
      47,    26,   310,   278,   279,     1,    51,   265,   317,    81,
      61,    52,    58,   321,    59,   106,    62,   325,    83,    96,
      97,    98,    99,   100,   101,   103,    63,    64,    84,   110,
     111,   109,    40,    65,    66,    67,    68,   119,   133,   134,
     135,   140,   121,   123,   125,   127,   129,   131,   132,   137,
     164,   142,   171,   172,    19,   -28,   176,   177,   300,    21,
      22,   -26,   189,   194,    23,   180,   143,   144,    24,   150,
     151,   152,   153,    19,   199,    25,    19,   308,    21,    22,
     311,    21,    22,    23,   200,   202,    23,    24,    26,   -29,
      24,   -27,   208,   170,    25,   218,   228,    25,   175,    70,
     230,   179,   181,   182,   183,   184,   237,    26,   231,    19,
      26,   188,    19,   319,    21,    22,   322,    21,    22,    23,
     191,   232,    23,    24,   238,   233,    24,   253,   234,   235,
      25,   244,   246,    25,    19,   262,   260,   266,   326,    21,
      22,   205,   206,    26,    23,    75,    26,   273,    24,   275,
     285,   220,   274,    76,    77,    25,   290,   291,    70,   323,
      78,   293,   294,    79,    80,    40,   210,   211,    26,   296,
     298,   304,   305,   212,   213,   214,   215,   309,   315,   307,
     316,   243,   318,   320,   324,     9,     3,   167,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   281,     0,     0,     0,     0,   286,   287
};

static const yytype_int16 yycheck[] =
{
      47,    45,   154,    62,    19,     3,     4,     5,     4,    19,
       3,     4,     5,     3,     4,     5,    26,    20,     3,     5,
       5,     5,    25,     5,     5,     9,    10,    11,     3,    39,
       3,    15,     3,     5,     5,    19,    46,     3,    36,     0,
      26,    39,    26,    39,    26,    26,    39,    32,    33,    39,
      21,    22,    37,    38,    26,    39,    71,    28,    29,    30,
      31,    71,     3,    36,     5,     3,    37,     3,    78,   221,
      36,     4,    20,    83,    84,     3,     3,    25,     6,     5,
       4,     3,     4,     9,    10,    11,   133,   134,     3,    15,
      17,    32,   102,    19,    32,    33,    32,    20,   108,     5,
      26,     5,    25,    20,    32,     9,    10,    11,    25,   119,
     120,    15,   122,    39,   124,    19,   126,    32,   128,     6,
     130,     3,    26,     3,     6,   135,     6,    18,     5,    20,
     140,     3,     5,    27,     6,    39,     9,    10,    11,     7,
      34,    18,    15,    20,     0,     5,    19,     3,    25,     6,
      32,     7,    32,    26,   198,     3,     8,   216,     6,     5,
      32,   171,   172,     9,    10,    11,    39,    20,   178,    15,
     180,     3,    25,    19,     6,     3,   186,     5,     5,   189,
      26,    20,     9,    10,    11,     3,    25,     5,    15,   199,
     237,   238,    19,    39,   204,     3,     5,     5,    20,    26,
       9,    10,    11,    25,     3,     3,    15,     6,     6,   219,
      19,     4,    39,    32,    33,    32,    33,    26,    37,    38,
     230,   231,   232,   233,   234,   235,    17,     5,   275,   288,
      39,     9,    10,    11,   244,    20,   246,    15,    20,    20,
      25,    19,   301,    25,    25,    20,   293,     4,    26,    20,
      25,   298,   262,   312,    25,     4,     3,   304,     5,    17,
       8,    39,   309,   273,   274,     3,    17,     5,   315,    53,
       6,    17,    17,   320,    17,    36,    26,   324,    20,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    20,     5,
       5,    75,    25,    28,    29,    30,    31,    20,     8,     8,
      26,    20,    86,    87,    88,    89,    90,    91,    92,    36,
      31,    36,    20,    20,     5,    17,     6,     6,     9,    10,
      11,    17,    20,     6,    15,    20,   110,   111,    19,   113,
     114,   115,   116,     5,    20,    26,     5,     9,    10,    11,
       9,    10,    11,    15,     6,     6,    15,    19,    39,    17,
      19,    17,     6,   137,    26,    34,     4,    26,   142,    18,
      20,   145,   146,   147,   148,   149,     8,    39,    20,     5,
      39,   155,     5,     9,    10,    11,     9,    10,    11,    15,
     164,    20,    15,    19,     8,    20,    19,     6,    20,    20,
      26,    20,    20,    26,     5,    20,     6,    27,     9,    10,
      11,   185,   186,    39,    15,     5,    39,    20,    19,     8,
       6,   195,    20,    13,    14,    26,     6,     6,    18,    26,
      20,     8,     6,    23,    24,    25,    21,    22,    39,    27,
       8,     8,     6,    28,    29,    30,    31,     8,     8,    27,
       6,   225,    27,     8,     8,     7,     0,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   256,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,   282,   283
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    41,    43,    61,     0,    42,    43,     4,    42,
       4,     5,     6,     7,     5,     6,     4,     8,    44,     5,
       9,    10,    11,    15,    19,    26,    39,    45,    46,    47,
      48,    49,    50,    51,    53,    55,    56,    58,    59,    20,
      25,    52,    53,    54,    56,     4,     4,     8,    56,    17,
      17,    17,    17,     4,     5,    39,    57,    61,    17,    17,
      56,     6,    26,    21,    22,    28,    29,    30,    31,     4,
      18,    20,    60,    56,    44,     5,    13,    14,    20,    23,
      24,    54,    60,    20,    20,     5,    21,    22,    28,    29,
      30,    31,    37,    27,    34,    52,    54,    54,    54,    54,
      54,    54,    20,    54,    53,    56,    36,     9,    20,    54,
       5,     5,    56,    32,    33,    37,    38,    56,    56,    20,
      20,    54,    20,    54,    20,    54,    20,    54,    20,    54,
      20,    54,    54,     8,     8,    26,    56,    36,     5,    36,
      20,    56,    36,    54,    54,     5,    32,    33,    37,    38,
      54,    54,    54,    54,     6,    32,     5,    56,    56,    56,
      56,    56,    56,    56,    31,    44,    44,    48,    56,    32,
      54,    20,    20,    56,    36,    54,     6,     6,    20,    54,
      20,    54,    54,    54,    54,     4,    39,    47,    54,    20,
       6,    54,     9,     9,     6,     4,    56,    56,    36,    20,
       6,    56,     6,    56,    20,    54,    54,    56,     6,    56,
      21,    22,    28,    29,    30,    31,     5,    26,    34,    20,
      54,     6,    60,    56,     6,    32,     5,    56,     4,     6,
      20,    20,    20,    20,    20,    20,    52,     8,     8,    56,
      32,    33,     6,    54,    20,     5,    20,    56,    56,    56,
      56,    56,    56,     6,    44,    44,    32,    33,    54,    54,
       6,    56,    20,    56,     5,     5,    27,     9,     9,    54,
      54,     6,    56,    20,    20,     8,     6,    32,    56,    56,
      44,    54,    32,    32,     9,     6,    54,    54,     5,    26,
       6,     6,    52,     8,     6,    44,    27,     9,     8,    44,
       9,     5,    26,    52,     8,     6,    44,    27,     9,     8,
      44,     9,     5,    26,    52,     8,     6,    44,    27,     9,
       8,    44,     9,    26,     8,    44,     9
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    44,    44,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    47,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    55,
      55,    55,    55,    55,    55,    56,    56,    57,    58,    58,
      58,    58,    58,    58,    59,    60,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,    12,     2,     0,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     1,     2,     1,
       2,     2,     6,     5,     6,     5,     5,     6,     5,     6,
       5,     6,     5,     6,     7,    11,     7,     4,    11,    18,
      25,    32,    39,     9,    15,     3,     5,     4,     9,    15,
       3,     5,     4,     9,     3,     5,     4,     9,     3,     5,
       4,     9,     3,     5,     4,     9,     6,     3,     5,     4,
       3,     4,     8,    12,    14,    10,     8,     7,     7,     9,
       3,     7,     8,     7,     6,    10,     7,    11,     1,     6,
       6,     3,     3,     3,     3,     2,     0,     1,     4,     3,
       6,     8,     8,     7,     3,     1,     1
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
  YYUSE (yytype);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
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
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 28 "compiler/grammar.y" /* yacc.c:1652  */
    {
			result = std::string("#include <cstdio>\n #include <iostream> \n using namespace std; \n") + yyvsp[-1] + yyvsp[0];
				}
#line 1495 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 34 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1501 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 36 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1507 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 41 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string("int main(int argc, char *argv[]){ \n") + yyvsp[-1] + "} \n"; }
#line 1513 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 45 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1519 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 47 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1525 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 51 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1531 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 53 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1537 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 55 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1543 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 57 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1549 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 59 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "";}
#line 1555 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 61 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1561 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 63 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1567 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 65 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1573 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 67 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1579 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 69 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1585 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 71 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1591 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 73 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1597 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 77 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "++;\n"; }
#line 1603 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 81 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "++\n"; }
#line 1609 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 85 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0]; }
#line 1615 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 87 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "+" + yyvsp[0]; }
#line 1621 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 89 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "-" + yyvsp[0]; }
#line 1627 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 91 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "-" + yyvsp[0]; }
#line 1633 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 95 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "-" + yyvsp[0] + ";\n"; }
#line 1639 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 97 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n"; }
#line 1645 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 99 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n"; }
#line 1651 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 101 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n"; }
#line 1657 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 103 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "/" + yyvsp[0] + ";\n"; }
#line 1663 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 105 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "/" + yyvsp[0] + ";\n"; }
#line 1669 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 107 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "=" + yyvsp[-2] + "%" + yyvsp[0] + ";\n"; }
#line 1675 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 109 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "%" + yyvsp[0] + ";\n"; }
#line 1681 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 113 "compiler/grammar.y" /* yacc.c:1652  */
    { 
	yyval = "while(" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1688 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 116 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "for(" + yyvsp[-9]  + yyvsp[-7] + ";" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1695 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 121 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "if(" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1702 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 124 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "else {\n" + yyvsp[-1] + "}\n"; }
#line 1709 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 127 "compiler/grammar.y" /* yacc.c:1652  */
    { 
	yyval = "if(" + yyvsp[-9] + "){\n" + yyvsp[-5] + "\n} else {\n" + yyvsp[-1] + "}\n"; 
	}
#line 1717 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 131 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "if(" + yyvsp[-16] + "){\n" + yyvsp[-12] + "\n} else if(" +yyvsp[-9] +"){\n" + yyvsp[-5] + "\n} else {\n" +yyvsp[-1] + "}\n";
	}
#line 1725 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 135 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "if(" + yyvsp[-23] + "){\n" + yyvsp[-19] + "\n} else if(" +yyvsp[-16] +"){\n" + yyvsp[-12] + "\n} else if(" +yyvsp[-9] + "){\n" + yyvsp[-5] + "\n} else {\n" + yyvsp[-1] + "}\n"; }
#line 1732 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 138 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "if(" + yyvsp[-30] + "){\n" + yyvsp[-26] + "\n} else if(" +yyvsp[-23] +"){\n" + yyvsp[-19] + "\n} else if(" +yyvsp[-16] + "){\n" + yyvsp[-12] + "\n} else if(" + yyvsp[-9] + "){\n" + yyvsp[-5] + "\n} else {\n" +yyvsp[-1] + "}\n"; }
#line 1739 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 141 "compiler/grammar.y" /* yacc.c:1652  */
    {
	yyval = "if(" + yyvsp[-37] + "){\n" + yyvsp[-33] + "\n} else if(" +yyvsp[-30] +"){\n" + yyvsp[-26] + "\n} else if(" +yyvsp[-23] + "){\n" + yyvsp[-19] + "\n} else if(" + yyvsp[-16] + "){\n" + yyvsp[-12] + "\n} else if(" + yyvsp[-9] + "){\n" + yyvsp[-5] + "\n} else {\n" + yyvsp[-1] + "}\n"; }
#line 1746 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 146 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + ">" + yyvsp[0]; }
#line 1752 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 148 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-13] + "[" + yyvsp[-10] + "]" + ">" + yyvsp[-6] + "[" + yyvsp[-3] + "+" + yyvsp[-1] + "] "; }
#line 1758 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 150 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + ">" + yyvsp[0]; }
#line 1764 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 152 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + ">" + yyvsp[0]; }
#line 1770 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 154 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + ">" + yyvsp[0]; }
#line 1776 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 156 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" +yyvsp[-4] + "]" + "<" + yyvsp[0]; }
#line 1782 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 158 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-13] + "[" + yyvsp[-10] + "]" + "<" + yyvsp[-6] + "[" + yyvsp[-3] + "+" + yyvsp[-1] + "] "; }
#line 1788 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 160 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-2] + "<" + yyvsp[0]; }
#line 1794 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 162 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "<" + yyvsp[0]; }
#line 1800 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 164 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "<" + yyvsp[0]; }
#line 1806 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 166 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" +yyvsp[-4] + "]" + "==" + yyvsp[0]; }
#line 1812 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 168 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "==" + yyvsp[0]; }
#line 1818 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 170 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "==" + yyvsp[0]; }
#line 1824 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 172 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "==" + yyvsp[0]; }
#line 1830 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 174 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" +yyvsp[-4] + "]" + ">=" + yyvsp[0]; }
#line 1836 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 176 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + ">=" + yyvsp[0]; }
#line 1842 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 178 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + ">=" + yyvsp[0]; }
#line 1848 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 180 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + ">=" + yyvsp[0]; }
#line 1854 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 182 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" +yyvsp[-4] + "]" + "<=" + yyvsp[0]; }
#line 1860 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 184 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "<=" + yyvsp[0]; }
#line 1866 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 186 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "<=" + yyvsp[0]; }
#line 1872 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 188 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "<=" + yyvsp[0]; }
#line 1878 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 190 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" +yyvsp[-4] + "]" + "!=" + yyvsp[0]; }
#line 1884 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 192 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-4] + "%" + yyvsp[-2] + "!=" + yyvsp[0]; }
#line 1890 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 194 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "!=" + yyvsp[0]; }
#line 1896 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 196 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "!=" + yyvsp[0]; }
#line 1902 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 198 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "!=" + yyvsp[0]; }
#line 1908 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 202 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + "; \n"; }
#line 1914 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 204 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "=" + yyvsp[0] + "; \n"; }
#line 1920 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 206 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-7] + "[" + yyvsp[-4] + "] = " + yyvsp[0] + ";\n"; }
#line 1926 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 208 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-11] + "[" + yyvsp[-8] + "] = " + yyvsp[-4] + "[" + yyvsp[-1] + "];\n"; }
#line 1932 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 210 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-13] + "[" + yyvsp[-10] + "] = " + yyvsp[-6] + "[" + yyvsp[-3] + "+" + yyvsp[-1] +"];\n"; }
#line 1938 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 212 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-9] + "[" +yyvsp[-6] + "+" + yyvsp[-4] + "] = " + yyvsp[0] + ";\n"; }
#line 1944 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 214 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]\n;"; }
#line 1950 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 216 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "=" + yyvsp[-3] + "[" + yyvsp[-1] + "]\n;"; }
#line 1956 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 218 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "] = " + yyvsp[-1] + ";\n"; }
#line 1962 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 220 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-8] + "[" + yyvsp[-4] + "] = " + yyvsp[-1] + ";\n"; }
#line 1968 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 222 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + " = " + yyvsp[0] + ";\n"; }
#line 1974 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 224 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "+=" + yyvsp[0] + ";\n"; }
#line 1980 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 226 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "+=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1986 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 228 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-6] + "[" + yyvsp[-3] + "] = " + yyvsp[0] + ";\n"; }
#line 1992 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 230 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "[" + yyvsp[-2] + "]" + yyvsp[0] + ";\n"; }
#line 1998 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 232 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-9] + "=" + yyvsp[-6] + "[" + yyvsp[-3] + "+" + yyvsp[-1] + "]" + ";\n"; }
#line 2004 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 234 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "=" + yyvsp[-3] + "+" + yyvsp[0] + ";\n"; }
#line 2010 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 236 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 2016 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 240 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 2022 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 244 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="int " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 2028 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 246 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="float " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 2034 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 248 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="int " + yyvsp[-2] + "; \n"; }
#line 2040 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 250 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="float " + yyvsp[-2] + "; \n"; }
#line 2046 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 252 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="bool " + yyvsp[-2] + "; \n"; }
#line 2052 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 254 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval ="string " + yyvsp[-2] + "; \n"; }
#line 2058 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 258 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 2064 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 260 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 2070 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 264 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 2076 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 268 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[-1] + yyvsp[0] + " << endl; \n"; }
#line 2082 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 270 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[0] + " << endl; \n"; }
#line 2088 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 272 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[-2] + "[" + yyvsp[0] + "] << endl;\n"; }
#line 2094 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 274 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[-5] + "<< " + yyvsp[-2] + " << endl;\n"; }
#line 2100 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 276 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[-4] + "[" + yyvsp[-1] + "] << endl;\n"; }
#line 2106 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 278 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[-3] + " << " + yyvsp[0] + " << endl;\n"; }
#line 2112 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 282 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval= "cin >> " + yyvsp[0] + "; \n"; }
#line 2118 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 287 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 2124 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 291 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 2130 "grammar.tab.c" /* yacc.c:1652  */
    break;


#line 2134 "grammar.tab.c" /* yacc.c:1652  */
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
                  yystos[*yyssp], yyvsp);
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
#line 294 "compiler/grammar.y" /* yacc.c:1918  */

void yyerror(char const *x){
	printf("Error %s, en la linea: %d\n", x, yylineno);
	exit(1);
}
