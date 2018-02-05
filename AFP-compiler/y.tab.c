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
    MATHEX_T = 331
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "compiler.y" /* yacc.c:355  */

	char tokens[1000];

#line 285 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 302 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

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
       2,     2,     2,     2,     2,     2,    77,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    62,    69,    76,    84,
      91,    99,   104,   126,   142,   171,   178,   183,   195,   209,
     233,   256,   274,   288,   293,   298,   303,   314,   320,   336,
     352,   355,   356,   357,   359,   367,   374,   379,   385,   392,
     393,   394,   395,   396,   397,   399,   400,   402,   420,   438,
     454,   471,   477,   483,   489,   504,   518,   535,   551,   563,
     573,   579,   587,   592,   598,   599,   604,   612,   622,   631,
     640,   648,   649,   659,   667,   677,   684,   692,   697,   698,
     705,   710,   711,   712,   713,   714,   725,   733,   738,   745,
     755,   765,   770,   783,   802,   816,   830,   841,   848,   854,
     861,   867,   876,   882,   889,   894,   903,   911,   912,   914,
     915,   917,   952,   972,   990,   995,   996,  1001,  1010,  1015,
    1033,  1051,  1061,  1062,  1064,  1082,  1091,  1102,  1106,  1110,
    1117,  1121,  1125,  1129,  1134,  1164,  1176,  1208,  1243,  1276,
    1284,  1303,  1325,  1330,  1351
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
  "GS_T", "SK_T", "CE_T", "TB_T", "MATHEX_T", "'.'", "$accept", "TOKEN",
  "PM", "RH", "OPERATOR", "VARPROC", "COMPARISON", "IF", "AN", "OR",
  "MATHEX", "STRING_LINE", "EX", "CE", "SU", "DM", "KP", "CT",
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
     325,   326,   327,   328,   329,   330,   331,    46
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
      96,    38,    46,    73,     1,   -67,   -67,   -67,    51,   -67,
      92,   -67,   -67,    43,   107,    81,   128,   136,    93,   108,
     134,   -67,   -67,    55,    22,    56,    37,   -67,   129,    37,
      37,   118,   -67,   -67,   -67,   -67,   -67,    31,   138,   139,
     141,   130,   144,   131,   133,   157,   137,   145,   147,    64,
      68,    78,    53,   -48,   -67,    80,   -67,    57,   132,   -67,
     150,   140,    87,   146,   143,   148,   -67,   -67,   149,   -67,
     151,   -67,   -67,   -67,   -67,   152,    33,   -67,   153,   154,
     155,   156,   158,   -67,    60,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   159,   161,   -67,   162,
     -67,   163,   164,   165,    97,   100,   101,   -67,   190,    63,
     -67,   166,   -67,   167,   -67,    76,   151,   168,   -67,   169,
     170,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   171,
     172,   -67,   183,   -67,   -67,   160,   -67,   -67,   178,   174,
     175,   176,   194,   179,   189,     5,   103,   180,   181,   -67,
     182,   184,   185,   186,   187,   -67,   -67,   119,   195,     6,
     120,   191,   -67,   -67,   -67,   200,   192,   -67,   -67,   198,
     -67,    76,   123,   -67,   -67,   -67,    33,   -67,   -67,   -67,
     -67,   -67,   -67,    60,   105,   -67,   -67,   -67,   -67,   -67,
     196,   201,   197,   205,   116,   199,   202,   206,   203,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,    30,   208,   204,
     -67,   -67,   -67,   207,   -67,    83,   104,   -67,    40,   209,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   210,   211,   212,
     -67,   -67,   213,   214,   -67,   -67,   -67,   215,   111,   216,
     217,   219,   -67,   -67,   218,   -67,    61,   230,   220,   -67,
     -67,   221,   -67,   229,   223,   -66,   -30,   152,   224,   -67,
     -67,   236,   -67,   232,   227,   228,   240,   231,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
      11,   -67,   241,   -67,   243,   -67,   -67,   238,   -67,   -67,
     -67,   -67,   245,   235,   -67,   -67,   247,   -67,   -67,   -67,
     -67,    90,   237,   248,   246,   242,   -67,   249,   -67,   -67,
     244,   -67,   254,   250,   -67,   256,   -67,   251,   -67,   257,
     -67,   258,   259,   263,   253,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   153,     0,     0,    52,    51,    53,     0,   152,
       0,     1,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,    43,    44,     0,
       0,     0,    61,    62,    63,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   134,    48,    80,    81,    82,    31,
       0,     0,     0,     0,     0,     0,    83,     3,    19,    17,
      14,    16,    15,    12,    13,    22,    24,    11,     0,     0,
       0,    20,    18,     2,   142,     4,     5,     6,     7,     8,
       9,    10,    21,    23,   143,    54,     0,     0,    25,     0,
      28,     0,     0,     0,     0,     0,     0,    92,     0,     0,
      95,     0,   100,     0,    97,     0,     0,     0,    45,     0,
       0,   126,   125,    57,    58,    55,    56,   123,   124,     0,
       0,    47,     0,   149,   148,     0,   150,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,     0,   109,     0,     0,    49,   141,     0,     0,     0,
       0,     0,   119,   120,   122,     0,     0,   117,   118,     0,
      91,     0,     0,    81,    82,    85,    84,   102,   103,   104,
     101,    98,   136,   135,     0,    26,    27,    29,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      99,    96,    71,    73,    72,    90,    86,     0,     0,     0,
     145,   144,   138,     0,   162,     0,     0,   159,     0,     0,
      87,    88,   108,   111,   110,   139,    50,     0,     0,     0,
      69,    70,     0,     0,    30,   121,   106,     0,     0,     0,
       0,     0,   133,    42,     0,    40,     0,     0,     0,    39,
      37,     0,    94,     0,     0,     0,     0,   116,     0,   146,
     137,     0,   155,     0,     0,     0,     0,     0,   160,   154,
      76,    74,   140,    77,    75,   105,    67,    68,    78,    79,
       0,    41,     0,    33,     0,    38,    46,     0,   112,   114,
     115,   147,     0,     0,   156,   161,     0,   158,   128,   127,
     132,     0,     0,     0,     0,     0,   157,     0,   130,   129,
       0,    32,     0,     0,   163,     0,   131,     0,   113,     0,
      34,     0,     0,     0,     0,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   262,   -67,    -4,   265,   142,   -67,   -67,   -67,
       7,   269,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     270,   302,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     311,   -67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    68,   159,   116,    71,    72,    73,    74,
      75,   176,    77,    78,    79,    80,    81,    82,   301,   310,
       6,   183,    85,    86,    87,    88,    89,    90,    91,    92,
       7,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      69,    11,   289,   150,   151,    12,    13,    14,    15,    16,
     157,    17,    18,    19,    20,   152,    21,    22,    23,    24,
     298,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   253,    37,    38,    39,    40,   290,    41,
      42,     1,    43,    44,    45,    46,   160,    47,     2,    48,
       3,    49,    21,    22,    50,    51,    52,    53,    54,    55,
      56,    12,    57,   123,    58,   230,    59,   216,   124,   231,
      60,    61,    62,   217,    63,    64,    65,    66,   299,   300,
      12,   111,   125,   126,    32,    33,    34,    35,    36,   254,
     112,   255,    56,   256,   173,     8,   174,   265,   115,   266,
      97,   175,   267,    32,    33,    34,    35,    36,   268,    66,
     147,    98,   109,   113,     9,   139,   148,    54,   282,    95,
     141,   149,   198,   110,   114,   156,   140,   142,   182,   283,
     143,   199,    10,   157,   158,   144,     1,   145,   153,   164,
     146,   154,   261,     2,   100,     3,   165,   308,   155,    96,
     104,   262,   105,   309,   190,   106,   191,   193,   195,   192,
     218,   263,   194,   196,    99,   219,   264,   238,   117,   241,
     276,   119,   120,   242,   277,   247,   107,   121,   248,   122,
     227,   232,   228,   233,   239,   101,   240,   102,   103,   127,
     128,   162,   163,   108,   167,   168,   129,   118,   131,   133,
     130,   134,   135,   132,   197,   136,   138,   161,   160,   166,
     207,   169,   171,   137,   257,     0,   184,   170,     0,   208,
       0,   177,   178,   179,   180,     0,   181,     0,   172,   185,
     186,   187,   188,   189,   200,   201,   202,   203,   204,   205,
     206,   209,   210,   211,   212,   213,   215,   214,   220,   221,
     222,   235,   223,   224,   225,   226,   229,     0,   244,   234,
     236,   237,   246,   251,   243,   245,    67,   249,   258,    70,
     250,   252,   259,    76,    83,   260,   280,   269,   270,   271,
     272,   273,   274,   275,   278,   279,   281,   284,   285,   286,
     287,   288,   291,   292,   293,   294,   295,   296,   302,   297,
     303,   304,   305,   306,   307,   311,    84,   312,   315,   313,
     314,   317,   316,   319,   321,    93,   323,   322,   318,   320,
     324,   325
};

