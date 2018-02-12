/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./codegenerator/model/Node.cpp"
#include "./codegenerator/model/types.h"
#include "./parser/utility.cpp"
#include "./codegenerator/codegeneration/codegeneration.cpp"
#include <iostream>
#include <fstream>

extern int yylex();
void yyerror(char *msg);
std:: vector <Node> list;
Node docNode(DOCUMENT, "");

#include "./parser/printing.cpp"
#include "./parser/treebuilding.cpp"






#line 92 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SUBSTR_T = 258,
    NOTEQUAL_T = 259,
    OF_T = 260,
    CL_T = 261,
    CD_T = 262,
    TM_T = 263,
    DEPTH_T = 264,
    HY_T = 265,
    HR_T = 266,
    MG_T = 267,
    DR_T = 268,
    WEIGHT_T = 269,
    UPPERCASE_T = 270,
    LENGTH_T = 271,
    IN_T = 272,
    PA_T = 273,
    NS_T = 274,
    IR_T = 275,
    IF_T = 276,
    EL_T = 277,
    TH_T = 278,
    OR_T = 279,
    AN_T = 280,
    CT_T = 281,
    EQUAL_T = 282,
    GTHANE_T = 283,
    LTHANE_T = 284,
    GTHAN_T = 285,
    LTHAN_T = 286,
    CANCEL_T = 287,
    RH_T = 288,
    KP_T = 289,
    LL_T = 290,
    GOTO_T = 291,
    EXECUTE_T = 292,
    LABEL_T = 293,
    SE_T = 294,
    PM_T = 295,
    BR_T = 296,
    BR_UP_T = 297,
    NV_T = 298,
    NY_T = 299,
    PAGE_T = 300,
    ENY_T = 301,
    COMMENT_T = 302,
    TI_T = 303,
    DA_T = 304,
    FO_T = 305,
    ON_T = 306,
    OFF_T = 307,
    AR_T = 308,
    BX_T = 309,
    SP_T = 310,
    US_T = 311,
    SIZE_T = 312,
    STYLE_T = 313,
    IDENT_T = 314,
    VAR_UP_T = 315,
    VAR_T = 316,
    DIRECTION_T = 317,
    NUM_T = 318,
    WIDTH_T = 319,
    TP_T = 320,
    TAB_T = 321,
    ROTATE_T = 322,
    NEW_LINE_T = 323,
    BM_T = 324,
    SU_T = 325,
    DM_T = 326,
    GS_T = 327,
    SK_T = 328,
    CE_T = 329,
    TB_T = 330,
    MATHEX_T = 331,
    VR_T = 332
  };
#endif
/* Tokens.  */
#define SUBSTR_T 258
#define NOTEQUAL_T 259
#define OF_T 260
#define CL_T 261
#define CD_T 262
#define TM_T 263
#define DEPTH_T 264
#define HY_T 265
#define HR_T 266
#define MG_T 267
#define DR_T 268
#define WEIGHT_T 269
#define UPPERCASE_T 270
#define LENGTH_T 271
#define IN_T 272
#define PA_T 273
#define NS_T 274
#define IR_T 275
#define IF_T 276
#define EL_T 277
#define TH_T 278
#define OR_T 279
#define AN_T 280
#define CT_T 281
#define EQUAL_T 282
#define GTHANE_T 283
#define LTHANE_T 284
#define GTHAN_T 285
#define LTHAN_T 286
#define CANCEL_T 287
#define RH_T 288
#define KP_T 289
#define LL_T 290
#define GOTO_T 291
#define EXECUTE_T 292
#define LABEL_T 293
#define SE_T 294
#define PM_T 295
#define BR_T 296
#define BR_UP_T 297
#define NV_T 298
#define NY_T 299
#define PAGE_T 300
#define ENY_T 301
#define COMMENT_T 302
#define TI_T 303
#define DA_T 304
#define FO_T 305
#define ON_T 306
#define OFF_T 307
#define AR_T 308
#define BX_T 309
#define SP_T 310
#define US_T 311
#define SIZE_T 312
#define STYLE_T 313
#define IDENT_T 314
#define VAR_UP_T 315
#define VAR_T 316
#define DIRECTION_T 317
#define NUM_T 318
#define WIDTH_T 319
#define TP_T 320
#define TAB_T 321
#define ROTATE_T 322
#define NEW_LINE_T 323
#define BM_T 324
#define SU_T 325
#define DM_T 326
#define GS_T 327
#define SK_T 328
#define CE_T 329
#define TB_T 330
#define MATHEX_T 331
#define VR_T 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "compiler.y" /* yacc.c:355  */

	char tokens[1000];

