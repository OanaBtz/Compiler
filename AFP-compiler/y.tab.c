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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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

#line 290 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

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
      91,    99,   104,   116,   121,   139,   168,   175,   180,   192,
     206,   230,   254,   259,   266,   271,   278,   289,   295,   311,
     327,   330,   331,   332,   334,   342,   349,   354,   360,   367,
     368,   369,   370,   371,   372,   374,   375,   377,   395,   413,
     429,   446,   452,   458,   464,   479,   493,   510,   526,   538,
     548,   554,   562,   567,   568,   573,   581,   591,   600,   609,
     617,   618,   628,   636,   643,   651,   652,   659,   660,   661,
     662,   663,   674,   682,   687,   694,   704,   714,   719,   732,
     751,   765,   779,   789,   803,   810,   820,   826,   833,   839,
     848,   854,   861,   866,   875,   883,   884,   886,   887,   889,
     924,   944,   962,   967,   985,   986,   991,  1000,  1005,  1023,
    1041,  1051,  1052,  1054,  1072,  1081,  1092,  1096,  1100,  1107,
    1111,  1115,  1119,  1124,  1154,  1186,  1221,  1254,  1262,  1281,
    1303,  1308,  1329
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
      90,   -37,   -22,     8,     1,   -67,   -67,   -67,    11,   -67,
      38,   -67,   -67,    12,    86,    91,   120,   128,    87,   117,
     110,   -67,   -67,    24,   127,   131,    37,   119,   121,    37,
      37,   107,   -67,   -67,   -67,   -67,   -67,    31,   130,   134,
     135,   122,   136,   124,   125,   151,   129,   137,   139,    58,
      59,    69,    49,   -48,   138,    66,   -67,    57,   123,   -67,
     144,   132,    63,   140,    62,   141,    42,   -67,   142,   -67,
     145,   -67,   -67,   -67,   -67,   126,    77,   -67,   143,   146,
     147,   148,   149,   -67,    51,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   150,   152,   -67,   153,
     -67,   154,   155,   156,   157,    93,    94,   -67,   194,   158,
     -67,   159,   160,    73,   145,   161,   -67,   -67,   162,   163,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   164,   165,
     -67,   182,   -67,   -67,   166,   -67,   -67,   171,   167,   168,
     169,   187,   172,   184,    79,    95,   174,   175,   -67,   176,
     177,   178,   -67,   179,   180,   -67,   -67,   111,   188,   101,
     112,   183,   -67,   -67,   -67,   199,   185,   -67,   -67,   -67,
     189,   186,   190,   -67,    73,   115,   -67,   -67,   -67,    77,
     -67,   -67,   -67,   -67,   -67,   -67,    51,    97,   -67,   -67,
     -67,   -67,   -67,   191,   198,    70,   192,   193,   200,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,    30,   196,   195,
     -67,   -67,   -67,   197,   -67,   203,    96,   -67,    48,   201,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   202,   204,   205,
     -67,   -67,   206,   207,   -67,   -67,   -67,   208,   -67,   -67,
     108,   209,   210,   211,   -67,   -67,   214,   222,   212,   -67,
     -67,   213,   221,   215,   216,   -66,    -3,   126,   217,   -67,
     -67,   229,   225,   220,   223,   232,   224,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,    29,
     233,   236,   -67,   -67,   231,   -67,   -67,   -67,   -67,   -67,
     238,   228,   -67,   -67,   240,   -67,   -67,   -67,   -67,    85,
     230,   241,   239,   235,   -67,   242,   -67,   -67,   237,   -67,
     247,   243,   -67,   249,   -67,   244,   -67,   250,   -67,   251,
     252,   256,   246,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   152,     0,     0,    52,    51,    53,     0,   151,
       0,     1,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,    42,    44,     0,
       0,     0,    61,    62,    63,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   132,    48,    80,    81,    82,    31,
       0,     0,     0,     0,     0,     0,     0,     3,    19,    17,
      14,    16,    15,    12,    13,    22,    24,    11,     0,     0,
       0,    20,    18,     2,   141,     4,     5,     6,     7,     8,
       9,    10,    21,    23,   142,    54,     0,     0,    25,     0,
      28,     0,     0,     0,     0,     0,     0,    91,     0,     0,
      93,     0,     0,     0,     0,     0,    43,    45,     0,     0,
     124,   123,    57,    58,    55,    56,   121,   122,     0,     0,
      47,     0,   148,   147,     0,   149,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,   105,   133,     0,     0,    49,   140,     0,     0,     0,
       0,     0,   117,   118,   120,     0,     0,   114,   116,   115,
       0,     0,     0,    90,     0,     0,    81,    82,    84,    83,
      98,    99,   100,    97,    95,   135,   134,     0,    26,    27,
      29,    36,    37,     0,     0,     0,     0,     0,     0,    92,
      96,    94,    71,    73,    72,    89,    85,     0,     0,     0,
     144,   143,   137,     0,   160,     0,     0,   157,     0,     0,
      86,    87,   104,   107,   106,   138,    50,     0,     0,     0,
      69,    70,     0,     0,    30,   119,   102,     0,    33,    32,
       0,     0,     0,     0,   131,    41,     0,     0,     0,    40,
      38,     0,     0,     0,     0,     0,     0,   112,     0,   145,
     136,     0,     0,     0,     0,     0,     0,   158,   153,    76,
      74,   139,    77,    75,   101,    67,    68,    78,    79,     0,
       0,     0,    39,    46,     0,   108,   113,   110,   111,   146,
       0,     0,   154,   159,     0,   156,   126,   125,   130,     0,
       0,     0,     0,     0,   155,     0,   128,   127,     0,    34,
       0,     0,   161,     0,   129,     0,   109,     0,    35,     0,
       0,     0,     0,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   260,   -67,    -4,   262,   133,   -67,   -67,   -67,
       5,   263,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     295,   304,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     311,   -67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    68,   159,   114,    71,    72,    73,    74,
      75,   179,    77,    78,    79,    80,    81,    82,   299,   308,
       6,   186,    85,    86,    87,    88,    89,    90,    91,    92,
       7,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      69,    11,   287,   149,   150,    12,    13,    14,    15,    16,
     157,    17,    18,    19,    20,   151,    21,    22,    23,    24,
       8,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   252,    37,    38,    39,    40,   296,    41,
      42,     1,    43,    44,    45,    46,     9,    47,     2,    48,
       3,    49,    21,    22,    50,    51,    52,    53,    54,    55,
      56,    12,    57,   122,    58,   288,    59,    10,   123,    97,
      60,    61,    62,   160,    63,    64,    65,    12,    66,    95,
      98,   109,   124,   125,    32,    33,    34,    35,    36,   253,
     254,   255,   110,   256,   171,    96,   297,   298,   113,   172,
      32,    33,    34,    35,    36,   264,   146,   265,    54,   138,
     266,   140,   147,   167,   168,   164,   267,   148,   141,   185,
     139,   142,   165,   169,   153,   156,   143,   154,   144,   247,
       1,   145,   248,   157,   155,   158,    56,     2,   176,     3,
     177,   216,   306,    99,   104,   178,   105,   217,   307,   106,
     194,   196,   218,   262,   100,   195,   197,   219,   263,   115,
     230,   243,   118,   119,   231,   244,   120,   275,   121,   108,
     240,   276,   227,   232,   228,   233,   241,   101,   242,   102,
     103,   126,   127,   162,   163,   107,   111,   116,   112,   117,
     130,   128,   132,   133,   129,   131,   134,   135,   137,   160,
     152,   161,   175,   166,   170,   136,   174,   187,   198,   207,
     173,   180,   257,     0,   181,   182,   183,   184,     0,   193,
     188,   189,   190,   191,   192,   208,   199,   200,   201,   202,
     203,   204,   205,   206,   209,   210,   211,   212,   213,     0,
     214,   215,   220,   221,   222,   223,   224,   225,   226,   229,
     235,   234,   237,   236,   238,   246,   258,   251,   239,   245,
     249,   250,   261,   259,    67,   260,    70,    76,   279,   268,
     269,   280,   270,   271,   272,   273,   274,   277,   278,   281,
     282,   283,   284,   285,   286,   289,   290,   291,   292,   294,
     300,   293,   295,   301,   302,   303,   304,   305,   309,    83,
     310,   313,   311,   312,   315,   314,   317,   319,    84,   321,
     320,   316,   318,   322,   323,    93
};

