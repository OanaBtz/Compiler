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
#define YYLAST   397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

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
      91,    99,   104,   109,   121,   138,   143,   165,   182,   211,
     218,   223,   235,   249,   273,   299,   320,   337,   342,   349,
     354,   361,   372,   378,   394,   410,   429,   433,   434,   435,
     437,   445,   452,   457,   463,   470,   471,   472,   473,   474,
     475,   477,   478,   480,   498,   516,   536,   555,   571,   588,
     594,   600,   606,   621,   635,   652,   668,   680,   690,   696,
     704,   709,   714,   719,   724,   730,   741,   742,   747,   755,
     765,   774,   783,   791,   796,   797,   807,   815,   828,   836,
     846,   855,   862,   870,   875,   876,   883,   888,   889,   890,
     891,   892,   903,   911,   916,   921,   928,   938,   948,   953,
     966,   985,  1006,  1031,  1060,  1076,  1095,  1109,  1123,  1137,
    1147,  1161,  1168,  1178,  1185,  1190,  1201,  1217,  1224,  1229,
    1231,  1240,  1246,  1253,  1260,  1265,  1272,  1273,  1275,  1276,
    1278,  1313,  1333,  1351,  1356,  1374,  1375,  1380,  1389,  1394,
    1412,  1430,  1440,  1441,  1443,  1461,  1469,  1475,  1486,  1490,
    1494,  1501,  1505,  1509,  1513,  1518,  1523,  1533,  1545,  1560,
    1577,  1596,  1616,  1639,  1664,  1669,  1683
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
  "NV", "BR_UP", "BR", "NY", "ENY", "COMMENT", "BX", "PARAMETER", YY_NULLPTR
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

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     101,   -34,   -10,    12,    98,     2,  -162,  -162,  -162,  -162,
      91,  -162,   117,  -162,  -162,    26,   131,   106,   193,   187,
     185,   184,   211,  -162,  -162,    88,    22,    63,    85,   206,
     207,    85,    85,    76,  -162,  -162,  -162,  -162,  -162,   110,
      67,   138,   217,   209,   219,   212,   213,   234,   214,   215,
     225,   121,  -162,  -162,   177,   157,   142,   -47,   223,   162,
    -162,    58,  -162,   210,   220,  -162,   230,   221,   182,   226,
     166,   227,  -162,    46,  -162,   224,  -162,   232,  -162,  -162,
    -162,  -162,   218,    53,  -162,   228,   229,   233,   235,   236,
    -162,   143,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,   238,   237,  -162,   239,  -162,   240,   241,
     242,   186,   189,   192,  -162,   277,    54,   243,    64,  -162,
     244,  -162,   245,  -162,    80,   253,   247,  -162,  -162,   248,
     249,  -162,  -162,   257,    53,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,   251,  -162,   252,  -162,   271,  -162,  -162,   262,
    -162,  -162,   259,   255,   256,   258,   260,   274,   261,  -162,
    -162,  -162,    96,   263,   264,  -162,   265,   266,   267,  -162,
    -162,   268,   269,  -162,  -162,   204,   278,   194,   205,  -162,
     270,  -162,  -162,  -162,   276,   272,  -162,  -162,   282,  -162,
     279,   275,   145,  -162,    80,   208,  -162,    53,  -162,  -162,
    -162,  -162,  -162,  -162,   143,   144,  -162,  -162,  -162,  -162,
    -162,   280,   273,   281,   287,   202,   283,   284,   288,   285,
    -162,  -162,   286,  -162,  -162,  -162,    80,  -162,  -162,  -162,
    -162,  -162,  -162,    36,   246,   289,  -162,  -162,  -162,  -162,
     290,  -162,  -162,   108,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,   291,   292,   293,  -162,  -162,  -162,   294,   295,  -162,
    -162,  -162,   296,   297,  -162,   298,  -162,   197,   299,   300,
     307,  -162,  -162,   301,  -162,   147,   313,   303,  -162,  -162,
     304,  -162,  -162,   312,   306,   119,   308,   -65,   164,   218,
     309,  -162,  -162,  -162,   109,  -162,  -162,  -162,  -162,  -162,
     316,  -162,  -162,  -162,  -162,  -162,  -162,  -162,    57,  -162,
     321,  -162,   322,  -162,  -162,   317,  -162,   163,  -162,  -162,
    -162,  -162,  -162,  -162,   122,   323,  -162,  -162,  -162,    97,
     315,   325,   318,   165,  -162,  -162,   123,  -162,  -162,  -162,
     319,  -162,   328,   320,   167,  -162,  -162,   135,  -162,   324,
    -162,   327,  -162,  -162,   139,  -162,   169,  -162,   326,   330,
    -162,  -162,   329,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   184,     0,     0,    58,    57,    59,    56,
       0,   183,     0,     1,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    72,     0,     0,     0,     0,    47,
      49,     0,     0,     0,    67,    68,    69,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    91,     0,     0,     0,   124,   163,    53,
      88,    89,    93,    90,    31,   149,     0,     0,     0,     0,
       0,     0,    94,     0,     3,    19,    17,    14,    16,    15,
      12,    13,    22,    24,    11,     0,     0,     0,    20,    18,
       2,   172,     4,     5,     6,     7,     8,     9,    10,    21,
      23,   173,    60,     0,     0,    25,     0,    28,     0,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,   111,
       0,   116,     0,   113,     0,     0,     0,    48,    50,     0,
       0,    89,    90,     0,   155,    63,    64,    61,    62,   152,
     154,   153,     0,   103,     0,    52,     0,   180,   179,     0,
     181,   182,     0,     0,     0,     0,     0,     0,     0,   196,
     194,   195,     0,     0,     0,   101,     0,     0,   126,   123,
     164,     0,     0,    54,   171,     0,     0,     0,     0,    32,
       0,   147,   148,   151,     0,     0,   141,   144,   143,   142,
       0,     0,     0,   104,    95,     0,    97,    96,   118,   119,
     120,   117,   114,   166,   165,     0,    26,    27,    29,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,     0,   108,   115,   112,     0,    79,    81,    80,
      95,   102,    98,     0,     0,     0,   175,   176,   174,   168,
       0,   185,   186,     0,    99,   100,   125,   128,   127,   169,
      55,     0,     0,     0,    77,    76,    78,     0,     0,    30,
     150,   122,     0,     0,    35,     0,    33,     0,     0,     0,
       0,   162,    46,     0,    44,     0,     0,     0,    43,    41,
       0,   109,   110,     0,     0,     0,     0,     0,     0,   139,
       0,   177,   167,   187,     0,    84,    82,   170,    85,    83,
     145,   121,    34,    73,    75,    74,    86,    87,     0,    45,
       0,    37,     0,    42,    51,     0,   138,     0,   129,   140,
     136,   137,   178,   188,     0,     0,   157,   156,   161,     0,
       0,     0,     0,     0,   134,   189,     0,   146,   159,   158,
       0,    36,     0,     0,     0,   130,   190,     0,   160,     0,
     135,     0,   131,   191,     0,    38,     0,   192,     0,     0,
     132,   193,     0,   133
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,   341,  -162,    -5,   112,   231,  -162,  -162,  -162,
      66,    69,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
     342,   345,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
     351,  -162,  -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    75,   177,   133,    78,    79,    80,    81,
      82,   197,    84,    85,    86,    87,    88,    89,   329,   340,
       7,   204,    92,    93,    94,    95,    96,    97,    98,    99,
       8,   101,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      76,   243,    13,   320,   166,   167,    14,    15,    16,    17,
      18,   175,    19,    20,    21,    22,   168,    23,    24,    25,
      26,   169,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     9,    39,    40,    41,    42,   283,
      43,    44,     2,    45,    46,    47,    48,    10,    49,     3,
      50,     4,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    14,    61,    62,    63,   326,    64,    23,    24,
      65,    66,    67,    68,    83,    69,    70,    71,    72,    73,
      11,   120,   294,   104,    14,    34,    35,    36,    37,    38,
     121,    23,    24,   284,   105,   285,   286,   287,   191,   288,
      23,    24,   134,   192,    52,    53,     1,    34,    35,    36,
      37,    38,    60,   219,   131,    62,   132,    77,   139,   140,
     122,   196,   220,   222,   327,   328,   174,    52,    53,    72,
     141,   123,   223,   324,   175,    60,   176,   131,    62,   132,
     125,     2,   135,   125,   125,   116,   124,   136,     3,   117,
       4,   118,    72,   159,   338,   160,   119,    12,   161,   102,
     339,   137,   138,   336,   242,   159,   159,   160,   160,   107,
     161,   161,   153,   154,   103,   347,   293,   323,   317,   159,
     159,   160,   160,   155,   161,   161,   354,   318,   106,   267,
     335,   346,   159,   358,   160,   142,   159,   161,   160,   163,
      58,   161,   265,   353,   310,   164,   143,   357,   270,   158,
     165,   203,   271,   266,   159,   311,   160,   186,   187,   161,
     171,   267,   333,   172,   344,   188,   351,   189,   359,   156,
     173,   334,   321,   345,   183,   352,   157,   360,   109,   110,
     178,   184,   111,   211,   112,   212,   214,   113,   213,   216,
     108,   215,   114,   254,   217,   255,   303,   256,   304,   126,
     305,   276,   129,   130,   277,   251,   257,   252,   258,   268,
     115,   269,   181,   182,   127,   128,   144,   145,   146,   149,
     147,   148,   150,   151,   152,   170,   178,   180,   179,   185,
     190,   218,   193,   194,   195,   205,   198,   199,   233,   289,
       0,   200,     0,   201,   202,   206,   290,   207,   208,   209,
     210,   221,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   234,   235,   236,   237,   240,   238,   260,   239,   241,
     273,   244,   245,   246,   247,   248,   249,   250,   259,   253,
     261,   262,   263,   264,   275,   280,    74,    90,   272,   274,
      91,   278,   279,   281,   282,   300,   100,   291,   292,   295,
     296,   297,   298,   299,   308,   301,   302,   306,   307,   309,
     312,   313,   314,   315,   316,   325,   319,   322,   330,   331,
     332,   343,   337,   341,   342,   349,   356,   348,   350,   362,
       0,     0,   355,     0,   361,     0,     0,   363
};