#line 287 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 304 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  336

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    78,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    62,    69,    76,    84,
      91,    99,   104,   116,   133,   138,   160,   177,   206,   213,
     218,   230,   244,   268,   294,   315,   332,   337,   344,   349,
     356,   367,   373,   389,   405,   424,   428,   429,   430,   432,
     440,   447,   452,   458,   465,   466,   467,   468,   469,   470,
     472,   473,   475,   493,   511,   531,   550,   566,   583,   589,
     595,   601,   616,   630,   647,   663,   675,   685,   691,   699,
     704,   709,   714,   719,   725,   736,   737,   742,   750,   760,
     769,   778,   786,   787,   797,   805,   818,   826,   836,   843,
     851,   856,   857,   864,   869,   870,   871,   872,   873,   884,
     892,   897,   902,   909,   919,   929,   934,   947,   966,   980,
     994,  1008,  1018,  1032,  1039,  1049,  1056,  1061,  1073,  1080,
    1085,  1087,  1096,  1102,  1109,  1114,  1121,  1122,  1124,  1125,
    1127,  1162,  1182,  1200,  1205,  1223,  1224,  1229,  1238,  1243,
    1261,  1279,  1289,  1290,  1292,  1310,  1318,  1324,  1335,  1339,
    1343,  1350,  1354,  1358,  1362,  1367,  1372,  1378,  1383,  1398,
    1403,  1408,  1422,  1427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SUBSTR_T", "NOTEQUAL_T", "OF_T", "CL_T",
  "CD_T", "TM_T", "DEPTH_T", "HY_T", "HR_T", "MG_T", "DR_T", "WEIGHT_T",
  "UPPERCASE_T", "LENGTH_T", "IN_T", "PA_T", "NS_T", "IR_T", "IF_T",
  "EL_T", "TH_T", "OR_T", "AN_T", "CT_T", "EQUAL_T", "GTHANE_T",
  "LTHANE_T", "GTHAN_T", "LTHAN_T", "CANCEL_T", "RH_T", "KP_T", "LL_T",
  "GOTO_T", "EXECUTE_T", "LABEL_T", "SE_T", "PM_T", "BR_T", "BR_UP_T",
  "NV_T", "NY_T", "PAGE_T", "ENY_T", "COMMENT_T", "TI_T", "DA_T", "FO_T",
  "ON_T", "OFF_T", "AR_T", "BX_T", "SP_T", "US_T", "SIZE_T", "STYLE_T",
  "IDENT_T", "VAR_UP_T", "VAR_T", "DIRECTION_T", "NUM_T", "WIDTH_T",
  "TP_T", "TAB_T", "ROTATE_T", "NEW_LINE_T", "BM_T", "SU_T", "DM_T",
  "GS_T", "SK_T", "CE_T", "TB_T", "MATHEX_T", "VR_T", "'.'", "$accept",
  "TOKEN", "PM", "RH", "OPERATOR", "VARPROC", "COMPARISON", "IF", "AN",
  "OR", "MATHEX", "STRING_LINE", "EX", "CE", "SU", "DM", "KP", "CT",
  "OPTIONALDA", "OPTINALMEASURE", "DA", "SIZE_LIST", "AR", "FO", "TI",
  "NV", "BR_UP", "BR", "NY", "ENY", "COMMENT", "BX", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    46
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      92,   -35,   -11,    44,    72,     1,   -67,   -67,   -67,   -67,
      81,   -67,   109,   -67,   -67,    91,   134,   158,   157,   151,
     135,   140,   164,   -67,   -67,    89,    21,    97,    84,   161,
     162,    84,    84,    75,   -67,   -67,   -67,   -67,   -67,   110,
     174,   175,   172,   165,   177,   166,   167,   192,   170,   171,
     181,    67,   -67,   -67,   128,   116,    53,   -48,   180,   111,
     -67,    57,   -67,   168,   -67,   -67,   184,   176,   130,   182,
     125,   183,   -67,   147,   -67,   185,   -67,   186,   -67,   -67,
     -67,   -67,   173,    52,   -67,   187,   188,   189,   190,   191,
     -67,    99,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,    96,   -67,   193,   194,   -67,   195,   -67,   196,   197,
     198,   136,   143,   144,   -67,   229,    34,   199,   200,   -67,
     201,   -67,   202,   -67,    78,   210,   204,   -67,   -67,   205,
     206,   -67,   -67,   -67,   -67,   214,    52,   -67,   -67,   -67,
     -67,   -67,   -67,   208,   209,   -67,   221,   -67,   -67,   219,
     -67,   -67,   216,   212,   213,   215,   217,   203,   -67,   -67,
     -67,   -67,    96,   218,   220,   -67,   222,   223,   224,   -67,
     -67,   225,   226,   -67,   -67,   155,   228,    20,   156,   227,
     -67,   -67,   -67,   231,   230,   -67,   -67,   237,   -67,   234,
     232,   103,   -67,    78,   159,   -67,    52,   -67,   -67,   -67,
     -67,   -67,   180,   -67,    99,   -67,   -67,   -67,   -67,   145,
     -67,   -67,   -67,   -67,   -67,   233,   242,   235,   245,   153,
     236,   238,   248,   239,   -67,   -67,   -67,   -67,   -67,    78,
     -67,   -67,   -67,   -67,   -67,   -67,    35,   249,   240,   -67,
     -67,   -67,   -67,   243,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   244,   246,   247,   -67,   -67,   -67,   250,   251,   -67,
     -67,   -67,   254,   252,   -67,   253,   -67,   122,   255,   256,
     259,   -67,   -67,   257,   -67,   106,   260,   258,   -67,   -67,
     261,   -67,   266,   262,   263,   264,   -66,    54,   173,   265,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,    56,   -67,   271,   -67,   277,
     -67,   -67,   272,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   133,   268,   278,   275,   -67,   -67,   273,   -67,
     282,   274,   -67,   276,   -67,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   174,     0,     0,    57,    56,    58,    55,
       0,   173,     0,     1,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,    46,
      48,     0,     0,     0,    66,    67,    68,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    90,     0,     0,     0,   121,   153,    52,
      87,    88,    92,    89,    31,   140,     0,     0,     0,     0,
       0,     0,    93,     0,     3,    19,    17,    14,    16,    15,
      12,    13,    22,    24,    11,     0,     0,     0,    20,    18,
       2,   162,     4,     5,     6,     7,     8,     9,    10,    21,
      23,   163,    59,     0,     0,    25,     0,    28,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,     0,   108,
       0,   113,     0,   110,     0,     0,     0,    47,    49,     0,
       0,    87,    88,    92,    89,     0,   145,    62,    63,    60,
      61,   143,   144,     0,     0,    51,     0,   170,   169,     0,
     171,   172,     0,     0,     0,     0,     0,     0,   175,   182,
     180,   181,   176,     0,     0,   100,     0,     0,   123,   120,
     154,     0,     0,    53,   161,     0,     0,     0,     0,     0,
     138,   139,   142,     0,     0,   133,   136,   135,   134,     0,
       0,     0,   102,    94,     0,    96,    95,   115,   116,   117,
     114,   111,   153,   156,   155,   179,   177,   178,   183,     0,
      26,    27,    29,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   112,   109,     0,
      78,    80,    79,    94,   101,    97,     0,     0,     0,   165,
     166,   164,   158,     0,    98,    99,   122,   125,   124,   159,
      54,     0,     0,     0,    76,    75,    77,     0,     0,    30,
     141,   119,     0,     0,    34,     0,    32,     0,     0,     0,
       0,   152,    45,     0,    43,     0,     0,     0,    42,    40,
       0,   107,     0,     0,     0,     0,     0,     0,   131,     0,
     167,   157,    83,    81,   160,    84,    82,   137,   118,    33,
      72,    74,    73,    85,    86,     0,    44,     0,    36,     0,
      41,    50,     0,   130,   126,   132,   128,   129,   168,   147,
     146,   151,     0,     0,     0,     0,   149,   148,     0,    35,
       0,     0,   150,     0,   127,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   279,   -67,    -5,   112,   179,   -67,   -67,   -67,
      15,    68,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     305,   317,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     335,   288
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    75,   177,   135,    78,    79,    80,    81,
      82,   196,    84,    85,    86,    87,    88,    89,   322,   328,
       7,   204,    92,    93,    94,    95,    96,    97,    98,    99,
       8,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      76,    13,   316,   166,   167,    14,    15,    16,    17,    18,
     175,    19,    20,    21,    22,   168,    23,    24,    25,    26,
     169,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     9,    39,    40,    41,    42,   282,    43,
      44,     2,    45,    46,    47,    48,    10,    49,     3,    50,
       4,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    14,    61,    62,    63,   319,    64,    23,    24,    65,
      66,    67,    68,    83,    69,    70,    71,    72,    73,   254,
     120,   255,    14,   256,    34,    35,    36,    37,    38,   121,
      23,    24,   283,   223,   284,   285,   286,     1,   287,    23,
      24,   136,   224,    52,    53,    34,    35,    36,    37,    38,
     163,   131,    11,   132,   133,   134,   164,    77,   153,   154,
     195,   165,   317,   320,   321,   174,    52,    53,    72,   155,
     178,    12,     2,   175,   131,   176,   132,   133,   134,     3,
     125,     4,   137,   125,   125,   124,   116,   138,   104,   102,
     117,    72,   118,   205,   122,   206,   202,   119,   207,   105,
     265,   139,   140,   307,   208,   123,   103,   203,   158,   171,
      55,   266,   172,   159,   308,   160,   185,   186,   161,   173,
     156,   300,   182,   301,   187,   302,   188,   157,   267,   183,
     326,   106,   111,   215,   112,   216,   327,   113,   217,   190,
     218,   220,   109,   110,   191,   219,   221,   126,   114,   270,
     129,   130,   276,   271,   108,   277,   251,   257,   252,   258,
     268,   107,   269,   115,   267,   141,   142,   180,   181,   127,
     128,   144,   143,   145,   147,   148,   146,   149,   150,   151,
     152,   179,   170,   222,   178,   184,   189,   193,   236,   194,
     209,   288,     0,   192,   243,   197,   198,   199,   200,   201,
       0,     0,   210,   211,   212,   213,   214,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   237,   238,
     239,   240,   260,   241,    74,   242,   244,     0,   245,   253,
     246,   247,   248,   249,   250,   259,   262,   263,   261,   273,
     264,   272,   275,   274,   278,   280,   279,   281,   290,   289,
      90,   291,   292,   297,   293,   294,   305,   309,   295,   296,
     298,   299,    91,   303,   304,   306,   310,   312,   323,   311,
     313,   314,   315,   318,   324,   325,   329,   330,   331,   333,
     100,   332,   334,   162,   335
};

