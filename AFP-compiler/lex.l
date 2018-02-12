%{
// \-                      { strcpy(yylval.tokens, yytext); printf("NEG %s\n", yytext); return NEG_T;}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

%}

%option yylineno

%%


".BR"                                           { strcpy(yylval.tokens, yytext); return BR_UP_T;}
".br"                                           { strcpy(yylval.tokens, yytext); return BR_T;}
".NV"                                           { strcpy(yylval.tokens, yytext); return NV_T;}
"PAGE"                                          { strcpy(yylval.tokens, yytext); return PAGE_T;}
":NY."                                          { strcpy(yylval.tokens, yytext); return NY_T;}
":ENY."                                         { strcpy(yylval.tokens, yytext); return ENY_T;}
\.\*.*                                          { strcpy(yylval.tokens, yytext); return COMMENT_T;}
".ti"                                           { strcpy(yylval.tokens, yytext); return TI_T;}
".in"                                           { strcpy(yylval.tokens, yytext); return IN_T;}
".ir"                                           { strcpy(yylval.tokens, yytext); return IR_T;}
".da"|".DA"                                           { strcpy(yylval.tokens, yytext); return DA_T;}
".fo"|".FO"                                           { strcpy(yylval.tokens, yytext); return FO_T;}
"left"|"right"|"LEFT"|"RIGHT"                                  { strcpy(yylval.tokens, yytext); return DIRECTION_T;}
"on"|"ON"                                            { strcpy(yylval.tokens, yytext); return ON_T;}
".go"                                           { strcpy(yylval.tokens, yytext); return GOTO_T;}
".ll"                                           { strcpy(yylval.tokens, yytext); return LL_T;}
".rh"                                           { strcpy(yylval.tokens, yytext); return RH_T;}
".ct"                                           { strcpy(yylval.tokens, yytext); return CT_T;}
".pa"                                           { strcpy(yylval.tokens, yytext); return PA_T;}
".dr"                                           { strcpy(yylval.tokens, yytext); return DR_T;}
"weight"                                        { strcpy(yylval.tokens, yytext); return WEIGHT_T;}
".kp"                                           { strcpy(yylval.tokens, yytext); return KP_T;}
"execute"                                       { strcpy(yylval.tokens, yytext); return EXECUTE_T;}
".if"               	                        { strcpy(yylval.tokens, yytext); return IF_T;}
".el"               	                        { strcpy(yylval.tokens, yytext); return EL_T;}
".th"|".TH"               	                        { strcpy(yylval.tokens, yytext); return TH_T;}
".or"               	                        { strcpy(yylval.tokens, yytext); return OR_T;}
".cd"               	                        { strcpy(yylval.tokens, yytext); return CD_T;}
".su"               	                        { strcpy(yylval.tokens, yytext); return SU_T;}
".dm"               	                        { strcpy(yylval.tokens, yytext); return DM_T;}
".gs"               	                        { strcpy(yylval.tokens, yytext); return GS_T;}
".tb"               	                        { strcpy(yylval.tokens, yytext); return TB_T;}
".sk"               	                        { strcpy(yylval.tokens, yytext); return SK_T;}
".ce"               	                        { strcpy(yylval.tokens, yytext); return CE_T;}
".cl"               	                        { strcpy(yylval.tokens, yytext); return CL_T;}
".an"               	                        { strcpy(yylval.tokens, yytext); return AN_T;}
".of"               	                        { strcpy(yylval.tokens, yytext); return OF_T;}
".hr"               	                        { strcpy(yylval.tokens, yytext); return HR_T;}
".vr"               	                        { strcpy(yylval.tokens, yytext); return VR_T;}
".hy"|".HY"               	                        { strcpy(yylval.tokens, yytext); return HY_T;}
"ne"           			                        { strcpy(yylval.tokens, yytext); return NOTEQUAL_T;}
"="|"eq"           		                        { strcpy(yylval.tokens, yytext); return EQUAL_T;}
">"|"gt"          		                        { strcpy(yylval.tokens, yytext); return GTHAN_T;}
"<"|"lt"           		                        { strcpy(yylval.tokens, yytext); return LTHAN_T;}
">="|"ge"          		                        { strcpy(yylval.tokens, yytext); return GTHANE_T;}
"<="|"le"          		                        { strcpy(yylval.tokens, yytext); return LTHANE_T;}
"off"                                           { strcpy(yylval.tokens, yytext); return OFF_T;}
"&U'"|"&u'"|"x&U'"|"x&u'"                       { strcpy(yylval.tokens, yytext); return UPPERCASE_T;}
"&L'"|"&l'"|"x&L'"|"x&l'"                       { strcpy(yylval.tokens, yytext); return LENGTH_T;}
".ar"                                           { strcpy(yylval.tokens, yytext); return AR_T;}
".bx"                                           { strcpy(yylval.tokens, yytext); return BX_T;}
".sp"                                           { strcpy(yylval.tokens, yytext); return SP_T;}
".se"					                        { strcpy(yylval.tokens, yytext); return SE_T;}
".us"                                           { strcpy(yylval.tokens, yytext); return US_T;}
".tm"                                           { strcpy(yylval.tokens, yytext); return TM_T;}
".bm"                                           { strcpy(yylval.tokens, yytext); return BM_T;}
".pm"                                           { strcpy(yylval.tokens, yytext); return PM_T;}
"width"|"WIDTH"                                         { strcpy(yylval.tokens, yytext); return WIDTH_T;}
".tp"                                           { strcpy(yylval.tokens, yytext); return TP_T;}
"rotate"                                        { strcpy(yylval.tokens, yytext); return ROTATE_T;}
"depth"                	                        { strcpy(yylval.tokens, yytext); return DEPTH_T;}
"substr"               	                        { strcpy(yylval.tokens, yytext); return SUBSTR_T;}
\.mg[\/A-Za-z\:\- ØÆÅéæøå,\.\\¤0-9\*]+ || \.mg[\/A-Za-z\]         { strcpy(yylval.tokens, yytext); return MG_T;}
\+*\-*(([0-9\.])+)(mm|cm|MM|CM)                             { strcpy(yylval.tokens, yytext); return SIZE_T;}
\+*\-*(([0-9\.])+)\,(([0-9\.])+)(mm|cm)               { strcpy(yylval.tokens, yytext); return SIZE_T;}
\n                                              { strcpy(yylval.tokens, yytext); return NEW_LINE_T; }
\:([A-Z]+)([0-9]*)\.                            { strcpy(yylval.tokens, yytext); return STYLE_T;}
\'\%.*\'                                        { strcpy(yylval.tokens, yytext); return VAR_UP_T;}
\&[A-Za-z\-\.ØÆÅ0-9]+                           { strcpy(yylval.tokens, yytext); return VAR_T;}
X\&[A-Za-z\-\.ØÆÅ0-9]+                          { strcpy(yylval.tokens, yytext); return VAR_T;}
x\&[A-Za-z\-\.ØÆÅ0-9]+                          { strcpy(yylval.tokens, yytext); return VAR_T;}
\+*\-*[0-9]+                                    { strcpy(yylval.tokens, yytext); return NUM_T;}
\+*\-*[0-9]+\.[0-9]+                            { strcpy(yylval.tokens, yytext); return NUM_T;}
\.\.\.[A-Za-z\-ØÆÅæøå¤0-9.]+                    { strcpy(yylval.tokens, yytext); return LABEL_T;}
[A-Za-z\'\-ØÆÅæøå,\.\\¤0-9\*\/\_\^]+            { strcpy(yylval.tokens, yytext); return IDENT_T;}
\'\ \'                                          { strcpy(yylval.tokens, yytext); return IDENT_T;}                  
[\+\-\/\*]                                      { strcpy(yylval.tokens, yytext); return MATHEX_T;}
[ \t]                   ;
%%


int yywrap(void){
    return 1;
}


    