static const yytype_int16 yycheck[] =
{
       5,   162,     0,    68,    51,    52,     4,     5,     6,     7,
       8,    76,    10,    11,    12,    13,    63,    15,    16,    17,
      18,    68,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    68,    33,    34,    35,    36,     3,
      38,    39,    40,    41,    42,    43,    44,    57,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     4,    61,    62,    63,     9,    65,    15,    16,
      68,    69,    70,    71,     5,    73,    74,    75,    76,    77,
      68,    59,   243,    57,     4,    27,    28,    29,    30,    31,
      68,    15,    16,    57,    68,    59,    60,    61,    52,    63,
      15,    16,    33,    57,    51,    52,     5,    27,    28,    29,
      30,    31,    59,    59,    61,    62,    63,     5,    51,    52,
      57,    68,    68,    59,    67,    68,    68,    51,    52,    76,
      63,    68,    68,   294,    76,    59,    78,    61,    62,    63,
      28,    40,    32,    31,    32,    57,    61,    37,    47,    61,
      49,    63,    76,    57,    57,    59,    68,    59,    62,    68,
      63,    51,    52,   324,    68,    57,    57,    59,    59,    63,
      62,    62,    51,    52,    57,   336,    68,    68,    59,    57,
      57,    59,    59,    62,    62,    62,   347,    68,    57,   194,
      68,    68,    57,   354,    59,    57,    57,    62,    59,    57,
      57,    62,    57,    68,    57,    63,    68,    68,    64,    52,
      68,    68,    68,    68,    57,    68,    59,    51,    52,    62,
      58,   226,    59,    61,    59,    59,    59,    61,    59,    52,
      68,    68,    68,    68,    52,    68,    59,    68,    51,    52,
      76,    59,    57,    57,    59,    59,    57,    62,    62,    57,
      57,    62,    68,    59,    62,    61,    59,    63,    61,    28,
      63,    59,    31,    32,    62,    61,    61,    63,    63,    61,
      59,    63,    51,    52,    68,    68,    59,    68,    59,    45,
      68,    68,    68,    68,    59,    62,    76,    57,    68,    63,
      63,    14,    68,    61,    76,    57,    68,    68,    27,   233,
      -1,    68,    -1,    68,    68,    68,    60,    68,    68,    68,
      68,    68,    68,    68,    61,    68,    68,    68,    61,    68,
      68,    59,    63,    68,    68,    51,    68,    51,    68,    68,
      57,    68,    68,    68,    68,    68,    68,    68,    68,    61,
      68,    59,    63,    68,    57,    57,     5,     5,    68,    68,
       5,    68,    68,    68,    68,    59,     5,    68,    68,    68,
      68,    68,    68,    68,    57,    68,    68,    68,    68,    68,
      57,    68,    68,    61,    68,    59,    68,    68,    57,    57,
      63,    63,    59,    68,    59,    57,    59,    68,    68,    59,
      -1,    -1,    68,    -1,    68,    -1,    -1,    68
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
      85,    61,    63,    84,    90,    32,    37,    51,    52,    51,
      52,    63,    57,    68,    59,    68,    59,    68,    68,    45,
      68,    68,    59,    51,    52,    62,    52,    59,    52,    57,
      59,    62,   111,    57,    63,    68,    51,    52,    63,    68,
      62,    58,    61,    68,    68,    76,    78,    83,    76,    68,
      57,    51,    52,    52,    59,    63,    51,    52,    59,    61,
      63,    52,    57,    68,    61,    76,    68,    90,    68,    68,
      68,    68,    68,    68,   100,    57,    68,    68,    68,    68,
      68,    57,    59,    62,    57,    62,    57,    62,    14,    59,
      68,    68,    59,    68,    68,    68,    61,    68,    68,    68,
      61,    68,    68,    27,    59,    63,    68,    68,    68,    68,
      51,    68,    68,   111,    68,    68,    68,    68,    68,    68,
      68,    61,    63,    61,    59,    61,    63,    61,    63,    68,
      51,    68,    59,    63,    68,    57,    68,    83,    61,    63,
      64,    68,    68,    57,    68,    57,    59,    62,    68,    68,
      57,    68,    68,     3,    57,    59,    60,    61,    63,    89,
      60,    68,    68,    68,   111,    68,    68,    68,    68,    68,
      59,    68,    68,    59,    61,    63,    68,    68,    57,    68,
      57,    68,    57,    68,    68,    61,    68,    59,    68,    68,
      68,    68,    68,    68,   111,    59,     9,    67,    68,    97,
      57,    57,    63,    59,    68,    68,   111,    59,    57,    63,
      98,    68,    59,    63,    59,    68,    68,   111,    68,    57,
      68,    59,    68,    68,   111,    68,    59,    68,   111,    59,
      68,    68,    59,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    86,
      87,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   104,   105,
     106,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     4,     4,     3,     4,
       4,     2,     3,     4,     5,     4,     8,     6,    10,     4,
       4,     5,     6,     5,     5,     6,     5,     2,     3,     2,
       3,     6,     3,     2,     3,     4,     2,     1,     1,     1,
       3,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     4,
       4,     2,     3,     2,     2,     3,     2,     2,     2,     2,
       2,     4,     3,     2,     1,     3,     2,     3,     3,     5,
       7,     8,    10,    12,     6,     8,     5,     5,     5,     4,
       5,     2,     2,     2,     2,     4,     6,     2,     2,     1,
       3,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       9,     7,     5,     1,     2,     2,     2,     4,     3,     3,
       4,     2,     1,     1,     3,     3,     3,     4,     5,     2,
       2,     2,     2,     2,     1,     3,     3,     4,     5,     6,
       7,     8,     9,    10,     1,     1,     1
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
#line 1649 "y.tab.c" /* yacc.c:1646  */
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
#line 1661 "y.tab.c" /* yacc.c:1646  */
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
#line 1673 "y.tab.c" /* yacc.c:1646  */
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
#line 1686 "y.tab.c" /* yacc.c:1646  */
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
#line 1698 "y.tab.c" /* yacc.c:1646  */
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
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TP" << endl;
																											Node* tpNode = new Node(TP, "");
																											list.push_back(*tpNode);
																										}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TP" << endl;
																											Node* tpNode = new Node(TP, "");
																											list.push_back(*tpNode);
																										}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "compiler.y" /* yacc.c:1646  */
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
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "compiler.y" /* yacc.c:1646  */
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
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VR OFF" << endl;
																											Node* vrNode = new Node(OFF_VR, "");
																											list.push_back(*vrNode);
																										}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 143 "compiler.y" /* yacc.c:1646  */
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
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 165 "compiler.y" /* yacc.c:1646  */
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
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 182 "compiler.y" /* yacc.c:1646  */
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
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 211 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY ON" << endl;
																											Node* hyNode = new Node(HY, "");
																											Node* hyOnNode = new Node(ON, "");
																											list.push_back(*hyNode);
																											list.push_back(*hyOnNode);
																										}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 218 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY" << endl;
																											Node* hyOffNode = new Node(OFF_HY, "");
																											list.push_back(*hyOffNode);	
																										}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 223 "compiler.y" /* yacc.c:1646  */
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
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 235 "compiler.y" /* yacc.c:1646  */
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
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 249 "compiler.y" /* yacc.c:1646  */
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
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 273 "compiler.y" /* yacc.c:1646  */
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
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 299 "compiler.y" /* yacc.c:1646  */
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
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 320 "compiler.y" /* yacc.c:1646  */
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
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											list.push_back(*elNode);	
																										}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 342 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*elNode);	
																											list.push_back(*newline);
																										}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 349 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											list.push_back(*thNode);	
																										}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 354 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*thNode);	
																											list.push_back(*newline);
																										}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 361 "compiler.y" /* yacc.c:1646  */
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
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 372 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LABEL" << endl;
																											string s = (yyvsp[-1].tokens);
																											Node* labelNode = new Node(LABEL, s.substr(3));	
																											list.push_back(*labelNode);																										
																										}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 378 "compiler.y" /* yacc.c:1646  */
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
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 394 "compiler.y" /* yacc.c:1646  */
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
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 410 "compiler.y" /* yacc.c:1646  */
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
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 429 "compiler.y" /* yacc.c:1646  */
    {
																											Node* ofNode = new Node(OF, "");
																											list.push_back(*ofNode);
																										}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 437 "compiler.y" /* yacc.c:1646  */
    {
																											Node* pmNode = new Node(PM, "");
																											numberFct((yyvsp[0].tokens));
																											Node* pmsizeNode = new Node(NUMBER, number);
																											list.push_back(*pmNode);
																											list.push_back(*pmsizeNode);
																										}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 445 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH ON" << endl;
																											Node* rhNode = new Node(RH, "");
																											Node* rhonNode = new Node(ON, "");
																											list.push_back(*rhNode);
																											list.push_back(*rhonNode);
																										}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 452 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH OFF" << endl;
																											Node* rhoffNode = new Node(OFF_RH, "");
																											list.push_back(*rhoffNode);
																										}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 457 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH CANCEL" << endl;
																											Node* rhcancelNode = new Node(CANCEL, "");
																											list.push_back(*rhcancelNode);
																										}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 464 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Rh EXECUTE" << endl;
																											Node* rhexecuteNode = new Node(EXECUTE, "");
																											list.push_back(*rhexecuteNode);
																										}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 480 "compiler.y" /* yacc.c:1646  */
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
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 498 "compiler.y" /* yacc.c:1646  */
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
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 516 "compiler.y" /* yacc.c:1646  */
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
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 536 "compiler.y" /* yacc.c:1646  */
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
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 555 "compiler.y" /* yacc.c:1646  */
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
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 571 "compiler.y" /* yacc.c:1646  */
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
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 588 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IF" << endl;
																											Node* ifNode = new Node(IF, "");
																											list.push_back(*ifNode);
																										}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 594 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AN" << endl;
																											Node* andNode = new Node(AND, "");
																											list.push_back(*andNode);
																										}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 600 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "OR" << endl;
																											Node* orNode = new Node(OR, "");
																											list.push_back(*orNode);	
																										}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 606 "compiler.y" /* yacc.c:1646  */
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
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 621 "compiler.y" /* yacc.c:1646  */
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
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 635 "compiler.y" /* yacc.c:1646  */
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
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 652 "compiler.y" /* yacc.c:1646  */
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
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 668 "compiler.y" /* yacc.c:1646  */
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
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 680 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node* mathExSign = new Node(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node* numNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExSign);
																											list.push_back(*numNode);
																											list.push_back(*newlineNode);
																										}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 690 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRING" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);	
																										}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 696 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 704 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Number in a string" << endl;
																											Node* numNode = new Node(NUMBER, (yyvsp[0].tokens));
																											list.push_back(*numNode);
																										}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 709 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "off in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 714 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "ON in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 719 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "direction token in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 724 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Mathex in a string" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node* textNode = new Node(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(*textNode);
																										}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 730 "compiler.y" /* yacc.c:1646  */
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
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 742 "compiler.y" /* yacc.c:1646  */
    {
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 747 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "GOTO" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																											Node* gotoNode = new Node(GO, "");
																											Node* identifierNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*gotoNode);
																											list.push_back(*identifierNode);	
																										}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 755 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											numberFct((yyvsp[-1].tokens));
																											Node* spacenNode = new Node(NUMBER, number);

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 765 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, (yyvsp[-1].tokens));

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 774 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, "1");

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 783 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LL" << endl;
																											Node* llNode = new Node(LL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											llNode->addNode(sizeNode);
																											list.push_back(*llNode);
																										}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 791 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LL" << endl;
																											Node* llNode = new Node(LL, "");
																											list.push_back(*llNode);
																										}
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 797 "compiler.y" /* yacc.c:1646  */
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
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 807 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 815 "compiler.y" /* yacc.c:1646  */
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
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 828 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											
																											Node* sizeNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 836 "compiler.y" /* yacc.c:1646  */
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
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 846 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											Node* sizeNode = new Node(NUMBER, (yyvsp[-2].tokens));
																											Node* ident = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																											list.push_back(*ident);
																										}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 855 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											Node* sizeNode = new Node(NUMBER, "0");
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 862 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*irNode);
																											list.push_back(*sizeNode);
																										}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 870 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											list.push_back(*irNode);
																										}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 876 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-1].tokens));
																											paNode->addNode(identNode);
																											list.push_back(*paNode);
																										}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 883 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											list.push_back(*paNode);																											
																										}
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 892 "compiler.y" /* yacc.c:1646  */
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
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 903 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SK" << endl;
																											Node* sknode = new Node(SK, "");
																											numberFct((yyvsp[-1].tokens));
																											Node* skNumberNode = new Node(NUMBER, number);
																											list.push_back(*sknode);
																											list.push_back(*skNumberNode);
																										}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 911 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 916 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 921 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE ON" << endl;
																											Node* us = new Node(US, "");
																											Node* onNode = new Node(ON, "");
																											list.push_back(*us);		
																											list.push_back(*onNode);																					
																										}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 928 "compiler.y" /* yacc.c:1646  */
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
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 938 "compiler.y" /* yacc.c:1646  */
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
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 948 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE OFF" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											list.push_back(*offUsNode);	
																										}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 953 "compiler.y" /* yacc.c:1646  */
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
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 966 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-5].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-4].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += (yyvsp[-3].tokens); 
																											st += " "; 
																											st += (yyvsp[-2].tokens);
																											st += " "; 
																											st += (yyvsp[-1].tokens);
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 985 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-6].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-5].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += (yyvsp[-4].tokens); 
																											st += " "; 
																											st += (yyvsp[-3].tokens);
																											st += " "; 
																											st += (yyvsp[-2].tokens);
																											st += " "; 
																											st += (yyvsp[-1].tokens);
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1006 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-8].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-7].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += (yyvsp[-6].tokens); 
																											st += " "; 
																											st += (yyvsp[-5].tokens);
																											st += " "; 
																											st += (yyvsp[-4].tokens);
																											st += " "; 
																											st += (yyvsp[-3].tokens);
																											st += " "; 
																											st += (yyvsp[-2].tokens);
																											st += " "; 
																											st += (yyvsp[-1].tokens);
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1031 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-10].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-9].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += (yyvsp[-8].tokens); 
																											st += " "; 
																											st += (yyvsp[-7].tokens);
																											st += " "; 
																											st += (yyvsp[-6].tokens);
																											st += " "; 
																											st += (yyvsp[-5].tokens);
																											st += " "; 
																											st += (yyvsp[-4].tokens);
																											st += " "; 
																											st += (yyvsp[-3].tokens);
																											st += " "; 
																											st += (yyvsp[-2].tokens);
																											st += " "; 
																											st += (yyvsp[-1].tokens); 
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1060 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-4].tokens));
																											Node* equalNode = new Node(CHARACTER, (yyvsp[-3].tokens));
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += (yyvsp[-2].tokens); 
																											st += (yyvsp[-1].tokens);
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1076 "compiler.y" /* yacc.c:1646  */
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
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1095 "compiler.y" /* yacc.c:1646  */
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
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1109 "compiler.y" /* yacc.c:1646  */
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
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1123 "compiler.y" /* yacc.c:1646  */
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
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1137 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, (yyvsp[-2].tokens));
																											Node* equalNode  = new Node(CHARACTER, (yyvsp[-1].tokens));
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											
																										}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1147 "compiler.y" /* yacc.c:1646  */
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
#line 3201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1161 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ON" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceOnNode = new Node(ON, "");
																											list.push_back(*ceNode);
																											list.push_back(*ceOnNode);
																										}