static const yytype_int16 yycheck[] =
{
       4,     0,    68,    51,    52,     4,     5,     6,     7,     8,
      76,    10,    11,    12,    13,    63,    15,    16,    17,    18,
      57,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     3,    33,    34,    35,    36,     9,    38,
      39,    40,    41,    42,    43,    44,    68,    46,    47,    48,
      49,    50,    15,    16,    53,    54,    55,    56,    57,    58,
      59,     4,    61,    32,    63,    68,    65,    59,    37,    57,
      69,    70,    71,    76,    73,    74,    75,     4,    77,    68,
      68,    57,    51,    52,    27,    28,    29,    30,    31,    59,
      60,    61,    68,    63,    52,    57,    67,    68,    61,    57,
      27,    28,    29,    30,    31,    57,    57,    59,    57,    51,
      62,    52,    63,    51,    52,    52,    68,    68,    59,    68,
      62,    52,    59,    61,    58,    68,    57,    61,    59,    59,
      40,    62,    62,    76,    68,    78,    59,    47,    61,    49,
      63,    62,    57,    57,    57,    68,    59,    68,    63,    62,
      57,    57,    57,    57,    63,    62,    62,    62,    62,    26,
      59,    64,    29,    30,    63,    68,    59,    59,    61,    59,
     174,    63,    61,    61,    63,    63,    61,    57,    63,    51,
      52,    51,    52,    51,    52,    68,    59,    68,    57,    68,
      68,    57,    68,    68,    59,    59,    45,    68,    59,    76,
      62,    57,    76,    63,    63,    68,    61,    57,    14,    27,
      68,    68,   207,    -1,    68,    68,    68,    68,    -1,    62,
      68,    68,    68,    68,    68,    59,    68,    68,    68,    68,
      68,    68,    68,    68,    63,    68,    68,    68,    51,    -1,
      68,    57,    68,    68,    68,    68,    68,    68,    68,    61,
      51,    68,    63,    68,    68,    57,    60,    57,    68,    68,
      68,    68,    59,    68,     4,    68,     4,     4,    57,    68,
      68,    57,    68,    68,    68,    68,    68,    68,    68,    57,
      68,    68,    61,    68,    68,    68,    57,    62,    68,    57,
      57,    68,    68,    57,    63,    57,    68,    57,    68,     4,
      59,    59,    63,    68,    57,    68,    57,    57,     4,    57,
      59,    68,    68,    57,    68,     4
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    47,    49,    80,    81,    99,   109,    57,    68,
      59,     0,     4,     5,     6,     7,     8,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    34,    35,
      36,    38,    39,    41,    42,    43,    44,    46,    48,    50,
      53,    54,    55,    56,    57,    58,    59,    61,    63,    65,
      69,    70,    71,    73,    74,    75,    77,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    68,    57,    57,    68,    57,
      63,    57,    51,    52,    57,    59,    62,    68,    59,    57,
      68,    59,    57,    61,    84,    85,    68,    68,    85,    85,
      59,    61,    32,    37,    51,    52,    51,    52,    57,    59,
      68,    59,    68,    68,    45,    68,    68,    59,    51,    62,
      52,    59,    52,    57,    59,    62,    57,    63,    68,    51,
      52,    63,    62,    58,    61,    68,    68,    76,    78,    83,
      76,    57,    51,    52,    52,    59,    63,    51,    52,    61,
      63,    52,    57,    68,    61,    76,    61,    63,    68,    90,
      68,    68,    68,    68,    68,    68,   100,    57,    68,    68,
      68,    68,    68,    62,    57,    62,    57,    62,    14,    68,
      68,    68,    68,    68,    68,    68,    68,    27,    59,    63,
      68,    68,    68,    51,    68,    57,    62,    68,    57,    62,
      68,    68,    68,    68,    68,    68,    68,    61,    63,    61,
      59,    63,    61,    63,    68,    51,    68,    63,    68,    68,
      83,    61,    63,    64,    68,    68,    57,    59,    62,    68,
      68,    57,     3,    59,    60,    61,    63,    89,    60,    68,
      68,    59,    57,    62,    57,    59,    62,    68,    68,    68,
      68,    68,    68,    68,    68,    59,    63,    68,    68,    57,
      57,    57,    68,    68,    61,    68,    68,    68,    68,    68,
      57,    62,    68,    68,    57,    68,     9,    67,    68,    97,
      57,    57,    63,    57,    68,    57,    57,    63,    98,    68,
      59,    63,    68,    59,    68,    57,    68,    57,    68,    57,
      59,    57,    57,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    85,
      85,    86,    87,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   104,   105,   106,   107,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     4,     4,     3,     4,
       4,     2,     4,     4,     8,    10,     4,     4,     5,     6,
       5,     5,     2,     3,     2,     3,     6,     3,     2,     3,
       4,     1,     1,     1,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     2,     2,     3,     3,     3,     2,     3,
       2,     2,     3,     2,     3,     2,     3,     2,     2,     2,
       2,     4,     3,     1,     3,     2,     3,     3,     5,     8,
       5,     5,     4,     5,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     9,
       7,     5,     1,     2,     2,     2,     4,     3,     3,     4,
       2,     1,     1,     3,     3,     4,     5,     2,     2,     2,
       2,     2,     1,     4,     5,     6,     5,     3,     4,     5,
       3,     7,    13
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
																											Node ofNode(OF, "");
																											list.push_back(ofNode);
																										}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 62 "compiler.y" /* yacc.c:1646  */
    {
																											Node ofNode(OF, "");
																											numberFct((yyvsp[-1].tokens));
																											Node ofSizeNode(NUMBER, number);
																											list.push_back(ofNode);
																											list.push_back(ofSizeNode);
																										}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "compiler.y" /* yacc.c:1646  */
    {
																											Node clNode(CL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node clnumNode(NUMBER, number);
																											list.push_back(clNode);
																											list.push_back(clnumNode);
																										}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 76 "compiler.y" /* yacc.c:1646  */
    {
																											Node cdNode(CD, "");
																											Node cdValueNode(VALUE, "");
																											Node cdnumNode(NUMBER, (yyvsp[0].tokens));
																											list.push_back(cdNode);
																											list.push_back(cdValueNode);
																											list.push_back(cdnumNode);	
																										}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "compiler.y" /* yacc.c:1646  */
    {
																											Node tmNode(TM, "");
																											numberFct((yyvsp[-1].tokens));
																											Node tmsizeNode(NUMBER, number);
																											list.push_back(tmNode);
																											list.push_back(tmsizeNode);
																										}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 91 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BM" << endl;
																											Node bmNode(BM, "");
																											numberFct((yyvsp[-1].tokens));
																											Node bmsizeNode(NUMBER, number);
																											list.push_back(bmNode);
																											list.push_back(bmsizeNode);
																										}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TP" << endl;
																											Node tpNode(TP, "");
																											list.push_back(tpNode);
																										}