static const yytype_int16 yycheck[] =
{
       5,     0,    68,    51,    52,     4,     5,     6,     7,     8,
      76,    10,    11,    12,    13,    63,    15,    16,    17,    18,
      68,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    68,    33,    34,    35,    36,     3,    38,
      39,    40,    41,    42,    43,    44,    57,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     4,    61,    62,    63,     9,    65,    15,    16,    68,
      69,    70,    71,     5,    73,    74,    75,    76,    77,    59,
      59,    61,     4,    63,    27,    28,    29,    30,    31,    68,
      15,    16,    57,    59,    59,    60,    61,     5,    63,    15,
      16,    33,    68,    51,    52,    27,    28,    29,    30,    31,
      57,    59,    68,    61,    62,    63,    63,     5,    51,    52,
      68,    68,    68,    67,    68,    68,    51,    52,    76,    62,
      76,    59,    40,    76,    59,    78,    61,    62,    63,    47,
      28,    49,    32,    31,    32,    61,    57,    37,    57,    68,
      61,    76,    63,    57,    57,    59,    57,    68,    62,    68,
      57,    51,    52,    57,    68,    68,    57,    68,    52,    58,
      54,    68,    61,    57,    68,    59,    51,    52,    62,    68,
      52,    59,    52,    61,    59,    63,    61,    59,   193,    59,
      57,    57,    57,    57,    59,    59,    63,    62,    62,    52,
      57,    57,    51,    52,    57,    62,    62,    28,    68,    64,
      31,    32,    59,    68,    57,    62,    61,    61,    63,    63,
      61,    63,    63,    59,   229,    51,    52,    51,    52,    68,
      68,    59,    57,    68,    68,    68,    59,    45,    68,    68,
      59,    57,    62,    14,    76,    63,    63,    61,    27,    76,
      57,   236,    -1,    68,    51,    68,    68,    68,    68,    68,
      -1,    -1,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    61,    68,    68,    68,    61,    68,    68,    59,    63,
      68,    68,    51,    68,     5,    68,    68,    -1,    68,    61,
      68,    68,    68,    68,    68,    68,    59,    63,    68,    57,
      68,    68,    57,    68,    68,    57,    68,    68,    68,    60,
       5,    68,    68,    59,    68,    68,    57,    57,    68,    68,
      68,    68,     5,    68,    68,    68,    68,    61,    57,    68,
      68,    68,    68,    68,    57,    63,    68,    59,    63,    57,
       5,    68,    68,    55,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    40,    47,    49,    80,    81,    99,   109,    68,
      57,    68,    59,     0,     4,     5,     6,     7,     8,    10,
      11,    12,    13,    15,    16,    17,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    33,
      34,    35,    36,    38,    39,    41,    42,    43,    44,    46,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    61,    62,    63,    65,    68,    69,    70,    71,    73,
      74,    75,    76,    77,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    68,    57,    57,    68,    57,    63,    57,    51,
      52,    57,    59,    62,    68,    59,    57,    61,    63,    68,
      59,    68,    57,    68,    61,    84,    85,    68,    68,    85,
      85,    59,    61,    62,    63,    84,    90,    32,    37,    51,
      52,    51,    52,    57,    59,    68,    59,    68,    68,    45,
      68,    68,    59,    51,    52,    62,    52,    59,    52,    57,
      59,    62,   110,    57,    63,    68,    51,    52,    63,    68,
      62,    58,    61,    68,    68,    76,    78,    83,    76,    57,
      51,    52,    52,    59,    63,    51,    52,    59,    61,    63,
      52,    57,    68,    61,    76,    68,    90,    68,    68,    68,
      68,    68,    57,    68,   100,    57,    59,    62,    68,    57,
      68,    68,    68,    68,    68,    57,    59,    62,    57,    62,
      57,    62,    14,    59,    68,    68,    68,    68,    68,    61,
      68,    68,    68,    61,    68,    68,    27,    59,    63,    68,
      68,    68,    68,    51,    68,    68,    68,    68,    68,    68,
      68,    61,    63,    61,    59,    61,    63,    61,    63,    68,
      51,    68,    59,    63,    68,    57,    68,    83,    61,    63,
      64,    68,    68,    57,    68,    57,    59,    62,    68,    68,
      57,    68,     3,    57,    59,    60,    61,    63,    89,    60,
      68,    68,    68,    68,    68,    68,    68,    59,    68,    68,
      59,    61,    63,    68,    68,    57,    68,    57,    68,    57,
      68,    68,    61,    68,    68,    68,    68,    68,    68,     9,
      67,    68,    97,    57,    57,    63,    57,    63,    98,    68,
      59,    63,    68,    57,    68,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    86,    87,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    95,    95,    96,    97,    97,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   104,   105,
     106,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     4,     4,     3,     4,
       4,     2,     4,     5,     4,     8,     6,    10,     4,     4,
       5,     6,     5,     5,     6,     5,     2,     3,     2,     3,
       6,     3,     2,     3,     4,     2,     1,     1,     1,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     3,     3,
       2,     3,     2,     2,     3,     3,     3,     4,     2,     3,
       2,     2,     3,     2,     2,     2,     2,     2,     4,     3,
       2,     1,     3,     2,     3,     3,     5,     8,     5,     5,
       5,     4,     5,     2,     2,     2,     2,     4,     2,     2,
       1,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       9,     7,     5,     1,     2,     2,     2,     4,     3,     3,
       4,     2,     1,     1,     3,     3,     3,     4,     5,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

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
| yyreduce -- Do a reduction.  |
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
        case 25:
#line 58 "compiler.y" /* yacc.c:1646  */
    {
																											Node* ofNode = new Node(OF, "");
																											list.push_back(*ofNode);
																										}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 62 "compiler.y" /* yacc.c:1646  */
    {
																											Node* ofNode = new Node(OF, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* ofSizeNode = new Node(NUMBER, number);
																											list.push_back(*ofNode);
																											list.push_back(*ofSizeNode);
																										}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "compiler.y" /* yacc.c:1646  */
    {
																											Node* clNode = new Node(CL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* clnumNode = new Node(NUMBER, number);
																											list.push_back(*clNode);
																											list.push_back(*clnumNode);
																										}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 76 "compiler.y" /* yacc.c:1646  */
    {
																											Node* cdNode = new Node(CD, "");
																											Node* cdValueNode = new Node(VALUE, "");
																											Node* cdnumNode = new Node(NUMBER, (yyvsp[0].tokens));
																											list.push_back(*cdNode);
																											list.push_back(*cdValueNode);
																											list.push_back(*cdnumNode);	
																										}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "compiler.y" /* yacc.c:1646  */
    {
																											Node* tmNode = new Node(TM, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* tmsizeNode = new Node(NUMBER, number);
																											list.push_back(*tmNode);
																											list.push_back(*tmsizeNode);
																										}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 91 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BM" << endl;
																											Node* bmNode = new Node(BM, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* bmsizeNode = new Node(NUMBER, number);
																											list.push_back(*bmNode);
																											list.push_back(*bmsizeNode);
																										}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TP" << endl;
																											Node* tpNode = new Node(TP, "");
																											list.push_back(*tpNode);
																										}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VR" << endl;
																											Node* vrNode = new Node(VR, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* vrOnNode = new Node(ON, "");
																											Node* sizeNode = new Node(NUMBER, number);

																											vrNode->addNode(vrOnNode);
																											vrNode->addNode(sizeNode);

																											list.push_back(*vrNode);
																										}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VR" << endl;
																											Node* vrNode = new Node(VR, "");
																											Node* vrOnNode = new Node(ON, "");
																											
																											numberFct((yyvsp[-2].tokens));
																											Node* sizeNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode2 = new Node(NUMBER, number);

																											vrNode->addNode(vrOnNode);
																											vrNode->addNode(sizeNode);
																											vrNode->addNode(sizeNode2);

																											list.push_back(*vrNode);
																										}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VR OFF" << endl;
																											Node* vrNode = new Node(OFF_VR, "");
																											list.push_back(*vrNode);
																										}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* hrStrNode = new Node(STRINGLITERAL, (yyvsp[-5].tokens));
																											numberFct((yyvsp[-4].tokens));
																											Node* hrS1Node = new Node(NUMBER, number);
																											numberFct((yyvsp[-3].tokens));
																											Node* hrS2Node = new Node(NUMBER, number);
																											numberFct((yyvsp[-2].tokens));
																											Node* hrS3Node = new Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node* hrS4Node = new Node(NUMBER, number);
																											list.push_back(*hrNode);
																											list.push_back(*hrStrNode);
																											list.push_back(*hrS1Node);
																											list.push_back(*hrS2Node);
																											list.push_back(*hrS3Node);
																											list.push_back(*hrS4Node);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* hrStrNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											numberFct((yyvsp[-2].tokens));
																											Node* hrS1Node = new Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node* hrS2Node = new Node(NUMBER, number);
																											
																											list.push_back(*hrNode);
																											list.push_back(*hrStrNode);
																											list.push_back(*hrS1Node);
																											list.push_back(*hrS2Node);
																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);

																										}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 177 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hyNode = new Node(HR, "");
																											Node* hyStrNode = new Node(STRINGLITERAL, (yyvsp[-7].tokens));
																											Node* dirNode;
																											
																											if(strcmp((yyvsp[-6].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											Node* hyS1Node = new Node(NUMBER, (yyvsp[-6].tokens));
																											Node* hyS2Node = new Node(NUMBER, (yyvsp[-5].tokens));
																											Node* hyS3Node = new Node(STRINGLITERAL, (yyvsp[-4].tokens));
																											Node* hyS4Node = new Node(NUMBER, (yyvsp[-3].tokens));
																											list.push_back(*hyNode);
																											list.push_back(*hyStrNode);
																											list.push_back(*dirNode);
																											list.push_back(*hyS1Node);
																											list.push_back(*hyS2Node);
																											list.push_back(*hyS3Node);
																											list.push_back(*hyS4Node);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY ON" << endl;
																											Node* hyNode = new Node(HY, "");
																											Node* hyOnNode = new Node(ON, "");
																											list.push_back(*hyNode);
																											list.push_back(*hyOnNode);
																										}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 213 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY" << endl;
																											Node* hyOffNode = new Node(OFF_HY, "");
																											list.push_back(*hyOffNode);	
																										}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 218 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* lNode = new Node(LEFT, "");
																											Node* rNode = new Node(RIGHT, "");
																											list.push_back(*hrNode);
																											list.push_back(*lNode);
																											list.push_back(*rNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 230 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* ruleNode = new Node(RULE, (yyvsp[-4].tokens));
																											Node* lNode = new Node(LEFT, "");
																											Node* rNode = new Node(RIGHT, "");
																											hrNode->addNode(ruleNode);
																											list.push_back(*hrNode);
																											list.push_back(*lNode);
																											list.push_back(*rNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 244 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* dirNode;

																											if(strcmp((yyvsp[-2].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);

																											list.push_back(*hrNode);
																											list.push_back(*dirNode);
																											list.push_back(*sizeNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 268 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct((yyvsp[-2].tokens));
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* dirNode;

																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											list.push_back(*hrNode);
																											list.push_back(*sizeNode);
																											list.push_back(*dirNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);																										

																										}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 294 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct((yyvsp[-3].tokens));
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* forNode = new Node(STRINGLITERAL, (yyvsp[-2].tokens));

																											numberFct((yyvsp[-1].tokens));
																											Node* size2Node = new Node(NUMBER, number);

																											list.push_back(*hrNode);
																											list.push_back(*sizeNode);
																											list.push_back(*forNode);
																											list.push_back(*size2Node);	
																											
																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);

																										}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 315 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR   TOKEN HR_T	SIZE_T SIZE_T 	NEW_LINE_T" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct((yyvsp[-2].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node* size2Node = new Node(NUMBER, number);
																											
																											list.push_back(*hrNode);
																											list.push_back(*sizeNode);
																											list.push_back(*size2Node);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																											
																										}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 332 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											list.push_back(*elNode);	
																										}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*elNode);	
																											list.push_back(*newline);
																										}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 344 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											list.push_back(*thNode);	
																										}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 349 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*thNode);	
																											list.push_back(*newline);
																										}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 356 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DR" << endl;
																											Node* drNode = new Node(DR, "");
																											Node* drStrNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* drWeightNode = new Node(WEIGHT, "");
																											Node* drSizeNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											list.push_back(*drNode);
																											list.push_back(*drStrNode);
																											list.push_back(*drWeightNode);
																											list.push_back(*drSizeNode);
																										}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 367 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LABEL" << endl;
																											string s = (yyvsp[-1].tokens);
																											Node* labelNode = new Node(LABEL, s.substr(3));	
																											list.push_back(*labelNode);																										
																										}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 373 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName((yyvsp[0].tokens));
																											styleSize((yyvsp[0].tokens));
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																										}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 389 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName((yyvsp[-1].tokens));
																											styleSize((yyvsp[-1].tokens));
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																										}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 405 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName((yyvsp[-2].tokens));
																											styleSize((yyvsp[-2].tokens));
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											list.push_back(*varNameNode);
																										}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 424 "compiler.y" /* yacc.c:1646  */
    {
																											Node* ofNode = new Node(OF, "");
																											list.push_back(*ofNode);
																										}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 432 "compiler.y" /* yacc.c:1646  */
    {
																											Node* pmNode = new Node(PM, "");
																											numberFct((yyvsp[0].tokens));
																											Node* pmsizeNode = new Node(NUMBER, number);
																											list.push_back(*pmNode);
																											list.push_back(*pmsizeNode);
																										}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 440 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH ON" << endl;
																											Node* rhNode = new Node(RH, "");
																											Node* rhonNode = new Node(ON, "");
																											list.push_back(*rhNode);
																											list.push_back(*rhonNode);
																										}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 447 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH OFF" << endl;
																											Node* rhoffNode = new Node(OFF_RH, "");
																											list.push_back(*rhoffNode);
																										}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 452 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH CANCEL" << endl;
																											Node* rhcancelNode = new Node(CANCEL, "");
																											list.push_back(*rhcancelNode);
																										}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 459 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Rh EXECUTE" << endl;
																											Node* rhexecuteNode = new Node(EXECUTE, "");
																											list.push_back(*rhexecuteNode);
																										}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 475 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, (yyvsp[-3].tokens));
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 493 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, (yyvsp[-3].tokens));
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*numNode);
																										}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 511 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, (yyvsp[-3].tokens));
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
								
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																											Node* varNameNode2 = new Node(NAME, var);
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																										}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 531 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
								
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																											Node* varNameNode2 = new Node(NAME, var);
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																										}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 550 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 566 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, (yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*numNode);
																										}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 583 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IF" << endl;
																											Node* ifNode = new Node(IF, "");
																											list.push_back(*ifNode);
																										}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 589 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AN" << endl;
																											Node* andNode = new Node(AND, "");
																											list.push_back(*andNode);
																										}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 595 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "OR" << endl;
																											Node* orNode = new Node(OR, "");
																											list.push_back(*orNode);	
																										}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 601 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, (yyvsp[-3].tokens));
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* numberNode = new Node(NUMBER, number);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*mathExSign);
																											list.push_back(*numberNode);
																											list.push_back(*newlineNode);
																										}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 616 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* numNode = new Node(NUMBER, (yyvsp[-3].tokens));
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* numNode2 = new Node(NUMBER, (yyvsp[-1].tokens));
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*numNode);
																											list.push_back(*mathExSign);
																											list.push_back(*numNode2);
																											list.push_back(*newlineNode);

																										}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 630 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, (yyvsp[-3].tokens));
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											Node* varNameNode2 = new Node(NAME, (yyvsp[-1].tokens));
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*mathExSign);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																											list.push_back(*newlineNode);
																										}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 647 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node* mathExNode = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, (yyvsp[-1].tokens));
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											numberFct((yyvsp[-3].tokens));
																											Node* numberNode = new Node(NUMBER, number);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExNode);
																											list.push_back(*numberNode);
																											list.push_back(*mathExSign);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*newlineNode);
																										}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 663 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, (yyvsp[-1].tokens));
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExSign);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*newlineNode);
																											
																										}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 675 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* numNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExSign);
																											list.push_back(*numNode);
																											list.push_back(*newlineNode);
																										}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 685 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRING" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);	
																										}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 691 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 699 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Number in a string" << endl;
																											Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
																											list.push_back(*numNode);
																										}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 704 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "off in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 709 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "ON in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 714 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "direction token in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 719 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Mathex in a string" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 725 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRVAR" << endl;
																											Node* rule = new Node(RULE, (yyvsp[-1].tokens));
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-1].tokens));
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*rule);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 737 "compiler.y" /* yacc.c:1646  */
    {
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 742 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "GOTO" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																											Node* gotoNode = new Node(GO, "");
																											Node* identifierNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*gotoNode);
																											list.push_back(*identifierNode);	
																										}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 750 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											numberFct((yyvsp[-1].tokens));
																											Node* spacenNode = new Node(NUMBER, number);

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 760 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, (yyvsp[-1].tokens));

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 769 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, "1");

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 778 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LL" << endl;
																											Node* llNode = new Node(LL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*llNode);
																											list.push_back(*sizeNode);	
																										}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 787 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MG" << endl;
																											Node* mgNode = new Node(MG, "");
																											string s = (yyvsp[-1].tokens);
																											Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
																											Node* mgStrNode = new Node(STRINGLITERAL, s.substr(6, s.length() - 7));
																											list.push_back(*mgNode);
																											list.push_back(*mgTNode);
																											list.push_back(*mgStrNode);
																										}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 797 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 805 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																							    			Node* varName0 = new Node(NAME, var);
																											
																											list.push_back(*inNode);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																											
																										}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 818 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											
																											Node* sizeNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 826 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											numberFct((yyvsp[-2].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											Node* ident = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																											list.push_back(*ident);
																										}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 836 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											Node* sizeNode = new Node(NUMBER, "0");
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 843 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*irNode);
																											list.push_back(*sizeNode);
																										}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 851 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											list.push_back(*irNode);
																										}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 857 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											paNode->addNode(identNode);
																											list.push_back(*paNode);
																										}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 864 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											list.push_back(*paNode);																											
																										}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 873 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TB" << endl;
																											Node* tbNode = new Node(TB, "");
																											numberFct((yyvsp[-2].tokens));
																											Node* tbNum1Node = new Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node* tbNum2Node = new Node(NUMBER, number);
																											list.push_back(*tbNode);
																											list.push_back(*tbNum1Node);
																											list.push_back(*tbNum2Node);
																										}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 884 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SK" << endl;
																											Node* sknode = new Node(SK, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* skNumberNode = new Node(NUMBER, number);
																											list.push_back(*sknode);
																											list.push_back(*skNumberNode);
																										}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 892 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 897 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 902 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE ON" << endl;
																											Node* us = new Node(US, "");
																											Node* onNode = new Node(ON, "");
																											list.push_back(*us);		
																											list.push_back(*onNode);																					
																										}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 909 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE NUM" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											Node* us = new Node(US, "");
																											numberFct((yyvsp[0].tokens));
																											Node* numNode = new Node(NUMBER, number);
																											us->addNode(numNode);
																											list.push_back(*offUsNode);
																											list.push_back(*us);
																										}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 919 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE NUM" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											Node* us = new Node(US, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* numNode = new Node(NUMBER, number);
																											us->addNode(numNode);
																											list.push_back(*offUsNode);
																											list.push_back(*us);
																										}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 929 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE OFF" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											list.push_back(*offUsNode);	
																										}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 934 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 947 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode  = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-6].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-5].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* substrNode = new Node(SUBSTR, "");
																											Node* sub1Node = new Node(NUMBER, (yyvsp[-2].tokens));
																											Node* sub2Node = new Node(NUMBER, (yyvsp[-1].tokens));

																											substrNode->addNode(sub1Node);
																											substrNode->addNode(sub2Node);
																											
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*substrNode);
																										}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 966 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[-1].tokens));
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 980 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																											numberFct((yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* numberNode = new Node(NUMBER, number);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*numberNode);
																										}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 994 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																											numberFct((yyvsp[-1].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* numberNode = new Node(NUMBER, number);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*numberNode);
																										}
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1008 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-2].tokens));
																											Node* equalNode  = new Node(CHARACTER, (yyvsp[-1].tokens));
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											
																										}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1018 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* seidentNode = new Node(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node* eqNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											Node* valueDataNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*seNode);
																											list.push_back(*seidentNode);
																											list.push_back(*eqNode);
																											list.push_back(*valueNode);
																											list.push_back(*valueDataNode);
																										}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1032 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ON" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceOnNode = new Node(ON, "");
																											list.push_back(*ceNode);
																											list.push_back(*ceOnNode);
																										}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1039 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE VAR" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceVarNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																											Node* varNameNode = new Node(NAME, name);
																											ceVarNode->addNode(varNameNode);
																											list.push_back(*ceNode);
																											list.push_back(*ceVarNode);
																										}
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1049 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ident" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode = new Node(IDENTIFIER, (yyvsp[0].tokens));
																											list.push_back(*ceNode);
																											list.push_back(*ceIdentNode);	
																										}
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1056 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE OFF" << endl;
																											Node* ceOffNode = new Node(OFF_CE, "");
																											list.push_back(*ceOffNode);
																										}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1061 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE IDENT IDENT IDENT" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode1 = new Node(IDENTIFIER, (yyvsp[-2].tokens));
																											Node* ceIdentNode2 = new Node(IDENTIFIER, (yyvsp[-1].tokens));
																											Node* ceIdentNode3 = new Node(IDENTIFIER, (yyvsp[0].tokens));																											
																											list.push_back(*ceNode);
																											list.push_back(*ceIdentNode1);
																											list.push_back(*ceIdentNode2);
																											list.push_back(*ceIdentNode3);																											
																										}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1073 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU" << endl;
																											Node* suNode = new Node(SU, "");
																											Node* suOnNode = new Node(ON, "");
																											list.push_back(*suNode);
																											list.push_back(*suOnNode);
																										}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1080 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU OFF" << endl;
																											Node* suOffNode = new Node(OFF_SU, "");
																											list.push_back(*suOffNode);
																										}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1087 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM" << endl;
																											Node* dmNode = new Node(DM, "");
																											Node* dmIdentNode = new Node(IDENTIFIER, "");
																											Node* dmOnNode = new Node(ON, "");
																											list.push_back(*dmNode);
																											list.push_back(*dmIdentNode);
																											list.push_back(*dmOnNode);
																										}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1096 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM OFF" << endl;
																											Node* dmOffNode = new Node(OFF_DM, "");
																											list.push_back(*dmOffNode);
																										}