#line 3213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1168 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE VAR" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceVarNode = new Node(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																											Node* varNameNode = new Node(NAME, name);
																											ceVarNode->addNode(varNameNode);
																											ceNode->addNode(ceVarNode);
																											list.push_back(*ceNode);
																										}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1178 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ident" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode = new Node(IDENTIFIER, (yyvsp[0].tokens));
																											ceNode->addNode(ceIdentNode);
																											list.push_back(*ceNode);
																										}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1185 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE OFF" << endl;
																											Node* ceOffNode = new Node(OFF_CE, "");
																											list.push_back(*ceOffNode);
																										}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1190 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE IDENT IDENT IDENT" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode1 = new Node(IDENTIFIER, (yyvsp[-2].tokens));
																											Node* ceIdentNode2 = new Node(IDENTIFIER, (yyvsp[-1].tokens));
																											Node* ceIdentNode3 = new Node(IDENTIFIER, (yyvsp[0].tokens));
																											ceNode->addNode(ceIdentNode1);																											
																											ceNode->addNode(ceIdentNode2);																											
																											ceNode->addNode(ceIdentNode3);																											
																											list.push_back(*ceNode);																											
																										}
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1201 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE IDENT IDENT IDENT IDENT IDENT" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode1 = new Node(IDENTIFIER, (yyvsp[-4].tokens));
																											Node* ceIdentNode2 = new Node(IDENTIFIER, (yyvsp[-3].tokens));
																											Node* ceIdentNode3 = new Node(IDENTIFIER, (yyvsp[-2].tokens));
																											Node* ceIdentNode4 = new Node(IDENTIFIER, (yyvsp[-1].tokens));
																											Node* ceIdentNode5 = new Node(IDENTIFIER, (yyvsp[0].tokens));
																											ceNode->addNode(ceIdentNode1);																											
																											ceNode->addNode(ceIdentNode2);																											
																											ceNode->addNode(ceIdentNode3);																											
																											ceNode->addNode(ceIdentNode4);																											
																											ceNode->addNode(ceIdentNode5);																											
																											list.push_back(*ceNode);																											
																										}
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1217 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU" << endl;
																											Node* suNode = new Node(SU, "");
																											Node* suOnNode = new Node(ON, "");
																											list.push_back(*suNode);
																											list.push_back(*suOnNode);
																										}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1224 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU OFF" << endl;
																											Node* suOffNode = new Node(OFF_SU, "");
																											list.push_back(*suOffNode);
																										}
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1231 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM" << endl;
																											Node* dmNode = new Node(DM, "");
																											Node* dmIdentNode = new Node(IDENTIFIER, "");
																											Node* dmOnNode = new Node(ON, "");
																											list.push_back(*dmNode);
																											list.push_back(*dmIdentNode);
																											list.push_back(*dmOnNode);
																										}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1240 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM OFF" << endl;
																											Node* dmOffNode = new Node(OFF_DM, "");
																											list.push_back(*dmOffNode);
																										}
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1246 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP ON" << endl;
																											Node* kpNode = new Node(KP, "");
																											Node* kponNode = new Node(ON, "");
																											list.push_back(*kpNode);
																											list.push_back(*kponNode);
																										}
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1253 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP NUM" << endl;
																											Node* kpNode = new Node(KP, "");
																											Node* kpNumber = new Node(NUMBER, (yyvsp[0].tokens));
																											kpNode->addNode(kpNumber);
																											list.push_back(*kpNode);
																										}
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1260 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP OFF" << endl;
																											Node* kpoffNode = new Node(OFF_KP, "");
																											list.push_back(*kpoffNode);
			;																							}