#line 1687 "y.tab.c" /* yacc.c:1646  */
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
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VR OFF" << endl;
																											Node* vrNode = new Node(OFF_VR, "");
																											list.push_back(*vrNode);
																										}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node hyNode(HR, "");
																											Node hyStrNode(STRINGLITERAL, (yyvsp[-5].tokens));
																											Node hyS1Node(NUMBER, (yyvsp[-4].tokens));
																											Node hyS2Node(NUMBER, (yyvsp[-3].tokens));
																											Node hyS3Node(NUMBER, (yyvsp[-2].tokens));
																											Node hyS4Node(NUMBER, (yyvsp[-1].tokens));
																											list.push_back(hyNode);
																											list.push_back(hyStrNode);
																											list.push_back(hyS1Node);
																											list.push_back(hyS2Node);
																											list.push_back(hyS3Node);
																											list.push_back(hyS4Node);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node hyNode(HR, "");
																											Node hyStrNode(STRINGLITERAL, (yyvsp[-7].tokens));
																											Node* dirNode;
																											
																											if(strcmp((yyvsp[-6].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											Node hyS1Node(NUMBER, (yyvsp[-6].tokens));
																											Node hyS2Node(NUMBER, (yyvsp[-5].tokens));
																											Node hyS3Node(STRINGLITERAL, (yyvsp[-4].tokens));
																											Node hyS4Node(NUMBER, (yyvsp[-3].tokens));
																											list.push_back(hyNode);
																											list.push_back(hyStrNode);
																											list.push_back(*dirNode);
																											list.push_back(hyS1Node);
																											list.push_back(hyS2Node);
																											list.push_back(hyS3Node);
																											list.push_back(hyS4Node);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY ON" << endl;
																											Node hyNode(HY, "");
																											Node hyOnNode(ON, "");
																											list.push_back(hyNode);
																											list.push_back(hyOnNode);
																										}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 175 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY" << endl;
																											Node hyOffNode(OFF_HY, "");
																											list.push_back(hyOffNode);	
																										}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");
																											Node lNode(LEFT, "");
																											Node rNode(RIGHT, "");
																											list.push_back(hrNode);
																											list.push_back(lNode);
																											list.push_back(rNode);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");
																											Node ruleNode(RULE, (yyvsp[-4].tokens));
																											Node lNode(LEFT, "");
																											Node rNode(RIGHT, "");
																											hrNode.addNode(&ruleNode);
																											list.push_back(hrNode);
																											list.push_back(lNode);
																											list.push_back(rNode);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 206 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");
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
																											Node sizeNode(NUMBER, number);

																											list.push_back(hrNode);
																											list.push_back(*dirNode);
																											list.push_back(sizeNode);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 230 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");
																											
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											
																											Node* dirNode;
																											if(strcmp((yyvsp[-3].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											list.push_back(hrNode);
																											list.push_back(sizeNode);
																											list.push_back(*dirNode);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 254 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node elNode(ELSE, "");
																											list.push_back(elNode);	
																										}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 259 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node elNode(ELSE, "");
																											Node newline(NEWLINE, "");
																											list.push_back(elNode);	
																											list.push_back(newline);
																										}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 266 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											list.push_back(thNode);	
																										}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 271 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											Node newline(NEWLINE, "");
																											list.push_back(thNode);	
																											list.push_back(newline);
																										}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 278 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DR" << endl;
																											Node drNode(DR, "");
																											Node drStrNode(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node drWeightNode(WEIGHT, "");
																											Node drSizeNode(NUMBER, (yyvsp[-1].tokens));
																											list.push_back(drNode);
																											list.push_back(drStrNode);
																											list.push_back(drWeightNode);
																											list.push_back(drSizeNode);
																										}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 289 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LABEL" << endl;
																											string s = (yyvsp[-1].tokens);
																											Node labelStrNode(STRINGLITERAL, s.substr(3));
																											Node labelNode(LABEL, s.substr(3));																											
																										}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											Node font(FONT, "");
																											styleName((yyvsp[0].tokens));
																											styleSize((yyvsp[0].tokens));
																											Node fontName(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(font);
																												list.push_back(fontName);
																												// printf("%s\n", size);
																												Node fontSize(NUMBER, size);
																												list.push_back(fontSize);
																											}
																										}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 311 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											Node font(FONT, "");
																											styleName((yyvsp[-1].tokens));
																											styleSize((yyvsp[-1].tokens));
																											Node fontName(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(font);
																												list.push_back(fontName);
																												// printf("%s\n", size);
																												Node fontSize(NUMBER, size);
																												list.push_back(fontSize);
																											}
																										}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 327 "compiler.y" /* yacc.c:1646  */
    {

																										}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 334 "compiler.y" /* yacc.c:1646  */
    {
																											Node pmNode(PM, "");
																											numberFct((yyvsp[0].tokens));
																											Node pmsizeNode(NUMBER, number);
																											list.push_back(pmNode);
																											list.push_back(pmsizeNode);
																										}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 342 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH ON" << endl;
																											Node rhNode(RH, "");
																											Node rhonNode(ON, "");
																											list.push_back(rhNode);
																											list.push_back(rhonNode);
																										}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 349 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH OFF" << endl;
																											Node rhoffNode(OFF_RH, "");
																											list.push_back(rhoffNode);
																										}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 354 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH CANCEL" << endl;
																											Node rhcancelNode(CANCEL, "");
																											list.push_back(rhcancelNode);
																										}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 361 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Rh EXECUTE" << endl;
																											Node rhexecuteNode(EXECUTE, "");
																											list.push_back(rhexecuteNode);
																										}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 377 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node ruleNode(RULE, (yyvsp[-3].tokens));
																											Node varNode(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, (yyvsp[-1].tokens));
																											Node valueNode(VALUE, "");
																											Node stringLiteralNode(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(comparisonNode);
																											list.push_back(ruleNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 395 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node ruleNode(RULE, (yyvsp[-3].tokens));
																											Node varNode(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, (yyvsp[-1].tokens));
																											Node valueNode(VALUE, "");
																											Node numNode(NUMBER, (yyvsp[0].tokens));
																											list.push_back(comparisonNode);
																											list.push_back(ruleNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(numNode);
																										}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 413 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node varNode(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, (yyvsp[-1].tokens));
																											Node valueNode(VALUE, "");
																											Node stringLiteralNode(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(comparisonNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 429 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node varNode(STRINGVARIABLE, "");
																											varName((yyvsp[-2].tokens));
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, (yyvsp[-1].tokens));
																											Node valueNode(VALUE, "");
																											Node numNode(NUMBER, (yyvsp[0].tokens));
																											list.push_back(comparisonNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(numNode);
																										}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 446 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IF" << endl;
																											Node ifNode(IF, "");
																											list.push_back(ifNode);
																										}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 452 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AN" << endl;
																											Node andNode(AND, "");
																											list.push_back(andNode);
																										}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 458 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "OR" << endl;
																											Node orNode(OR, "");
																											list.push_back(orNode);	
																										}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 464 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node mathex_node(MATHEX, "");
																											Node varNode(STRINGVARIABLE, "");
																											Node varNameNode(NAME, (yyvsp[-3].tokens));
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node numberNode(NUMBER, number);
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathex_node);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(mathExSign);
																											list.push_back(numberNode);
																											list.push_back(newlineNode);
																										}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 479 "compiler.y" /* yacc.c:1646  */
    {
																											cout<< "MATHEX" << endl;
																											Node mathex_node(MATHEX, "");
																											Node numNode(NUMBER, (yyvsp[-3].tokens));
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node numNode2(NUMBER, (yyvsp[-1].tokens));
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathex_node);
																											list.push_back(numNode);
																											list.push_back(mathExSign);
																											list.push_back(numNode2);
																											list.push_back(newlineNode);

																										}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 493 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node mathex_node(MATHEX, "");
																											Node varNode(STRINGVARIABLE, "");
																											Node varNameNode(NAME, (yyvsp[-3].tokens));
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node varNode2(STRINGVARIABLE, "");
																											Node varNameNode2(NAME, (yyvsp[-1].tokens));
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathex_node);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(mathExSign);
																											list.push_back(varNode2);
																											list.push_back(varNameNode2);
																											list.push_back(newlineNode);
																										}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 510 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX" << endl;
																											Node mathExNode(MATHEX, "");
																											Node varNode(STRINGVARIABLE, "");
																											Node varNameNode(NAME, (yyvsp[-1].tokens));
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											numberFct((yyvsp[-3].tokens));
																											Node numberNode(NUMBER, number);
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathExNode);
																											list.push_back(numberNode);
																											list.push_back(mathExSign);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(newlineNode);
																										}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 526 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node varNode(STRINGVARIABLE, "");
																											Node varNameNode(NAME, (yyvsp[-1].tokens));
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathExSign);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(newlineNode);
																											
																										}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 538 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node numNode(NUMBER, (yyvsp[-1].tokens));
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathExSign);
																											list.push_back(numNode);
																											list.push_back(newlineNode);
																										}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 548 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRING" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node textNode(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(textNode);	
																										}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 554 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRVAR" << endl;
																											Node variable(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																							    			Node varName0(NAME, var);
																											list.push_back(variable);
																											list.push_back(varName0);
																										}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 562 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Number in a string" << endl;
																											Node numNode(NUMBER, (yyvsp[0].tokens));
																											list.push_back(numNode);
																										}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 568 "compiler.y" /* yacc.c:1646  */
    {
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 573 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "GOTO" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																											Node gotoNode(GO, "");
																											Node identifierNode(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(gotoNode);
																											list.push_back(identifierNode);	
																										}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 581 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											numberFct((yyvsp[-1].tokens));
																											Node spacenNode(NUMBER, number);

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 591 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											Node spacenNode(NUMBER, (yyvsp[-1].tokens));

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 600 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											Node spacenNode(NUMBER, "1");

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 609 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LL" << endl;
																											Node llNode(LL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(llNode);
																											list.push_back(sizeNode);	
																										}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 618 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MG" << endl;
																											Node mgNode(MG, "");
																											string s = (yyvsp[-1].tokens);
																											Node mgTNode(MG_TYPE, s.substr(4, 1));
																											Node mgStrNode(STRINGLITERAL, s.substr(6, s.length() - 7));
																											list.push_back(mgNode);
																											list.push_back(mgTNode);
																											list.push_back(mgStrNode);
																										}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 628 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(inNode);
																											list.push_back(sizeNode);
																										}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 636 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											Node sizeNode(NUMBER, "0");
																											list.push_back(inNode);
																											list.push_back(sizeNode);
																										}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 643 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node irNode(IR, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(irNode);
																											list.push_back(sizeNode);
																										}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 652 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node paNode(PA, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(paNode);
																											list.push_back(identNode);
																										}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 663 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TB" << endl;
																											Node tbNode(TB, "");
																											numberFct((yyvsp[-2].tokens));
																											Node tbNum1Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node tbNum2Node(NUMBER, number);
																											list.push_back(tbNode);
																											list.push_back(tbNum1Node);
																											list.push_back(tbNum2Node);
																										}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 674 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SK" << endl;
																											Node sknode(SK, "");
																											numberFct((yyvsp[-1].tokens));
																											Node skNumberNode(NUMBER, number);
																											list.push_back(sknode);
																											list.push_back(skNumberNode);
																										}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 682 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node us(US, "");
																											list.push_back(us);
																										}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 687 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE ON" << endl;
																											Node us(US, "");
																											Node onNode(ON, "");
																											list.push_back(us);		
																											list.push_back(onNode);																					
																										}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 694 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE NUM" << endl;
																											Node offUsNode(OFF_US, "");
																											Node us(US, "");
																											numberFct((yyvsp[0].tokens));
																											Node numNode(NUMBER, number);
																											us.addNode(&numNode);
																											list.push_back(offUsNode);
																											list.push_back(us);
																										}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 704 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE NUM" << endl;
																											Node offUsNode(OFF_US, "");
																											Node us(US, "");
																											numberFct((yyvsp[-1].tokens));
																											Node numNode(NUMBER, number);
																											us.addNode(&numNode);
																											list.push_back(offUsNode);
																											list.push_back(us);
																										}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 714 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE OFF" << endl;
																											Node offUsNode(OFF_US, "");
																											list.push_back(offUsNode);	
																										}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 719 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-2].tokens));
																											Node valueNode(VALUE, "");
																											Node stringLiteralNode(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 732 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-6].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-5].tokens));
																											Node valueNode(VALUE, "");
																											Node substrNode(SUBSTR, "");
																											Node sub1Node(NUMBER, (yyvsp[-2].tokens));
																											Node sub2Node(NUMBER, (yyvsp[-1].tokens));

																											substrNode.addNode(&sub1Node);
																											substrNode.addNode(&sub2Node);
																											
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											list.push_back(valueNode);
																											list.push_back(substrNode);
																										}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 751 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-2].tokens));
																											Node variable(STRINGVARIABLE, "");
																											varName((yyvsp[-1].tokens));
																							    			Node varName0(NAME, var);
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											list.push_back(variable);
																											list.push_back(varName0);
																										}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 765 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-3].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-2].tokens));
																											numberFct((yyvsp[-1].tokens));
																											Node valueNode(VALUE, "");
																											Node numberNode(NUMBER, number);
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											list.push_back(valueNode);
																											list.push_back(numberNode);
																										}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 779 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-2].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-1].tokens));
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											
																										}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 789 "compiler.y" /* yacc.c:1646  */
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
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 803 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ON" << endl;
																											Node ceNode(CE, "");
																											Node ceOnNode(ON, "");
																											list.push_back(ceNode);
																											list.push_back(ceOnNode);
																										}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 810 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE VAR" << endl;
																											Node ceNode(CE, "");
																											Node ceVarNode(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																											Node varNameNode(NAME, name);
																											ceVarNode.addNode(&varNameNode);
																											list.push_back(ceNode);
																											list.push_back(ceVarNode);
																										}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 820 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE OFF" << endl;
																											Node ceOffNode(OFF_CE, "");
																											list.push_back(ceOffNode);
																										}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 826 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU" << endl;
																											Node suNode(SU, "");
																											Node suOnNode(ON, "");
																											list.push_back(suNode);
																											list.push_back(suOnNode);
																										}
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 833 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU OFF" << endl;
																											Node suOffNode(OFF_SU, "");
																											list.push_back(suOffNode);
																										}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 839 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM" << endl;
																											Node dmNode(DM, "");
																											Node dmIdentNode(IDENTIFIER, "");
																											Node dmOnNode(ON, "");
																											list.push_back(dmNode);
																											list.push_back(dmIdentNode);
																											list.push_back(dmOnNode);
																										}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 848 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM OFF" << endl;
																											Node dmOffNode(OFF_DM, "");
																											list.push_back(dmOffNode);
																										}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 854 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP ON" << endl;
																											Node kpNode(KP, "");
																											Node kponNode(ON, "");
																											list.push_back(kpNode);
																											list.push_back(kponNode);
																										}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 861 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP OFF" << endl;
																											Node kpoffNode(OFF_KP, "");
																											list.push_back(kpoffNode);
			;																							}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 866 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGVARIABLE, "");
																											Node ctvarnameNode(NAME, (yyvsp[0].tokens));
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
																											list.push_back(ctvarnameNode);
																										}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 875 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGLITERAL, "");
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
																										}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 889 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node daNode(AREADEFINITION, "");
																											Node daNameNode(NAME, (yyvsp[-7].tokens));
																											
																											numberFct((yyvsp[-6].tokens));
																											Node daxNode(NUMBER, number);

																											numberFct((yyvsp[-5].tokens));
																											Node dayNode(NUMBER, number);

																											numberFct((yyvsp[-3].tokens));
																											Node daWidthNode(NUMBER, number);

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
																											Node daRotateNumberNode(NUMBER, number);

																											list.push_back(daNode);
																											list.push_back(daNameNode);
																											list.push_back(daxNode);
																											list.push_back(dayNode);
																											list.push_back(daWidthNode);
																											list.push_back(*daOptionalNode);
																											list.push_back(daRotateNumberNode);
																										}
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 924 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node daNode(AREADEFINITION, "");
																											Node daNameNode(NAME, (yyvsp[-5].tokens));
																											
																											numberFct((yyvsp[-4].tokens));
																											Node daxNode(NUMBER, number);

																											numberFct((yyvsp[-3].tokens));
																											Node dayNode(NUMBER, number);

																											numberFct((yyvsp[-1].tokens));
																											Node daWidthNode(NUMBER, number);

																											list.push_back(daNode);
																											list.push_back(daNameNode);
																											list.push_back(daxNode);
																											list.push_back(dayNode);
																											list.push_back(daWidthNode);
																										}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 944 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DA" << endl;
																											Node daNode(AREADEFINITION, "");
																											Node daNameNode(NAME, (yyvsp[-3].tokens));
																											
																											numberFct((yyvsp[-2].tokens));
																											Node daxNode(NUMBER, number);

																											numberFct((yyvsp[-1].tokens));
																											Node dayNode(NUMBER, number);
																											
																											list.push_back(daNode);
																											list.push_back(daNameNode);
																											list.push_back(daxNode);
																											list.push_back(dayNode);
																											
																										}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 962 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[0].tokens));
																											Node tpSizeNode(NUMBER, size);
																											list.push_back(tpSizeNode);
																										}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 967 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[-1].tokens));
																											Node tpSizeNode(NUMBER, size);
																											
																											Node* dirNode;
																											
																											if(strcmp((yyvsp[0].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											tpSizeNode.addNode(dirNode);
																											list.push_back(tpSizeNode);
																										}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 986 "compiler.y" /* yacc.c:1646  */
    {
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 991 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node area(AREA, "");
																											Node areaIdent(NAME, (yyvsp[-2].tokens));
																											Node areaOn(ON, "");
																											list.push_back(area);
																											list.push_back(areaIdent);
																											list.push_back(areaOn);
																										}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1000 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node areaOff(OFF_AREA, "");
																											list.push_back(areaOff);
																										}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1005 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STYLE" << endl;
																											styleName((yyvsp[-2].tokens));
																											styleSize((yyvsp[-2].tokens));
																											if(strlen(size)>0){
																												Node fontName(NAME, name);
																												Node font(FONT, "");
																												Node fontSize(NUMBER, size);
																												list.push_back(font);
																												list.push_back(fontName);
																												list.push_back(fontSize);
																											}

																											styleName((yyvsp[-1].tokens));
																											Node fontType(TYPE, "bold");
																											list.push_back(fontType);

																										}
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1023 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node variable(STRINGVARIABLE, "");

																											varName((yyvsp[-3].tokens));
																											Node varName1(NAME, var);

																											Node variable2(STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node varName2(NAME, var);

																											list.push_back(variable);
																											list.push_back(varName1);
																											list.push_back(variable2);
																											list.push_back(varName2);

																										}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1041 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node variable(STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node variableName(NAME, var);

																											list.push_back(variable);
																											list.push_back(variableName);
																										}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1054 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;
																											Node foNode(FO, "");

																											Node* dirNode;
																											
																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											foNode.addNode(dirNode);
																											list.push_back(foNode);
																										}
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1072 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;				
																											Node foNode(FO, "");
																											Node onNode(ON, "");
																											
																											foNode.addNode(&onNode);
																											list.push_back(foNode);
																										}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1081 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TI" << endl;
																											Node tiNode(TI, "");
																											Node charNode(CHARACTER, (yyvsp[-2].tokens));
																										    Node numNode(NUMBER, (yyvsp[-1].tokens));
																											
																											list.push_back(tiNode);
																											list.push_back(charNode);
																											list.push_back(numNode);
																										}
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1092 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NV" << endl;
																										}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1096 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BR_UP" << endl;
																										}