#line 3121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1102 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP ON" << endl;
																											Node* kpNode = new Node(KP, "");
																											Node* kponNode = new Node(ON, "");
																											list.push_back(*kpNode);
																											list.push_back(*kponNode);
																										}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1109 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP OFF" << endl;
																											Node* kpoffNode = new Node(OFF_KP, "");
																											list.push_back(*kpoffNode);
			;																							}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1114 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node* ctNode = new Node(CT, "");
																											list.push_back(*ctNode);
																											
																										}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1127 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, (yyvsp[-7].tokens));
																											
																											numberFct((yyvsp[-6].tokens));
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-5].tokens));
																											Node* dayNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-3].tokens));
																											Node* daWidthNode = new Node(NUMBER, number);

																											string s = (yyvsp[-2].tokens);
																											Node* daOptionalNode;
																											if(s == "rotate")
																											{
																												daOptionalNode = new Node(ROTATE, "");;
																											}
																											if(s == "depth")
																											{
																												daOptionalNode = new Node(DEPTH, "");;
																											}
																											numberFct((yyvsp[-1].tokens));
																											Node* daRotateNumberNode = new Node(NUMBER, number);

																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											list.push_back(*daWidthNode);
																											list.push_back(*daOptionalNode);
																											list.push_back(*daRotateNumberNode);
																										}