#line 3366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1265 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node* ctNode = new Node(CT, "");
																											list.push_back(*ctNode);
																											
																										}
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1278 "compiler.y" /* yacc.c:1646  */
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
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1313 "compiler.y" /* yacc.c:1646  */
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
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1333 "compiler.y" /* yacc.c:1646  */
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
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1351 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[0].tokens));
																											Node* tpSizeNode = new Node(NUMBER, size);
																											list.push_back(*tpSizeNode);
																										}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1356 "compiler.y" /* yacc.c:1646  */
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
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1375 "compiler.y" /* yacc.c:1646  */
    {
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1380 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node* area = new Node(AREA, "");
																											Node* areaIdent = new Node(NAME, (yyvsp[-2].tokens));
																											Node* areaOn = new Node(ON, "");
																											list.push_back(*area);
																											list.push_back(*areaIdent);
																											list.push_back(*areaOn);
																										}
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1389 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node* areaOff = new Node(OFF_AREA, "");
																											list.push_back(*areaOff);
																										}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1394 "compiler.y" /* yacc.c:1646  */
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
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1412 "compiler.y" /* yacc.c:1646  */
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
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1430 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node* variable = new Node (STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node* variableName = new Node(NAME, var);

																											list.push_back(*variable);
																											list.push_back(*variableName);
																										}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1443 "compiler.y" /* yacc.c:1646  */
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
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1461 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;				
																											Node* foNode = new Node(FO, "");
																											Node* onNode = new Node(ON, "");
																											
																											foNode->addNode(onNode);
																											list.push_back(*foNode);
																										}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1469 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO OFF" << endl;				
																											Node* offNode = new Node(OFF_FO, "");																											
																											list.push_back(*offNode);
																										}
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1475 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TI" << endl;
																											Node* tiNode = new Node(TI, "");
																											Node* charNode = new Node(CHARACTER, (yyvsp[-2].tokens));
																										    Node* numNode = new Node(NUMBER, (yyvsp[-1].tokens));
																											
																											list.push_back(*tiNode);
																											list.push_back(*charNode);
																											list.push_back(*numNode);
																										}