#line 3086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1100 "compiler.y" /* yacc.c:1646  */
    {
																											strcpy((yyval.tokens), (yyvsp[-1].tokens)); 
																											cout << "BR" << endl;
																											Node linebreak(LINEBREAK, ""); 
																											list.push_back(linebreak); 
																										}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1107 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NY" << endl;
																										}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1111 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ENY" << endl;
																										}
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1115 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																										}
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1119 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																										}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1124 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node box(BOX, "");

																											Node* dir1Node;

																											if(strcmp((yyvsp[-2].tokens), "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}

																											Node* dir2Node;

																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box.addNode(dir1Node);
																											box.addNode(dir2Node);
																											list.push_back(box);
																										}
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1154 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node box(BOX, "");
																											Node keyword(BOX_RULE, (yyvsp[-3].tokens));

																											Node* dir1Node;

																											if(strcmp((yyvsp[-2].tokens), "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}

																											Node* dir2Node;

																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box.addNode(&keyword);
																											box.addNode(dir1Node);
																											box.addNode(dir2Node);
																											list.push_back(box);
																										}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1186 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node box(BOX, "");
																											Node keyword(BOX_RULE, (yyvsp[-4].tokens));

																											Node* dir1Node;

																											if(strcmp((yyvsp[-3].tokens), "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}
																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);

																											Node* dir2Node;

																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box.addNode(&keyword);
																											box.addNode(dir1Node);
																											box.addNode(&sizeNode);
																											box.addNode(dir2Node);
																											list.push_back(box);
																										}
#line 3243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1221 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node box(BOX, "");

																											Node* dir1Node;

																											if(strcmp((yyvsp[-3].tokens), "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}
																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);

																											Node* dir2Node;

																											if(strcmp((yyvsp[-1].tokens), "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box.addNode(dir1Node);
																											box.addNode(&sizeNode);
																											box.addNode(dir2Node);
																											list.push_back(box);
																										}
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1254 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node boxnode(OFF_BOX, "");
																											Node boxRule(BOX_RULE, (yyvsp[-1].tokens));
																											
																											boxnode.addNode(&boxRule);
																											list.push_back(boxnode);
																										}
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1262 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node boxNode(BOX, "");
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
																											Node sizeNode(NUMBER, number);

																											boxNode.addNode(dirNode);
																											boxNode.addNode(&sizeNode);
																											list.push_back(boxNode);
																										}
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1281 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node boxNode(BOX, "");
																											Node* dirNode;	
																											if(strcmp((yyvsp[-3].tokens), "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node size2Node(NUMBER, number);

																											boxNode.addNode(dirNode);
																											boxNode.addNode(&sizeNode);
																											boxNode.addNode(&size2Node);
																											list.push_back(boxNode);
																										}
#line 3345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1303 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX OFF" << endl;
																											Node boxOff(OFF_BOX, "");
																											list.push_back(boxOff);	
																										}
#line 3355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1308 "compiler.y" /* yacc.c:1646  */
    {
																											Node boxNode(BOX, "");
																											numberFct((yyvsp[-5].tokens));
																											Node sizeNode(NUMBER, number);
																											numberFct((yyvsp[-4].tokens));
																											Node size2Node(NUMBER, number);
																											Node slashNode(RULE, (yyvsp[-3].tokens));
																											numberFct((yyvsp[-2].tokens));
																											Node size3Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node size4Node(NUMBER, number);
																											
																											
																											boxNode.addNode(&sizeNode);
																											boxNode.addNode(&size2Node);
																											boxNode.addNode(&slashNode);
																											boxNode.addNode(&size3Node);
																											boxNode.addNode(&size4Node);
																											list.push_back(boxNode);

																										}
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1329 "compiler.y" /* yacc.c:1646  */
    {
																															Node boxNode(BOX, "");
																															Node* dirNode;	
																															if(strcmp((yyvsp[-11].tokens), "left") == 0)
																															{
																																dirNode = new Node(LEFT, "");
																															}
																															else
																															{
																																dirNode = new Node(RIGHT, "");
																															}
																															numberFct((yyvsp[-10].tokens));
																															Node sizeNode(NUMBER, number);
																															Node slashNode(RULE, (yyvsp[-9].tokens));
																															numberFct((yyvsp[-8].tokens));
																															Node size2Node(NUMBER, number);
																															numberFct((yyvsp[-7].tokens));
																															Node size3Node(NUMBER, number);
																															Node slash2Node(RULE, (yyvsp[-6].tokens));
																															numberFct((yyvsp[-5].tokens));
																															Node size4Node(NUMBER, number);
																															numberFct((yyvsp[-4].tokens));
																															Node size5Node(NUMBER, number);
																															Node slash3Node(RULE, (yyvsp[-3].tokens));
																															// numberFct($11);											
																															// Node size6Node(NUMBER, number);
																															// numberFct($12);
																															// Node size7Node(NUMBER, number);
																															
																															boxNode.addNode(dirNode);
																															boxNode.addNode(&sizeNode);
																															boxNode.addNode(&slashNode);
																															boxNode.addNode(&size2Node);
																															boxNode.addNode(&size3Node);
																															boxNode.addNode(&slash2Node);
																															boxNode.addNode(&size4Node);
																															boxNode.addNode(&size5Node);
																															boxNode.addNode(&slash3Node);
																															// boxNode.addNode(&size6Node);
																															// boxNode.addNode(&size7Node);
																															list.push_back(boxNode);

																														}
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3433 "y.tab.c" /* yacc.c:1646  */
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
#line 1374 "compiler.y" /* yacc.c:1906  */


void yyerror(char *msg){
	fprintf(stderr, "%s\n", msg);
	exit(1);
}







int main(){
	list.push_back(docNode);

	cout<< endl << endl <<"*******************YYPARSE*********************"<<endl;
	yyparse();

	cout<< endl << endl <<"*******************LIST OF NODES*********************"<<endl;
	printList(list);

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