static const yytype_int16 yycheck[] =
{
       4,     0,    68,    51,    52,     4,     5,     6,     7,     8,
      76,    10,    11,    12,    13,    63,    15,    16,    17,    18,
       9,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     3,    33,    34,    35,    36,    68,    38,
      39,    40,    41,    42,    43,    44,    76,    46,    47,    48,
      49,    50,    15,    16,    53,    54,    55,    56,    57,    58,
      59,     4,    61,    32,    63,    59,    65,    62,    37,    63,
      69,    70,    71,    68,    73,    74,    75,    76,    67,    68,
       4,    59,    51,    52,    27,    28,    29,    30,    31,    59,
      68,    61,    59,    63,    61,    57,    63,    57,    61,    59,
      57,    68,    62,    27,    28,    29,    30,    31,    68,    76,
      57,    68,    57,    57,    68,    51,    63,    57,    57,    68,
      52,    68,    59,    68,    68,    68,    62,    59,    68,    68,
      52,    68,    59,    76,    77,    57,    40,    59,    58,    52,
      62,    61,    59,    47,    63,    49,    59,    57,    68,    57,
      57,    68,    59,    63,    57,    62,    59,    57,    57,    62,
      57,    57,    62,    62,    57,    62,    62,   171,    26,    64,
      59,    29,    30,    68,    63,    59,    68,    59,    62,    61,
      61,    61,    63,    63,    61,    57,    63,    51,    52,    51,
      52,    51,    52,    59,    51,    52,    57,    68,    68,    68,
      59,    68,    45,    59,    14,    68,    59,    57,    76,    63,
      27,    63,    61,    68,   207,    -1,    57,    68,    -1,    59,
      -1,    68,    68,    68,    68,    -1,    68,    -1,    76,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    63,    68,    68,    68,    51,    57,    68,    68,    68,
      68,    51,    68,    68,    68,    68,    61,    -1,    57,    68,
      68,    63,    57,    57,    68,    68,     4,    68,    60,     4,
      68,    68,    68,     4,     4,    68,    57,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    57,    68,    68,
      61,    68,    68,    57,    62,    68,    68,    57,    57,    68,
      57,    63,    57,    68,    57,    68,     4,    59,    59,    63,
      68,    57,    68,    57,    57,     4,    57,    59,    68,    68,
      57,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    47,    49,    79,    80,    98,   108,    57,    68,
      59,     0,     4,     5,     6,     7,     8,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    34,    35,
      36,    38,    39,    41,    42,    43,    44,    46,    48,    50,
      53,    54,    55,    56,    57,    58,    59,    61,    63,    65,
      69,    70,    71,    73,    74,    75,    76,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    68,    57,    57,    68,    57,
      63,    57,    51,    52,    57,    59,    62,    68,    59,    57,
      68,    59,    68,    57,    68,    61,    83,    84,    68,    84,
      84,    59,    61,    32,    37,    51,    52,    51,    52,    57,
      59,    68,    59,    68,    68,    45,    68,    68,    59,    51,
      62,    52,    59,    52,    57,    59,    62,    57,    63,    68,
      51,    52,    63,    58,    61,    68,    68,    76,    77,    82,
      76,    57,    51,    52,    52,    59,    63,    51,    52,    63,
      68,    61,    76,    61,    63,    68,    89,    68,    68,    68,
      68,    68,    68,    99,    57,    68,    68,    68,    68,    68,
      57,    59,    62,    57,    62,    57,    62,    14,    59,    68,
      68,    68,    68,    68,    68,    68,    68,    27,    59,    63,
      68,    68,    68,    51,    68,    57,    62,    68,    57,    62,
      68,    68,    68,    68,    68,    68,    68,    61,    63,    61,
      59,    63,    61,    63,    68,    51,    68,    63,    82,    61,
      63,    64,    68,    68,    57,    68,    57,    59,    62,    68,
      68,    57,    68,     3,    59,    61,    63,    88,    60,    68,
      68,    59,    68,    57,    62,    57,    59,    62,    68,    68,
      68,    68,    68,    68,    68,    68,    59,    63,    68,    68,
      57,    68,    57,    68,    57,    68,    68,    61,    68,    68,
      68,    68,    57,    62,    68,    68,    57,    68,     9,    67,
      68,    96,    57,    57,    63,    57,    68,    57,    57,    63,
      97,    68,    59,    63,    68,    59,    68,    57,    68,    57,
      68,    57,    59,    57,    57,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    86,    87,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   103,   104,   105,
     106,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     4,     4,     3,     4,
       4,     2,     8,     6,    10,     4,     4,     5,     6,     5,
       5,     6,     5,     2,     2,     3,     6,     3,     2,     3,
       4,     1,     1,     1,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     2,     2,     3,     3,     3,     2,
       3,     2,     2,     3,     4,     2,     3,     2,     2,     3,
       2,     2,     2,     2,     2,     4,     3,     1,     3,     2,
       3,     3,     5,     8,     5,     5,     4,     2,     2,     2,
       2,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     9,     7,     5,     1,     2,     2,     4,     3,     3,
       4,     2,     1,     1,     3,     3,     4,     5,     2,     2,
       2,     2,     2,     1,     4,     4,     5,     6,     5,     3,
       4,     5,     3,     7,    13
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
#line 1612 "y.tab.c" /* yacc.c:1646  */
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
#line 1624 "y.tab.c" /* yacc.c:1646  */
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
#line 1636 "y.tab.c" /* yacc.c:1646  */
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
#line 1649 "y.tab.c" /* yacc.c:1646  */
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
#line 1661 "y.tab.c" /* yacc.c:1646  */
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
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TP" << endl;
																											Node tpNode(TP, "");
																											list.push_back(tpNode);
																										}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node hrNode(HR, "");
																											Node hrStrNode(STRINGLITERAL, (yyvsp[-5].tokens));
																											numberFct((yyvsp[-4].tokens));
																											Node hrS1Node(NUMBER, number);
																											numberFct((yyvsp[-3].tokens));
																											Node hrS2Node(NUMBER, number);
																											numberFct((yyvsp[-2].tokens));
																											Node hrS3Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node hrS4Node(NUMBER, number);
																											list.push_back(hrNode);
																											list.push_back(hrStrNode);
																											list.push_back(hrS1Node);
																											list.push_back(hrS2Node);
																											list.push_back(hrS3Node);
																											list.push_back(hrS4Node);

																											Node endNode(NEWLINE, "");
																											list.push_back(endNode);
																										}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node hrNode(HR, "");
																											Node hrStrNode(STRINGLITERAL, (yyvsp[-3].tokens));
																											numberFct((yyvsp[-2].tokens));
																											Node hrS1Node(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node hrS2Node(NUMBER, number);
																											
																											list.push_back(hrNode);
																											list.push_back(hrStrNode);
																											list.push_back(hrS1Node);
																											list.push_back(hrS2Node);
																											

																										}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 142 "compiler.y" /* yacc.c:1646  */
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
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY ON" << endl;
																											Node hyNode(HY, "");
																											Node hyOnNode(ON, "");
																											list.push_back(hyNode);
																											list.push_back(hyOnNode);
																										}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HY" << endl;
																											Node hyOffNode(OFF_HY, "");
																											list.push_back(hyOffNode);	
																										}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 183 "compiler.y" /* yacc.c:1646  */
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
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 195 "compiler.y" /* yacc.c:1646  */
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
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 209 "compiler.y" /* yacc.c:1646  */
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
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 233 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");

																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);

																											Node* dirNode;

																											if(strcmp((yyvsp[-2].tokens), "left") == 0)
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

																										}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 256 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");

																											numberFct((yyvsp[-3].tokens));
																											Node sizeNode(NUMBER, number);

																											Node forNode(STRINGLITERAL, (yyvsp[-2].tokens));

																											numberFct((yyvsp[-1].tokens));
																											Node size2Node(NUMBER, number);

																											list.push_back(hrNode);
																											list.push_back(sizeNode);
																											list.push_back(forNode);
																											list.push_back(size2Node);																											

																										}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 274 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "HR" << endl;
																											Node hrNode(HR, "");

																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node size2Node(NUMBER, number);
																											
																											list.push_back(hrNode);
																											list.push_back(sizeNode);
																											list.push_back(size2Node);
																											
																										}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 288 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ELSE" << endl;
																											Node elNode(ELSE, "");
																											list.push_back(elNode);	
																										}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											list.push_back(thNode);	
																										}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 298 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											list.push_back(thNode);	
																										}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 303 "compiler.y" /* yacc.c:1646  */
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
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 314 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LABEL" << endl;
																											string s = (yyvsp[-1].tokens);
																											Node labelStrNode(STRINGLITERAL, s.substr(3));
																											Node labelNode(LABEL, s.substr(3));																											
																										}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 320 "compiler.y" /* yacc.c:1646  */
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
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 336 "compiler.y" /* yacc.c:1646  */
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
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 352 "compiler.y" /* yacc.c:1646  */
    {

																										}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 359 "compiler.y" /* yacc.c:1646  */
    {
																											Node pmNode(PM, "");
																											numberFct((yyvsp[0].tokens));
																											Node pmsizeNode(NUMBER, number);
																											list.push_back(pmNode);
																											list.push_back(pmsizeNode);
																										}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 367 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH ON" << endl;
																											Node rhNode(RH, "");
																											Node rhonNode(ON, "");
																											list.push_back(rhNode);
																											list.push_back(rhonNode);
																										}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 374 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH OFF" << endl;
																											Node rhoffNode(OFF_RH, "");
																											list.push_back(rhoffNode);
																										}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 379 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "RH CANCEL" << endl;
																											Node rhcancelNode(CANCEL, "");
																											list.push_back(rhcancelNode);
																										}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 386 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Rh EXECUTE" << endl;
																											Node rhexecuteNode(EXECUTE, "");
																											list.push_back(rhexecuteNode);
																										}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 402 "compiler.y" /* yacc.c:1646  */
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
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 420 "compiler.y" /* yacc.c:1646  */
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
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 438 "compiler.y" /* yacc.c:1646  */
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
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 454 "compiler.y" /* yacc.c:1646  */
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
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 471 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IF" << endl;
																											Node ifNode(IF, "");
																											list.push_back(ifNode);
																										}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 477 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AN" << endl;
																											Node andNode(AND, "");
																											list.push_back(andNode);
																										}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "OR" << endl;
																											Node orNode(OR, "");
																											list.push_back(orNode);	
																										}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 489 "compiler.y" /* yacc.c:1646  */
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
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 504 "compiler.y" /* yacc.c:1646  */
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
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 518 "compiler.y" /* yacc.c:1646  */
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
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 535 "compiler.y" /* yacc.c:1646  */
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
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 551 "compiler.y" /* yacc.c:1646  */
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
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 563 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "MATHEX CONTINUED"<<endl;
																											Node mathExSign(MATHEX_SIGN, (yyvsp[-2].tokens));
																											Node numNode(NUMBER, (yyvsp[-1].tokens));
																											Node newlineNode(NEWLINE, "");
																											list.push_back(mathExSign);
																											list.push_back(numNode);
																											list.push_back(newlineNode);
																										}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 573 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRING" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node textNode(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(textNode);	
																										}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 579 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "STRVAR" << endl;
																											Node variable(STRINGVARIABLE, "");
																											varName((yyvsp[0].tokens));
																							    			Node varName0(NAME, var);
																											list.push_back(variable);
																											list.push_back(varName0);
																										}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 587 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Number in a string" << endl;
																											Node numNode(NUMBER, (yyvsp[0].tokens));
																											list.push_back(numNode);
																										}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 592 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "Mathex in a string" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																											Node textNode(STRINGLITERAL, (yyvsp[0].tokens));
																											list.push_back(textNode);
																										}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 599 "compiler.y" /* yacc.c:1646  */
    {
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 604 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "GOTO" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																											Node gotoNode(GO, "");
																											Node identifierNode(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(gotoNode);
																											list.push_back(identifierNode);	
																										}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 612 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											numberFct((yyvsp[-1].tokens));
																											Node spacenNode(NUMBER, number);

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 622 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											Node spacenNode(NUMBER, (yyvsp[-1].tokens));

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 631 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											Node spacenNode(NUMBER, "1");

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 640 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "LL" << endl;
																											Node llNode(LL, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(llNode);
																											list.push_back(sizeNode);	
																										}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 649 "compiler.y" /* yacc.c:1646  */
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
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 659 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(inNode);
																											list.push_back(sizeNode);
																										}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 667 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);
																											Node ident(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(inNode);
																											list.push_back(sizeNode);
																											list.push_back(ident);
																										}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 677 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											Node sizeNode(NUMBER, "0");
																											list.push_back(inNode);
																											list.push_back(sizeNode);
																										}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 684 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node irNode(IR, "");
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode(NUMBER, number);
																											list.push_back(irNode);
																											list.push_back(sizeNode);
																										}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 692 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "IR" << endl;
																											Node irNode(IR, "");
																											list.push_back(irNode);
																										}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 698 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node paNode(PA, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-1].tokens));
																											list.push_back(paNode);
																											list.push_back(identNode);
																										}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 705 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "PA" << endl;
																											Node paNode(PA, "");
																											list.push_back(paNode);																											
																										}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 714 "compiler.y" /* yacc.c:1646  */
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
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 725 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SK" << endl;
																											Node sknode(SK, "");
																											numberFct((yyvsp[-1].tokens));
																											Node skNumberNode(NUMBER, number);
																											list.push_back(sknode);
																											list.push_back(skNumberNode);
																										}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 733 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE" << endl;
																											Node us(US, "");
																											list.push_back(us);
																										}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 738 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE ON" << endl;
																											Node us(US, "");
																											Node onNode(ON, "");
																											list.push_back(us);		
																											list.push_back(onNode);																					
																										}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 745 "compiler.y" /* yacc.c:1646  */
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
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 755 "compiler.y" /* yacc.c:1646  */
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
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 765 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "UNDERSCORE OFF" << endl;
																											Node offUsNode(OFF_US, "");
																											list.push_back(offUsNode);	
																										}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 770 "compiler.y" /* yacc.c:1646  */
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
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 783 "compiler.y" /* yacc.c:1646  */
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
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 802 "compiler.y" /* yacc.c:1646  */
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
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 816 "compiler.y" /* yacc.c:1646  */
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
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 830 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, (yyvsp[-2].tokens));
																											Node equalNode(CHARACTER, (yyvsp[-1].tokens));
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											
																										}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 841 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE ON" << endl;
																											Node ceNode(CE, "");
																											Node ceOnNode(ON, "");
																											list.push_back(ceNode);
																											list.push_back(ceOnNode);
																										}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 848 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CE OFF" << endl;
																											Node ceOffNode(OFF_CE, "");
																											list.push_back(ceOffNode);
																										}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 854 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU" << endl;
																											Node suNode(SU, "");
																											Node suOnNode(ON, "");
																											list.push_back(suNode);
																											list.push_back(suOnNode);
																										}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 861 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "SU OFF" << endl;
																											Node suOffNode(OFF_SU, "");
																											list.push_back(suOffNode);
																										}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 867 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM" << endl;
																											Node dmNode(DM, "");
																											Node dmIdentNode(IDENTIFIER, "");
																											Node dmOnNode(ON, "");
																											list.push_back(dmNode);
																											list.push_back(dmIdentNode);
																											list.push_back(dmOnNode);
																										}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 876 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "DM OFF" << endl;
																											Node dmOffNode(OFF_DM, "");
																											list.push_back(dmOffNode);
																										}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 882 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP ON" << endl;
																											Node kpNode(KP, "");
																											Node kponNode(ON, "");
																											list.push_back(kpNode);
																											list.push_back(kponNode);
																										}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 889 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "KP OFF" << endl;
																											Node kpoffNode(OFF_KP, "");
																											list.push_back(kpoffNode);
			;																							}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 894 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGVARIABLE, "");
																											Node ctvarnameNode(NAME, (yyvsp[0].tokens));
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
																											list.push_back(ctvarnameNode);
																										}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 903 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGLITERAL, "");
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
																										}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 917 "compiler.y" /* yacc.c:1646  */
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
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 952 "compiler.y" /* yacc.c:1646  */
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
#line 2905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 972 "compiler.y" /* yacc.c:1646  */
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
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 990 "compiler.y" /* yacc.c:1646  */
    {
																											styleSize((yyvsp[0].tokens));
																											Node tpSizeNode(NUMBER, size);
																											list.push_back(tpSizeNode);
																										}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 996 "compiler.y" /* yacc.c:1646  */
    {
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1001 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node area(AREA, "");
																											Node areaIdent(NAME, (yyvsp[-2].tokens));
																											Node areaOn(ON, "");
																											list.push_back(area);
																											list.push_back(areaIdent);
																											list.push_back(areaOn);
																										}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1010 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "AR" << endl;
																											Node areaOff(OFF_AREA, "");
																											list.push_back(areaOff);
																										}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1015 "compiler.y" /* yacc.c:1646  */
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
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1033 "compiler.y" /* yacc.c:1646  */
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
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1051 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "VARIABLE" << endl;
																											Node variable(STRINGVARIABLE, "");

																											varName((yyvsp[-1].tokens));
																											Node variableName(NAME, var);

																											list.push_back(variable);
																											list.push_back(variableName);
																										}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1064 "compiler.y" /* yacc.c:1646  */
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
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1082 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "FO" << endl;				
																											Node foNode(FO, "");
																											Node onNode(ON, "");
																											
																											foNode.addNode(&onNode);
																											list.push_back(foNode);
																										}
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1091 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "TI" << endl;
																											Node tiNode(TI, "");
																											Node charNode(CHARACTER, (yyvsp[-2].tokens));
																										    Node numNode(NUMBER, (yyvsp[-1].tokens));
																											
																											list.push_back(tiNode);
																											list.push_back(charNode);
																											list.push_back(numNode);
																										}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1102 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NV" << endl;
																										}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1106 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BR_UP" << endl;
																										}
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1110 "compiler.y" /* yacc.c:1646  */
    {
																											strcpy((yyval.tokens), (yyvsp[-1].tokens)); 
																											cout << "BR" << endl;
																											Node linebreak(LINEBREAK, ""); 
																											list.push_back(linebreak); 
																										}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1117 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "NY" << endl;
																										}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1121 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "ENY" << endl;
																										}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1125 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[-1].tokens) << endl;
																										}
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1129 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "COMMENT" << endl;
																											cout << (yyvsp[0].tokens) << endl;
																										}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1134 "compiler.y" /* yacc.c:1646  */
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
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1164 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node box(BOX, "");
																											numberFct((yyvsp[-2].tokens));
																											Node sizeNode(NUMBER, number);
																											numberFct((yyvsp[-1].tokens));
																											Node sizeNode2(NUMBER, number);

																											box.addNode(&sizeNode);
																											box.addNode(&sizeNode2);
																											list.push_back(box);
																										}