#line 3652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1486 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NV" << endl;
																										}
#line 3660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1490 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BR_UP" << endl;
																										}
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1494 "compiler.y" /* yacc.c:1646  */
    {
																											strcpy((yyval.tokens), (yyvsp[-1].tokens)); 
																											cout << "BR" << endl;
																											Node* linebreak = new Node(LINEBREAK, ""); 
																											list.push_back(*linebreak); 
																										}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1501 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NY" << endl;
																										}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1505 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ENY" << endl;
																										}
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1509 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																										}
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1513 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																										}
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1518 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX OFF" << endl;
																											Node* boxOff = new Node(OFF_BOX, "");
																											list.push_back(*boxOff);	
																										}
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1523 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											
																											Node* boxRule = new Node(RULE, (yyvsp[-1].tokens));
																											
																											box->addNode(boxRule);
																											
																											list.push_back(*box);
																										}
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1533 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-1].tokens))	;

																											box->addNode(boxRule);
																											box->addNode(boxRule1);

																											list.push_back(*box);
																										}
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1545 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-1].tokens));

																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);

																											list.push_back(*box);
																										}
#line 3774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1560 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											
																											Node* boxRule = new Node(RULE, (yyvsp[-4].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule3 = new Node(RULE, (yyvsp[-1].tokens));

																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);
																											box->addNode(boxRule3);

																											list.push_back(*box);
																										}
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1577 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-5].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-4].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule3 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule4 = new Node(RULE, (yyvsp[-1].tokens));

																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);
																											box->addNode(boxRule3);
																											box->addNode(boxRule4);

																											list.push_back(*box);
																										}
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1596 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-6].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-5].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-4].tokens));
																											Node* boxRule3 = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule4 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule5 = new Node(RULE, (yyvsp[-1].tokens));
																											
																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);
																											box->addNode(boxRule3);
																											box->addNode(boxRule4);
																											box->addNode(boxRule5);
																											
																											list.push_back(*box);
																										}
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1616 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-7].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-6].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-5].tokens));
																											Node* boxRule3 = new Node(RULE, (yyvsp[-4].tokens));
																											Node* boxRule4 = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule5 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule6 = new Node(RULE, (yyvsp[-1].tokens));
																											
																											
																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);
																											box->addNode(boxRule3);
																											box->addNode(boxRule4);
																											box->addNode(boxRule5);
																											box->addNode(boxRule6);																											
																											
																											list.push_back(*box);
																										}
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1639 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* boxRule = new Node(RULE, (yyvsp[-8].tokens));
																											Node* boxRule1 = new Node(RULE, (yyvsp[-7].tokens));
																											Node* boxRule2 = new Node(RULE, (yyvsp[-6].tokens));
																											Node* boxRule3 = new Node(RULE, (yyvsp[-5].tokens));
																											Node* boxRule4 = new Node(RULE, (yyvsp[-4].tokens));
																											Node* boxRule5 = new Node(RULE, (yyvsp[-3].tokens));
																											Node* boxRule6 = new Node(RULE, (yyvsp[-2].tokens));
																											Node* boxRule7 = new Node(RULE, (yyvsp[-1].tokens));

																											box->addNode(boxRule);
																											box->addNode(boxRule1);
																											box->addNode(boxRule2);
																											box->addNode(boxRule3);
																											box->addNode(boxRule4);
																											box->addNode(boxRule5);
																											box->addNode(boxRule6);
																											box->addNode(boxRule7);
																											
																											list.push_back(*box);
																										}