#line 3194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1162 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, (yyvsp[-5].tokens));
																											
																											numberFct((yyvsp[-4].tokens));
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-3].tokens));
																											Node* dayNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-1].tokens));
																											Node* daWidthNode = new Node(NUMBER, number);

																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											list.push_back(*daWidthNode);
																										}
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1182 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, (yyvsp[-3].tokens));
																											
																											numberFct((yyvsp[-2].tokens));
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct((yyvsp[-1].tokens));
																											Node* dayNode = new Node(NUMBER, number);
																											
																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											
																										}
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1200 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[0].tokens));
																											Node* tpSizeNode = new Node(NUMBER, size);
																											list.push_back(*tpSizeNode);
																										}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1205 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[-1].tokens));
																											Node* tpSizeNode = new Node(NUMBER, size);
																											
																											Node* dirNode;
																											
																											if(strcmp((yyvsp[0].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											tpSizeNode->addNode(dirNode);
																											list.push_back(*tpSizeNode);
																										}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1224 "compiler.y" /* yacc.c:1646  */
    {
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1229 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node* area = new Node(AREA, "");
																											Node* areaIdent = new Node(NAME, (yyvsp[-2].tokens));
																											Node* areaOn = new Node(ON, "");
																											list.push_back(*area);
																											list.push_back(*areaIdent);
																											list.push_back(*areaOn);
																										}
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1238 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node* areaOff = new Node(OFF_AREA, "");
																											list.push_back(*areaOff);
																										}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1243 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											styleName((yyvsp[-2].tokens));
																											styleSize((yyvsp[-2].tokens));
																											if(strlen(size)>0){
																												Node* fontName = new Node(NAME, name);
																												Node* font = new Node(FONT, "");
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*font);
																												list.push_back(*fontName);
																												list.push_back(*fontSize);
																											}

																											styleName((yyvsp[-1].tokens));
																											Node* fontType = new Node(TYPE, "bold");
																											list.push_back(*fontType);

																										}
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1261 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");

																											varName((yyvsp[-3].tokens));
																											Node* varName1 = new Node(NAME, var);

																											Node* variable2 = new Node(STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node* varName2 = new Node(NAME, var);

																											list.push_back(*variable);
																											list.push_back(*varName1);
																											list.push_back(*variable2);
																											list.push_back(*varName2);

																										}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1279 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node* variable = new Node (STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node* variableName = new Node(NAME, var);

																											list.push_back(*variable);
																											list.push_back(*variableName);
																										}
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1292 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;
																											Node* foNode = new Node(FO, "");

																											Node* dirNode;
																											
																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											foNode->addNode(dirNode);
																											list.push_back(*foNode);
																										}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1310 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;				
																											Node* foNode = new Node(FO, "");
																											Node* onNode = new Node(ON, "");
																											
																											foNode->addNode(onNode);
																											list.push_back(*foNode);
																										}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1318 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO OFF" << endl;				
																											Node* offNode = new Node(OFF_FO, "");																											
																											list.push_back(*offNode);
																										}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1324 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TI" << endl;
																											Node* tiNode = new Node(TI, "");
																											Node* charNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																										    Node* numNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											
																											list.push_back(*tiNode);
																											list.push_back(*charNode);
																											list.push_back(*numNode);
																										}
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1335 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NV" << endl;
																										}
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1339 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BR_UP" << endl;
																										}