#line 3195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1176 "compiler.y" /* yacc.c:1646  */
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
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1208 "compiler.y" /* yacc.c:1646  */
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
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1243 "compiler.y" /* yacc.c:1646  */
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
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1276 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX" << endl;
																											Node boxnode(OFF_BOX, "");
																											Node boxRule(BOX_RULE, (yyvsp[-1].tokens));
																											
																											boxnode.addNode(&boxRule);
																											list.push_back(boxnode);
																										}
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1284 "compiler.y" /* yacc.c:1646  */
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
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1303 "compiler.y" /* yacc.c:1646  */
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
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1325 "compiler.y" /* yacc.c:1646  */
    {
																											cout << "BOX OFF" << endl;
																											Node boxOff(OFF_BOX, "");
																											list.push_back(boxOff);	
																										}
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1330 "compiler.y" /* yacc.c:1646  */
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
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1351 "compiler.y" /* yacc.c:1646  */
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
																															
																															boxNode.addNode(dirNode);
																															boxNode.addNode(&sizeNode);
																															boxNode.addNode(&slashNode);
																															boxNode.addNode(&size2Node);
																															boxNode.addNode(&size3Node);
																															boxNode.addNode(&slash2Node);
																															boxNode.addNode(&size4Node);
																															boxNode.addNode(&size5Node);
																															boxNode.addNode(&slash3Node);



																															numberFct((yyvsp[-2].tokens));											
																															Node* size6Node = new Node (NUMBER, number);
																															numberFct((yyvsp[-1].tokens));
																															Node* size7Node = new Node (NUMBER, number);
																															boxNode.addNode(size6Node);
																															boxNode.addNode(size7Node);
																															list.push_back(boxNode);

																														}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3465 "y.tab.c" /* yacc.c:1646  */
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
#line 1399 "compiler.y" /* yacc.c:1906  */


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