#line 3900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1664 "compiler.y" /* yacc.c:1646  */
    {
																											// cout<<"in box keyword"<<endl;
																											// Node* keyword = new Node(RULE, $1);
																											//list.push_back(*keyword);
																										}
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1669 "compiler.y" /* yacc.c:1646  */
    {
																											// cout<<"in box direction"<<endl;
																											// Node* dirNode;

																											// if(strcmp($1, "left") == 0)
																											// {
																											// 	dirNode = new Node(LEFT, "");
																											// }
																											// else
																											// {
																											// 	dirNode = new Node(RIGHT, "");
																											// }
																											// //list.push_back(*dirNode);
																										}
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1683 "compiler.y" /* yacc.c:1646  */
    {
																											// numberFct($1);
																											// Node* sizeNode = new Node(NUMBER, number);
																											//list.push_back(*sizeNode);
																										}
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3943 "y.tab.c" /* yacc.c:1646  */
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
#line 2196 "compiler.y" /* yacc.c:1906  */


void yyerror(char *msg){
	extern int yylineno;
	fprintf(stderr, "%s in line %d\n", msg, yylineno);
	exit(1);
}







int main(){
	list.push_back(docNode);

	cout<< endl << endl <<"*******************YYPARSE*********************"<<endl;
	yyparse();

	//cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	//printList(list);

	//cout<< endl << endl <<"*******************TREEBUILDING*********************"<<endl;
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