#line 3445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1343 "compiler.y" /* yacc.c:1646  */
    {
																											strcpy((yyval.tokens), (yyvsp[-1].tokens)); 
																											cout << "BR" << endl;
																											Node* linebreak = new Node(LINEBREAK, ""); 
																											list.push_back(*linebreak); 
																										}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1350 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NY" << endl;
																										}
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1354 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ENY" << endl;
																										}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1358 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																										}
#line 3481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1362 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																										}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1367 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX OFF" << endl;
																											Node* boxOff = new Node(OFF_BOX, "");
																											list.push_back(*boxOff);	
																										}
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1372 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											list.push_back(*box);
																											
																										}
#line 3511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1378 "compiler.y" /* yacc.c:1646  */
    {
																											cout<<"in box keyword"<<endl;
																											Node* keyword = new Node(RULE, (yyvsp[0].tokens));
																											list.push_back(*keyword);
																										}
#line 3521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1383 "compiler.y" /* yacc.c:1646  */
    {
																											cout<<"in box direction"<<endl;
																											Node* dirNode;

																											if(strcmp((yyvsp[0].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											list.push_back(*dirNode);

																										}
#line 3541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1398 "compiler.y" /* yacc.c:1646  */
    {
																											numberFct((yyvsp[0].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*sizeNode);
																										}
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1403 "compiler.y" /* yacc.c:1646  */
    {
																											cout<<"in box keyword"<<endl;
																											Node* keyword = new Node(RULE, (yyvsp[0].tokens));
																											list.push_back(*keyword);
																										}
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1408 "compiler.y" /* yacc.c:1646  */
    {
																											cout<<"in box direction"<<endl;
																											Node* dirNode;

																											if(strcmp((yyvsp[0].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											list.push_back(*dirNode);
																										}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1422 "compiler.y" /* yacc.c:1646  */
    {
																											numberFct((yyvsp[0].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*sizeNode);
																										}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1427 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "END OF .bx LINE"<<endl;
																											Node* endNode = new Node(NEWLINE_BOX, "");
																											list.push_back(*endNode);
																										}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3604 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 1829 "compiler.y" /* yacc.c:1906  */


void yyerror(char *msg){
	fprintf(stderr, "%s\n", msg);
	exit(1);
}







int main(){
	list.push_back(docNode);

	cout<< endl << endl <<"*******************YYPARSE*********************"<<endl;
	yyparse();

	// cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	// printList(list);

	cout<< endl << endl <<"*******************TREEBUILDING*********************"<<endl;
	startTreeBuilding(list);

	cout<< endl << endl <<"*******************FINISHED TREE*********************"<<endl;
	printTree(&list[0], 0);


	//save file
	ofstream file;
    file.open("template.ps");
    file << traverseGenerate(&list[0]);
    file.close();
    cout << "Template generated successfully!" << endl;
}
