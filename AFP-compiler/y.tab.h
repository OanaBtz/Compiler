/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    NOTEQUAL_T = 258,
    OF_T = 259,
    CL_T = 260,
    CD_T = 261,
    TM_T = 262,
    DEPTH_T = 263,
    HY_T = 264,
    HR_T = 265,
    MG_T = 266,
    DR_T = 267,
    WEIGHT_T = 268,
    UPPERCASE_T = 269,
    LENGTH_T = 270,
    IN_T = 271,
    PA_T = 272,
    NS_T = 273,
    IR_T = 274,
    IF_T = 275,
    EL_T = 276,
    TH_T = 277,
    OR_T = 278,
    AN_T = 279,
    CT_T = 280,
    EQUAL_T = 281,
    GTHANE_T = 282,
    LTHANE_T = 283,
    GTHAN_T = 284,
    LTHAN_T = 285,
    CANCEL_T = 286,
    RH_T = 287,
    KP_T = 288,
    LL_T = 289,
    GOTO_T = 290,
    EXECUTE_T = 291,
    LABEL_T = 292,
    SE_T = 293,
    PM_T = 294,
    BR_T = 295,
    BR_UP_T = 296,
    NV_T = 297,
    NY_T = 298,
    PAGE_T = 299,
    ENY_T = 300,
    COMMENT_T = 301,
    TI_T = 302,
    DA_T = 303,
    FO_T = 304,
    ON_T = 305,
    OFF_T = 306,
    AR_T = 307,
    BX_T = 308,
    SP_T = 309,
    US_T = 310,
    SIZE_T = 311,
    STYLE_T = 312,
    IDENT_T = 313,
    VAR_UP_T = 314,
    VAR_T = 315,
    DIRECTION_T = 316,
    NUM_T = 317,
    WIDTH_T = 318,
    TP_T = 319,
    TAB_T = 320,
    ROTATE_T = 321,
    NEW_LINE_T = 322,
    BM_T = 323,
    SU_T = 324,
    DM_T = 325,
    GS_T = 326,
    SK_T = 327,
    CE_T = 328,
    TB_T = 329
  };
#endif
/* Tokens.  */
#define NOTEQUAL_T 258
#define OF_T 259
#define CL_T 260
#define CD_T 261
#define TM_T 262
#define DEPTH_T 263
#define HY_T 264
#define HR_T 265
#define MG_T 266
#define DR_T 267
#define WEIGHT_T 268
#define UPPERCASE_T 269
#define LENGTH_T 270
#define IN_T 271
#define PA_T 272
#define NS_T 273
#define IR_T 274
#define IF_T 275
#define EL_T 276
#define TH_T 277
#define OR_T 278
#define AN_T 279
#define CT_T 280
#define EQUAL_T 281
#define GTHANE_T 282
#define LTHANE_T 283
#define GTHAN_T 284
#define LTHAN_T 285
#define CANCEL_T 286
#define RH_T 287
#define KP_T 288
#define LL_T 289
#define GOTO_T 290
#define EXECUTE_T 291
#define LABEL_T 292
#define SE_T 293
#define PM_T 294
#define BR_T 295
#define BR_UP_T 296
#define NV_T 297
#define NY_T 298
#define PAGE_T 299
#define ENY_T 300
#define COMMENT_T 301
#define TI_T 302
#define DA_T 303
#define FO_T 304
#define ON_T 305
#define OFF_T 306
#define AR_T 307
#define BX_T 308
#define SP_T 309
#define US_T 310
#define SIZE_T 311
#define STYLE_T 312
#define IDENT_T 313
#define VAR_UP_T 314
#define VAR_T 315
#define DIRECTION_T 316
#define NUM_T 317
#define WIDTH_T 318
#define TP_T 319
#define TAB_T 320
#define ROTATE_T 321
#define NEW_LINE_T 322
#define BM_T 323
#define SU_T 324
#define DM_T 325
#define GS_T 326
#define SK_T 327
#define CE_T 328
#define TB_T 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "compiler.y" /* yacc.c:1909  */

	char tokens[1000];

#line 206 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
