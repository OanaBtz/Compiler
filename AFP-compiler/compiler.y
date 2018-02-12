%{

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





%}

%union {
	char tokens[1000];
}

%token <tokens> SUBSTR_T NOTEQUAL_T OF_T CL_T CD_T TM_T DEPTH_T HY_T HR_T MG_T DR_T WEIGHT_T UPPERCASE_T LENGTH_T IN_T PA_T NS_T IR_T IF_T EL_T TH_T OR_T AN_T CT_T EQUAL_T GTHANE_T LTHANE_T GTHAN_T LTHAN_T CANCEL_T RH_T KP_T LL_T GOTO_T EXECUTE_T LABEL_T SE_T PM_T BR_T BR_UP_T NV_T NY_T PAGE_T ENY_T COMMENT_T TI_T DA_T FO_T ON_T OFF_T AR_T BX_T SP_T US_T SIZE_T STYLE_T IDENT_T VAR_UP_T VAR_T DIRECTION_T NUM_T WIDTH_T TP_T TAB_T ROTATE_T NEW_LINE_T BM_T SU_T DM_T GS_T SK_T CE_T TB_T MATHEX_T VR_T
%type  <tokens> CT PM BR BR_UP NV NY ENY COMMENT TI DA KP FO AR BX RH TOKEN EX IF VARPROC OPERATOR AN COMPARISON OR OPTIONALDA OPTINALMEASURE STRING_LINE SIZE_LIST SU CE DM MATHEX 

%%
TOKEN		:	TOKEN DA
			|	TOKEN PM				
			|	TOKEN AR
			|	TOKEN FO
			|	TOKEN TI
			|	TOKEN NV
			|	TOKEN BR_UP
			|	TOKEN BR
			|	TOKEN NY
			|	TOKEN EX
			|	TOKEN AN 
			|	TOKEN OR
			|	TOKEN VARPROC
			|	TOKEN IF
			| 	TOKEN COMPARISON
			|	TOKEN OPERATOR
			|	TOKEN CT
			|	TOKEN RH
			| 	TOKEN KP
			|	TOKEN ENY
			| 	TOKEN MATHEX
			|	TOKEN COMMENT
			|	TOKEN STRING_LINE
			|	TOKEN OF_T NEW_LINE_T																	{
																											Node* ofNode = new Node(OF, "");
																											list.push_back(*ofNode);
																										}
			|	TOKEN OF_T SIZE_T NEW_LINE_T															{
																											Node* ofNode = new Node(OF, "");
																											numberFct($3);
																											Node* ofSizeNode = new Node(NUMBER, number);
																											list.push_back(*ofNode);
																											list.push_back(*ofSizeNode);
																										}
			|	TOKEN CL_T SIZE_T NEW_LINE_T															{
																											Node* clNode = new Node(CL, "");
																											numberFct($3);
																											Node* clnumNode = new Node(NUMBER, number);
																											list.push_back(*clNode);
																											list.push_back(*clnumNode);
																										}
			|	TOKEN CD_T NUM_T																		{
																											Node* cdNode = new Node(CD, "");
																											Node* cdValueNode = new Node(VALUE, "");
																											Node* cdnumNode = new Node(NUMBER, $3);
																											list.push_back(*cdNode);
																											list.push_back(*cdValueNode);
																											list.push_back(*cdnumNode);	
																										}
			|	TOKEN TM_T SIZE_T NEW_LINE_T															{
																											Node* tmNode = new Node(TM, "");
																											numberFct($3);
																											Node* tmsizeNode = new Node(NUMBER, number);
																											list.push_back(*tmNode);
																											list.push_back(*tmsizeNode);
																										}
			|	TOKEN BM_T SIZE_T NEW_LINE_T															{
																											cout << "BM" << endl;
																											Node* bmNode = new Node(BM, "");
																											numberFct($3);
																											Node* bmsizeNode = new Node(NUMBER, number);
																											list.push_back(*bmNode);
																											list.push_back(*bmsizeNode);
																										}
			| 	TOKEN TP_T 																				{
																											cout << "TP" << endl;
																											Node* tpNode = new Node(TP, "");
																											list.push_back(*tpNode);
																										}
			| 	TOKEN TP_T NEW_LINE_T																	{
																											cout << "TP" << endl;
																											Node* tpNode = new Node(TP, "");
																											list.push_back(*tpNode);
																										}
			|	TOKEN VR_T SIZE_T NEW_LINE_T															{
																											cout << "VR" << endl;
																											Node* vrNode = new Node(VR, "");
																											numberFct($3);
																											Node* vrOnNode = new Node(ON, "");
																											Node* sizeNode = new Node(NUMBER, number);

																											vrNode->addNode(vrOnNode);
																											vrNode->addNode(sizeNode);

																											list.push_back(*vrNode);
																										}	
			|	TOKEN VR_T SIZE_T SIZE_T NEW_LINE_T														{
																											cout << "VR" << endl;
																											Node* vrNode = new Node(VR, "");
																											Node* vrOnNode = new Node(ON, "");
																											
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											numberFct($4);
																											Node* sizeNode2 = new Node(NUMBER, number);

																											vrNode->addNode(vrOnNode);
																											vrNode->addNode(sizeNode);
																											vrNode->addNode(sizeNode2);

																											list.push_back(*vrNode);
																										}		
			|	TOKEN VR_T OFF_T NEW_LINE_T																{
																											cout << "VR OFF" << endl;
																											Node* vrNode = new Node(OFF_VR, "");
																											list.push_back(*vrNode);
																										}																					
			|	TOKEN HR_T IDENT_T SIZE_T SIZE_T SIZE_T SIZE_T NEW_LINE_T								{
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* hrStrNode = new Node(STRINGLITERAL, $3);
																											numberFct($4);
																											Node* hrS1Node = new Node(NUMBER, number);
																											numberFct($5);
																											Node* hrS2Node = new Node(NUMBER, number);
																											numberFct($6);
																											Node* hrS3Node = new Node(NUMBER, number);
																											numberFct($7);
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
			|	TOKEN HR_T IDENT_T SIZE_T SIZE_T NEW_LINE_T												{
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* hrStrNode = new Node(STRINGLITERAL, $3);
																											numberFct($4);
																											Node* hrS1Node = new Node(NUMBER, number);
																											numberFct($5);
																											Node* hrS2Node = new Node(NUMBER, number);
																											
																											list.push_back(*hrNode);
																											list.push_back(*hrStrNode);
																											list.push_back(*hrS1Node);
																											list.push_back(*hrS2Node);
																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);

																										}
			|	TOKEN HR_T IDENT_T DIRECTION_T IDENT_T SIZE_T SIZE_T IDENT_T SIZE_T NEW_LINE_T			{
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node* hyNode = new Node(HR, "");
																											Node* hyStrNode = new Node(STRINGLITERAL, $3);
																											Node* dirNode;
																											
																											if(strcmp($4, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											Node* hyS1Node = new Node(NUMBER, $4);
																											Node* hyS2Node = new Node(NUMBER, $5);
																											Node* hyS3Node = new Node(STRINGLITERAL, $6);
																											Node* hyS4Node = new Node(NUMBER, $7);
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
			|	TOKEN HY_T ON_T NEW_LINE_T																{
																											cout << "HY ON" << endl;
																											Node* hyNode = new Node(HY, "");
																											Node* hyOnNode = new Node(ON, "");
																											list.push_back(*hyNode);
																											list.push_back(*hyOnNode);
																										}
			|	TOKEN HY_T OFF_T NEW_LINE_T																{
																											cout << "HY" << endl;
																											Node* hyOffNode = new Node(OFF_HY, "");
																											list.push_back(*hyOffNode);	
																										}
			| 	TOKEN HR_T DIRECTION_T DIRECTION_T NEW_LINE_T											{
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
			|	TOKEN HR_T IDENT_T DIRECTION_T DIRECTION_T NEW_LINE_T									{
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* ruleNode = new Node(RULE, $2);
																											Node* lNode = new Node(LEFT, "");
																											Node* rNode = new Node(RIGHT, "");
																											hrNode->addNode(ruleNode);
																											list.push_back(*hrNode);
																											list.push_back(*lNode);
																											list.push_back(*rNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
			|	TOKEN HR_T DIRECTION_T SIZE_T NEW_LINE_T												{
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");
																											Node* dirNode;

																											if(strcmp($3, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											numberFct($4);
																											Node* sizeNode = new Node(NUMBER, number);

																											list.push_back(*hrNode);
																											list.push_back(*dirNode);
																											list.push_back(*sizeNode);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																										}
			|	TOKEN HR_T SIZE_T DIRECTION_T  NEW_LINE_T												{
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* dirNode;

																											if(strcmp($4, "left") == 0)
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
			|	TOKEN HR_T SIZE_T IDENT_T SIZE_T  NEW_LINE_T											{
																											cout << "HR" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* forNode = new Node(STRINGLITERAL, $4);

																											numberFct($5);
																											Node* size2Node = new Node(NUMBER, number);

																											list.push_back(*hrNode);
																											list.push_back(*sizeNode);
																											list.push_back(*forNode);
																											list.push_back(*size2Node);	
																											
																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);

																										}
			|	TOKEN HR_T	SIZE_T SIZE_T 	NEW_LINE_T													{
																											cout << "HR   TOKEN HR_T	SIZE_T SIZE_T 	NEW_LINE_T" << endl;
																											Node* hrNode = new Node(HR, "");

																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($4);
																											Node* size2Node = new Node(NUMBER, number);
																											
																											list.push_back(*hrNode);
																											list.push_back(*sizeNode);
																											list.push_back(*size2Node);

																											Node* endNode = new Node(NEWLINE, "");
																											list.push_back(*endNode);
																											
																										}
			|	TOKEN EL_T																				{
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											list.push_back(*elNode);	
																										}	
			|	TOKEN EL_T NEW_LINE_T																	{
																											cout << "ELSE" << endl;
																											Node* elNode = new Node(ELSE, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*elNode);	
																											list.push_back(*newline);
																										}																		
			|	TOKEN TH_T																				{
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											list.push_back(*thNode);	
																										}
			|	TOKEN TH_T NEW_LINE_T																	{
																											cout << "THEN" << endl;
																											Node* thNode = new Node(THEN, "");
																											Node* newline = new Node(NEWLINE, "");
																											list.push_back(*thNode);	
																											list.push_back(*newline);
																										}
			|	TOKEN DR_T IDENT_T WEIGHT_T SIZE_T NEW_LINE_T											{
																											cout << "DR" << endl;
																											Node* drNode = new Node(DR, "");
																											Node* drStrNode = new Node(STRINGLITERAL, $3);
																											Node* drWeightNode = new Node(WEIGHT, "");
																											Node* drSizeNode = new Node(NUMBER, $5);
																											list.push_back(*drNode);
																											list.push_back(*drStrNode);
																											list.push_back(*drWeightNode);
																											list.push_back(*drSizeNode);
																										}
			|   TOKEN LABEL_T NEW_LINE_T																{
																											cout << "LABEL" << endl;
																											string s = $2;
																											Node* labelNode = new Node(LABEL, s.substr(3));	
																											list.push_back(*labelNode);																										
																										}
			|	TOKEN STYLE_T																			{
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName($2);
																											styleSize($2);
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																										}																																											
			|	TOKEN STYLE_T NEW_LINE_T																{
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName($2);
																											styleSize($2);
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																										}
			| 	TOKEN STYLE_T VAR_T NEW_LINE_T															{
																											cout << "STYLE" << endl;
																											Node* font = new Node(FONT, "");
																											styleName($2);
																											styleSize($2);
																											Node* fontName = new Node(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(*font);
																												list.push_back(*fontName);
																												// printf("%s\n", size);
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*fontSize);
																											}
																											varName($2);
																											Node* varNameNode = new Node(NAME, var);
																											list.push_back(*varNameNode);
																										}
			|	OF_T NEW_LINE_T																			{
																											Node* ofNode = new Node(OF, "");
																											list.push_back(*ofNode);
																										}
			|	DA
			|	PM	
			|	COMMENT																					
			;
PM			:	PM_T SIZE_T NEW_LINE_T																	{
																											Node* pmNode = new Node(PM, "");
																											numberFct($3);
																											Node* pmsizeNode = new Node(NUMBER, number);
																											list.push_back(*pmNode);
																											list.push_back(*pmsizeNode);
																										}
			;
RH 			:	RH_T ON_T																				{
																											cout << "RH ON" << endl;
																											Node* rhNode = new Node(RH, "");
																											Node* rhonNode = new Node(ON, "");
																											list.push_back(*rhNode);
																											list.push_back(*rhonNode);
																										}
			|	RH_T OFF_T																				{
																											cout << "RH OFF" << endl;
																											Node* rhoffNode = new Node(OFF_RH, "");
																											list.push_back(*rhoffNode);
																										}
			| 	RH_T CANCEL_T																			{
																											cout << "RH CANCEL" << endl;
																											Node* rhcancelNode = new Node(CANCEL, "");
																											list.push_back(*rhcancelNode);
																										}
			
			| 	RH_T EXECUTE_T															
																										{
																											cout << "Rh EXECUTE" << endl;
																											Node* rhexecuteNode = new Node(EXECUTE, "");
																											list.push_back(*rhexecuteNode);
																										}
			;
OPERATOR	:	GTHAN_T
			|	LTHAN_T
			|	EQUAL_T
			|	GTHANE_T
			|	LTHANE_T
			|	NOTEQUAL_T
			;
VARPROC		:	UPPERCASE_T
			|	LENGTH_T
			;
COMPARISON	:	VARPROC VAR_T OPERATOR IDENT_T															{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, $1);
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($2);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, $4);
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	VARPROC VAR_T OPERATOR NUM_T															{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, $1);
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($2);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											Node* numNode = new Node(NUMBER, $4);
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*numNode);
																										}
			|	VARPROC VAR_T OPERATOR VAR_T															{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* ruleNode = new Node(RULE, $1);
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($2);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $3);
								
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											varName($4);
																											Node* varNameNode2 = new Node(NAME, var);
																											list.push_back(*comparisonNode);
																											list.push_back(*ruleNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																										}
			|	VAR_T OPERATOR VAR_T																	{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($1);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $2);
								
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											varName($3);
																											Node* varNameNode2 = new Node(NAME, var);
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																										}															
			|	VAR_T OPERATOR IDENT_T																	{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($1);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $2);
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, $3);
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}																
			|	VAR_T OPERATOR NUM_T																	{
																											cout << "COMPARISON" << endl;
																											Node* comparisonNode = new Node(CONDITION, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											varName($1);
																											Node* varNameNode = new Node(NAME, var);
																											Node* operatorNode = new Node(CHARACTER, $2);
																											Node* valueNode = new Node(VALUE, "");
																											Node* numNode = new Node(NUMBER, $3);
																											list.push_back(*comparisonNode);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*operatorNode);
																											list.push_back(*valueNode);
																											list.push_back(*numNode);
																										}																	
			;
IF 			:	IF_T COMPARISON NEW_LINE_T																{
																											cout << "IF" << endl;
																											Node* ifNode = new Node(IF, "");
																											list.push_back(*ifNode);
																										}
			;
AN 			:	AN_T COMPARISON NEW_LINE_T																{
																											cout << "AN" << endl;
																											Node* andNode = new Node(AND, "");
																											list.push_back(*andNode);
																										}
			;
OR 			:	OR_T COMPARISON NEW_LINE_T																{
																											cout << "OR" << endl;
																											Node* orNode = new Node(OR, "");
																											list.push_back(*orNode);	
																										}
			;
MATHEX		:	VAR_T MATHEX_T NUM_T NEW_LINE_T															{
																											cout << "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, $1);
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											Node* numberNode = new Node(NUMBER, number);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*mathExSign);
																											list.push_back(*numberNode);
																											list.push_back(*newlineNode);
																										}
			|	NUM_T MATHEX_T NUM_T NEW_LINE_T															{
																											cout<< "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* numNode = new Node(NUMBER, $1);
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											Node* numNode2 = new Node(NUMBER, $3);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*numNode);
																											list.push_back(*mathExSign);
																											list.push_back(*numNode2);
																											list.push_back(*newlineNode);

																										}
			|	VAR_T MATHEX_T VAR_T NEW_LINE_T															{
																											cout << "MATHEX" << endl;
																											Node* mathex_node = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, $1);
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											Node* varNode2 = new Node(STRINGVARIABLE, "");
																											Node* varNameNode2 = new Node(NAME, $3);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathex_node);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*mathExSign);
																											list.push_back(*varNode2);
																											list.push_back(*varNameNode2);
																											list.push_back(*newlineNode);
																										}
			|	NUM_T MATHEX_T VAR_T NEW_LINE_T															{
																											cout << "MATHEX" << endl;
																											Node* mathExNode = new Node(MATHEX, "");
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, $3);
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											numberFct($1);
																											Node* numberNode = new Node(NUMBER, number);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExNode);
																											list.push_back(*numberNode);
																											list.push_back(*mathExSign);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*newlineNode);
																										}
			|	MATHEX MATHEX_T VAR_T NEW_LINE_T														{
																											cout << "MATHEX CONTINUED"<<endl;
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											Node* varNode = new Node(STRINGVARIABLE, "");
																											Node* varNameNode = new Node(NAME, $3);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExSign);
																											list.push_back(*varNode);
																											list.push_back(*varNameNode);
																											list.push_back(*newlineNode);
																											
																										}
			|	MATHEX MATHEX_T NUM_T NEW_LINE_T														{
																											cout << "MATHEX CONTINUED"<<endl;
																											Node* mathExSign = new Node(MATHEX_SIGN, $2);
																											Node* numNode = new Node(NUMBER, $3);
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*mathExSign);
																											list.push_back(*numNode);
																											list.push_back(*newlineNode);
																										}
			;
STRING_LINE	:	IDENT_T																					{
																											cout << "STRING" << endl;
																											cout << $1 << endl;
																											Node* textNode = new Node(STRINGLITERAL, $1);
																											list.push_back(*textNode);	
																										}	
			| 	VAR_T 																					{
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName($1);
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
			|	NUM_T																					{
																											cout << "Number in a string" << endl;
																											Node* numNode = new Node(NUMBER, $1);
																											list.push_back(*numNode);
																										}
			|	OFF_T																					{
																											cout<< "off in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, $1);
																											list.push_back(*textNode);
																										}
			|	ON_T																					{
																											cout<< "ON in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, $1);
																											list.push_back(*textNode);
																										}
			|	DIRECTION_T																				{
																											cout<< "direction token in a string" << endl;
																											Node* textNode = new Node(STRINGLITERAL, $1);
																											list.push_back(*textNode);
																										}
			|	MATHEX_T																				{
																											cout << "Mathex in a string" << endl;
																											cout << $1 << endl;
																											Node* textNode = new Node(STRINGLITERAL, $1);
																											list.push_back(*textNode);
																										}
			|	VARPROC VAR_T																			{
																											cout << "STRVAR" << endl;
																											Node* rule = new Node(RULE, $1);
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName($1);
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*rule);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
			|	STRING_LINE STRING_LINE
			|	STRING_LINE	NEW_LINE_T																	{
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
			;
EX 			:	GOTO_T IDENT_T NEW_LINE_T																{
																											cout << "GOTO" << endl;
																											cout << $2 << endl;
																											Node* gotoNode = new Node(GO, "");
																											Node* identifierNode = new Node(STRINGLITERAL, $2);
																											list.push_back(*gotoNode);
																											list.push_back(*identifierNode);	
																										}
			|	SP_T SIZE_T NEW_LINE_T																	{
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											numberFct($2);
																											Node* spacenNode = new Node(NUMBER, number);

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
			|	SP_T NUM_T NEW_LINE_T																	{
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, $2);

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
			|	SP_T NEW_LINE_T																			{
																											cout << "SP" << endl;
																											Node* spaceNode = new Node(SP, "");
																											
																											Node* spacenNode = new Node(NUMBER, "1");

																											list.push_back(*spaceNode);
																											list.push_back(*spacenNode);
																										}
			|	LL_T SIZE_T NEW_LINE_T																	{
																											cout << "LL" << endl;
																											Node* llNode = new Node(LL, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											llNode->addNode(sizeNode);
																											list.push_back(*llNode);
																										}
			|	LL_T NEW_LINE_T																			{
																											cout << "LL" << endl;
																											Node* llNode = new Node(LL, "");
																											list.push_back(*llNode);
																										}
			|	RH NEW_LINE_T
			|	MG_T NEW_LINE_T																			{
																											cout << "MG" << endl;
																											Node* mgNode = new Node(MG, "");
																											string s = $1;
																											Node* mgTNode = new Node(MG_TYPE, s.substr(4, 1));
																											Node* mgStrNode = new Node(STRINGLITERAL, s.substr(6, s.length() - 7));
																											list.push_back(*mgNode);
																											list.push_back(*mgTNode);
																											list.push_back(*mgStrNode);
																										}																	
			|	IN_T SIZE_T NEW_LINE_T																	{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
			|	IN_T VAR_T NEW_LINE_T																	{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											cout << "STRVAR" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName($1);
																							    			Node* varName0 = new Node(NAME, var);
																											
																											list.push_back(*inNode);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																											
																										}
			|	IN_T NUM_T NEW_LINE_T																	{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											
																											Node* sizeNode = new Node(NUMBER, $2);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
			|	IN_T SIZE_T IDENT_T NEW_LINE_T														{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											Node* ident = new Node(STRINGLITERAL, $3);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																											list.push_back(*ident);
																										}
			|	IN_T NUM_T IDENT_T NEW_LINE_T															{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											Node* sizeNode = new Node(NUMBER, $2);
																											Node* ident = new Node(STRINGLITERAL, $3);
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																											list.push_back(*ident);
																										}
			|	IN_T NEW_LINE_T																			{
																											cout << "IN" << endl;
																											Node* inNode = new Node(IN, "");
																											Node* sizeNode = new Node(NUMBER, "0");
																											list.push_back(*inNode);
																											list.push_back(*sizeNode);
																										}
			|	IR_T SIZE_T NEW_LINE_T																	{
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											list.push_back(*irNode);
																											list.push_back(*sizeNode);
																										}
			|	IR_T NEW_LINE_T																			{
																											cout << "IR" << endl;
																											Node* irNode = new Node(IR, "");
																											list.push_back(*irNode);
																										}
			|	CT NEW_LINE_T
			|	PA_T IDENT_T NEW_LINE_T																	{
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											paNode->addNode(identNode);
																											list.push_back(*paNode);
																										}
			|	PA_T NEW_LINE_T																			{
																											cout << "PA" << endl;
																											Node* paNode = new Node(PA, "");
																											list.push_back(*paNode);																											
																										}
			|	KP NEW_LINE_T
			|	CE NEW_LINE_T
			|	SU NEW_LINE_T
			|	DM NEW_LINE_T
			|	TB_T NUM_T NUM_T NEW_LINE_T																			{
																											cout << "TB" << endl;
																											Node* tbNode = new Node(TB, "");
																											numberFct($2);
																											Node* tbNum1Node = new Node(NUMBER, number);
																											numberFct($3);
																											Node* tbNum2Node = new Node(NUMBER, number);
																											list.push_back(*tbNode);
																											list.push_back(*tbNum1Node);
																											list.push_back(*tbNum2Node);
																										}
			|	SK_T NUM_T NEW_LINE_T																	{
																											cout << "SK" << endl;
																											Node* sknode = new Node(SK, "");
																											numberFct($2);
																											Node* skNumberNode = new Node(NUMBER, number);
																											list.push_back(*sknode);
																											list.push_back(*skNumberNode);
																										}
			|	US_T NEW_LINE_T																			{
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
			|	US_T																					{
																											cout << "UNDERSCORE" << endl;
																											Node* us = new Node(US, "");
																											list.push_back(*us);
																										}
			|	US_T ON_T NEW_LINE_T																	{
																											cout << "UNDERSCORE ON" << endl;
																											Node* us = new Node(US, "");
																											Node* onNode = new Node(ON, "");
																											list.push_back(*us);		
																											list.push_back(*onNode);																					
																										}
			|	US_T NUM_T 																				{
																											cout << "UNDERSCORE NUM" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											Node* us = new Node(US, "");
																											numberFct($2);
																											Node* numNode = new Node(NUMBER, number);
																											us->addNode(numNode);
																											list.push_back(*offUsNode);
																											list.push_back(*us);
																										}
			|	US_T NUM_T NEW_LINE_T																	{
																											cout << "UNDERSCORE NUM" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											Node* us = new Node(US, "");
																											numberFct($2);
																											Node* numNode = new Node(NUMBER, number);
																											us->addNode(numNode);
																											list.push_back(*offUsNode);
																											list.push_back(*us);
																										}
			| 	US_T OFF_T NEW_LINE_T																	{
																											cout << "UNDERSCORE OFF" << endl;
																											Node* offUsNode = new Node(OFF_US, "");
																											list.push_back(*offUsNode);	
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T NEW_LINE_T													{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											Node* stringLiteralNode = new Node(STRINGLITERAL, $4);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T IDENT_T IDENT_T NEW_LINE_T													{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += $4; 
																											st += " "; 
																											st += $5;
																											st += " "; 
																											st += $6;
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T IDENT_T IDENT_T IDENT_T NEW_LINE_T							{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += $4; 
																											st += " "; 
																											st += $5;
																											st += " "; 
																											st += $6;
																											st += " "; 
																											st += $7;
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T NEW_LINE_T			{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += $4; 
																											st += " "; 
																											st += $5;
																											st += " "; 
																											st += $6;
																											st += " "; 
																											st += $7;
																											st += " "; 
																											st += $8;
																											st += " "; 
																											st += $9;
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T NEW_LINE_T	{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += $4; 
																											st += " "; 
																											st += $5;
																											st += " "; 
																											st += $6;
																											st += " "; 
																											st += $7;
																											st += " "; 
																											st += $8;
																											st += " "; 
																											st += $9;
																											st += " "; 
																											st += $10;
																											st += " "; 
																											st += $11; 
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T IDENT_T IDENT_T NEW_LINE_T											{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											string st = "";
																											st += $4; 
																											st += $5;
																											Node* stringLiteralNode = new Node(STRINGLITERAL, st);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*stringLiteralNode);
																										}
			|	SE_T IDENT_T EQUAL_T SUBSTR_T VAR_T NUM_T NUM_T NEW_LINE_T								{
																											cout << "SE" << endl;
																											Node* seNode  = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											Node* substrNode = new Node(SUBSTR, "");
																											Node* sub1Node = new Node(NUMBER, $6);
																											Node* sub2Node = new Node(NUMBER, $7);

																											substrNode->addNode(sub1Node);
																											substrNode->addNode(sub2Node);
																											
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*substrNode);
																										}
			|	SE_T IDENT_T EQUAL_T VAR_T NEW_LINE_T													{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											Node* variable = new Node(STRINGVARIABLE, "");
																											varName($4);
																							    			Node* varName0 = new Node(NAME, var);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*variable);
																											list.push_back(*varName0);
																										}
			|	SE_T IDENT_T EQUAL_T NUM_T NEW_LINE_T													{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											numberFct($4);
																											Node* valueNode = new Node(VALUE, "");
																											Node* numberNode = new Node(NUMBER, number);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*numberNode);
																										}
			|	SE_T IDENT_T EQUAL_T SIZE_T NEW_LINE_T													{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode = new Node(CHARACTER, $3);
																											numberFct($4);
																											Node* valueNode = new Node(VALUE, "");
																											Node* numberNode = new Node(NUMBER, number);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											list.push_back(*valueNode);
																											list.push_back(*numberNode);
																										}
			|	SE_T IDENT_T EQUAL_T MATHEX																{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* identNode = new Node(STRINGLITERAL, $2);
																											Node* equalNode  = new Node(CHARACTER, $3);
																											list.push_back(*seNode);
																											list.push_back(*identNode);
																											list.push_back(*equalNode);
																											
																										}
			|	SE_T IDENT_T EQUAL_T VAR_UP_T NEW_LINE_T												{
																											cout << "SE" << endl;
																											Node* seNode = new Node(SE, "");
																											Node* seidentNode = new Node(STRINGLITERAL, $2);
																											Node* eqNode = new Node(CHARACTER, $3);
																											Node* valueNode = new Node(VALUE, "");
																											Node* valueDataNode = new Node(STRINGLITERAL, $4);
																											list.push_back(*seNode);
																											list.push_back(*seidentNode);
																											list.push_back(*eqNode);
																											list.push_back(*valueNode);
																											list.push_back(*valueDataNode);
																										}
			;
CE 			:	CE_T ON_T																				{
																											cout << "CE ON" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceOnNode = new Node(ON, "");
																											list.push_back(*ceNode);
																											list.push_back(*ceOnNode);
																										}
			|	CE_T VAR_T																				{
																											cout << "CE VAR" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceVarNode = new Node(STRINGVARIABLE, "");
																											varName($2);
																											Node* varNameNode = new Node(NAME, name);
																											ceVarNode->addNode(varNameNode);
																											ceNode->addNode(ceVarNode);
																											list.push_back(*ceNode);
																										}
			|	CE_T IDENT_T																			{
																											cout << "CE ident" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode = new Node(IDENTIFIER, $2);
																											ceNode->addNode(ceIdentNode);
																											list.push_back(*ceNode);
																										}
			|	CE_T OFF_T 																				{
																											cout << "CE OFF" << endl;
																											Node* ceOffNode = new Node(OFF_CE, "");
																											list.push_back(*ceOffNode);
																										}
			|   CE_T IDENT_T IDENT_T IDENT_T 															{
																											cout << "CE IDENT IDENT IDENT" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode1 = new Node(IDENTIFIER, $2);
																											Node* ceIdentNode2 = new Node(IDENTIFIER, $3);
																											Node* ceIdentNode3 = new Node(IDENTIFIER, $4);
																											ceNode->addNode(ceIdentNode1);																											
																											ceNode->addNode(ceIdentNode2);																											
																											ceNode->addNode(ceIdentNode3);																											
																											list.push_back(*ceNode);																											
																										}
			|   CE_T IDENT_T IDENT_T IDENT_T IDENT_T IDENT_T											{
																											cout << "CE IDENT IDENT IDENT IDENT IDENT" << endl;
																											Node* ceNode = new Node(CE, "");
																											Node* ceIdentNode1 = new Node(IDENTIFIER, $2);
																											Node* ceIdentNode2 = new Node(IDENTIFIER, $3);
																											Node* ceIdentNode3 = new Node(IDENTIFIER, $4);
																											Node* ceIdentNode4 = new Node(IDENTIFIER, $5);
																											Node* ceIdentNode5 = new Node(IDENTIFIER, $6);
																											ceNode->addNode(ceIdentNode1);																											
																											ceNode->addNode(ceIdentNode2);																											
																											ceNode->addNode(ceIdentNode3);																											
																											ceNode->addNode(ceIdentNode4);																											
																											ceNode->addNode(ceIdentNode5);																											
																											list.push_back(*ceNode);																											
																										}
			;
SU 			:	SU_T ON_T																				{
																											cout << "SU" << endl;
																											Node* suNode = new Node(SU, "");
																											Node* suOnNode = new Node(ON, "");
																											list.push_back(*suNode);
																											list.push_back(*suOnNode);
																										}
			|	SU_T OFF_T 																				{
																											cout << "SU OFF" << endl;
																											Node* suOffNode = new Node(OFF_SU, "");
																											list.push_back(*suOffNode);
																										}
			|	NEW_LINE_T
			;
DM 			:	DM_T IDENT_T ON_T																		{
																											cout << "DM" << endl;
																											Node* dmNode = new Node(DM, "");
																											Node* dmIdentNode = new Node(IDENTIFIER, "");
																											Node* dmOnNode = new Node(ON, "");
																											list.push_back(*dmNode);
																											list.push_back(*dmIdentNode);
																											list.push_back(*dmOnNode);
																										}
			|	DM_T OFF_T 																				{
																											cout << "DM OFF" << endl;
																											Node* dmOffNode = new Node(OFF_DM, "");
																											list.push_back(*dmOffNode);
																										}
			;
KP 			:	KP_T ON_T																				{
																											cout << "KP ON" << endl;
																											Node* kpNode = new Node(KP, "");
																											Node* kponNode = new Node(ON, "");
																											list.push_back(*kpNode);
																											list.push_back(*kponNode);
																										}
			|	KP_T NUM_T																				{
																											cout << "KP NUM" << endl;
																											Node* kpNode = new Node(KP, "");
																											Node* kpNumber = new Node(NUMBER, $2);
																											kpNode->addNode(kpNumber);
																											list.push_back(*kpNode);
																										}
			|	KP_T OFF_T																				{
																											cout << "KP OFF" << endl;
																											Node* kpoffNode = new Node(OFF_KP, "");
																											list.push_back(*kpoffNode);
			;																							}
CT 			:	CT_T STRING_LINE																		{
																											cout << "CT" << endl;
																											Node* ctNode = new Node(CT, "");
																											list.push_back(*ctNode);
																											
																										}
			;
OPTIONALDA	:	ROTATE_T
			|	DEPTH_T
			;
OPTINALMEASURE	:	NUM_T
				|	SIZE_T
				;
DA			:	DA_T IDENT_T SIZE_T SIZE_T WIDTH_T SIZE_T OPTIONALDA OPTINALMEASURE NEW_LINE_T			{
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, $2);
																											
																											numberFct($3);
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct($4);
																											Node* dayNode = new Node(NUMBER, number);

																											numberFct($6);
																											Node* daWidthNode = new Node(NUMBER, number);

																											string s = $7;
																											Node* daOptionalNode;
																											if(s == "rotate")
																											{
																												daOptionalNode = new Node(ROTATE, "");;
																											}
																											if(s == "depth")
																											{
																												daOptionalNode = new Node(DEPTH, "");;
																											}
																											numberFct($8);
																											Node* daRotateNumberNode = new Node(NUMBER, number);

																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											list.push_back(*daWidthNode);
																											list.push_back(*daOptionalNode);
																											list.push_back(*daRotateNumberNode);
																										}
			|	DA_T IDENT_T SIZE_T SIZE_T WIDTH_T SIZE_T NEW_LINE_T									{
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, $2);
																											
																											numberFct($3);
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct($4);
																											Node* dayNode = new Node(NUMBER, number);

																											numberFct($6);
																											Node* daWidthNode = new Node(NUMBER, number);

																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											list.push_back(*daWidthNode);
																										}
			|	DA_T IDENT_T SIZE_T SIZE_T NEW_LINE_T													{
																											cout << "DA" << endl;
																											Node* daNode = new Node(AREADEFINITION, "");
																											Node* daNameNode = new Node(NAME, $2);
																											
																											numberFct($3);
																											Node* daxNode = new Node(NUMBER, number);

																											numberFct($4);
																											Node* dayNode = new Node(NUMBER, number);
																											
																											list.push_back(*daNode);
																											list.push_back(*daNameNode);
																											list.push_back(*daxNode);
																											list.push_back(*dayNode);
																											
																										}
			;
SIZE_LIST	:	SIZE_T 																					{
																											styleSize($1);
																											Node* tpSizeNode = new Node(NUMBER, size);
																											list.push_back(*tpSizeNode);
																										}
			|	SIZE_T DIRECTION_T 																		{
																											styleSize($1);
																											Node* tpSizeNode = new Node(NUMBER, size);
																											
																											Node* dirNode;
																											
																											if(strcmp($2, "left") == 0)
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
			|	SIZE_LIST SIZE_LIST
			|	SIZE_LIST NEW_LINE_T																	{
																											Node* newlineNode = new Node(NEWLINE, "");
																											list.push_back(*newlineNode);
																										}
			;
AR			:	AR_T IDENT_T ON_T NEW_LINE_T															{
																											cout << "AR" << endl;
																											Node* area = new Node(AREA, "");
																											Node* areaIdent = new Node(NAME, $2);
																											Node* areaOn = new Node(ON, "");
																											list.push_back(*area);
																											list.push_back(*areaIdent);
																											list.push_back(*areaOn);
																										}
			|	AR_T OFF_T NEW_LINE_T																	{
																											cout << "AR" << endl;
																											Node* areaOff = new Node(OFF_AREA, "");
																											list.push_back(*areaOff);
																										}
			|	STYLE_T STYLE_T NEW_LINE_T																{
																											cout << "STYLE" << endl;
																											styleName($1);
																											styleSize($1);
																											if(strlen(size)>0){
																												Node* fontName = new Node(NAME, name);
																												Node* font = new Node(FONT, "");
																												Node* fontSize = new Node(NUMBER, size);
																												list.push_back(*font);
																												list.push_back(*fontName);
																												list.push_back(*fontSize);
																											}

																											styleName($2);
																											Node* fontType = new Node(TYPE, "bold");
																											list.push_back(*fontType);

																										}
			|	VAR_T '.' VAR_T	NEW_LINE_T																{
																											cout << "VARIABLE" << endl;
																											Node* variable = new Node(STRINGVARIABLE, "");

																											varName($1);
																											Node* varName1 = new Node(NAME, var);

																											Node* variable2 = new Node(STRINGVARIABLE, "");

																											varName($3);
																											Node* varName2 = new Node(NAME, var);

																											list.push_back(*variable);
																											list.push_back(*varName1);
																											list.push_back(*variable2);
																											list.push_back(*varName2);

																										}					
			|	VAR_T NEW_LINE_T																		{
																											cout << "VARIABLE" << endl;
																											Node* variable = new Node (STRINGVARIABLE, "");

																											varName($1);
																											Node* variableName = new Node(NAME, var);

																											list.push_back(*variable);
																											list.push_back(*variableName);
																										}																						
			|	SIZE_LIST																	
			|	BX																											
			;
FO			:	FO_T DIRECTION_T NEW_LINE_T																{
																											cout << "FO" << endl;
																											Node* foNode = new Node(FO, "");

																											Node* dirNode;
																											
																											if(strcmp($2, "left") == 0)
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
			|	FO_T ON_T NEW_LINE_T																	{
																											cout << "FO" << endl;				
																											Node* foNode = new Node(FO, "");
																											Node* onNode = new Node(ON, "");
																											
																											foNode->addNode(onNode);
																											list.push_back(*foNode);
																										}
			|	FO_T OFF_T NEW_LINE_T																	{
																											cout << "FO OFF" << endl;				
																											Node* offNode = new Node(OFF_FO, "");																											
																											list.push_back(*offNode);
																										}
			;
TI			:	TI_T IDENT_T NUM_T NEW_LINE_T															{
																											cout << "TI" << endl;
																											Node* tiNode = new Node(TI, "");
																											Node* charNode = new Node(CHARACTER, $2);
																										    Node* numNode = new Node(NUMBER, $3);
																											
																											list.push_back(*tiNode);
																											list.push_back(*charNode);
																											list.push_back(*numNode);
																										}
			;
NV			:	NV_T PAGE_T IDENT_T VAR_UP_T NEW_LINE_T													{
																											cout << "NV" << endl;
																										}
			;
BR_UP		:	BR_UP_T NEW_LINE_T																		{
																											cout << "BR_UP" << endl;
																										}
			;
BR			:	BR_T NEW_LINE_T																			{
																											strcpy($$, $1); 
																											cout << "BR" << endl;
																											Node* linebreak = new Node(LINEBREAK, ""); 
																											list.push_back(*linebreak); 
																										}
			;
NY			:	NY_T NEW_LINE_T																			{
																											cout << "NY" << endl;
																										}
			;
ENY			:	ENY_T NEW_LINE_T																		{
																											cout << "ENY" << endl;
																										}
			;
COMMENT		:	COMMENT_T NEW_LINE_T																	{
																											cout << "COMMENT" << endl;
																											cout << $1 << endl;
																										}
			|	COMMENT_T																				{
																											cout << "COMMENT" << endl;
																											cout << $1 << endl;
																										}
			;
// BX			:	BX_T OFF_T																				{
// 																											cout << "BOX OFF" << endl;
// 																											Node* boxOff = new Node(OFF_BOX, "");
// 																											list.push_back(*boxOff);	
// 																										}
// 			|	BX_T BX																					{
// 																											cout << "BOX" << endl;
// 																											Node* box = new Node(BOX, "");
// 																											list.push_back(*box);
																											
// 																										}
// 			|	BX IDENT_T																				{
// 																											cout<<"in box keyword"<<endl;
// 																											Node* keyword = new Node(RULE, $2);
// 																											list.push_back(*keyword);
// 																										}
// 			|	BX DIRECTION_T																			{
// 																											cout<<"in box direction"<<endl;
// 																											Node* dirNode;

// 																											if(strcmp($2, "left") == 0)
// 																											{
// 																												dirNode = new Node(LEFT, "");
// 																											}
// 																											else
// 																											{
// 																												dirNode = new Node(RIGHT, "");
// 																											}
// 																											list.push_back(*dirNode);

// 																										}
// 			|	BX SIZE_T																				{
// 																											numberFct($2);
// 																											Node* sizeNode = new Node(NUMBER, number);
// 																											list.push_back(*sizeNode);
// 																										}
// 			|	IDENT_T																					{
// 																											cout<<"in box keyword"<<endl;
// 																											Node* keyword = new Node(RULE, $1);
// 																											list.push_back(*keyword);
// 																										}
// 			|	DIRECTION_T																				{
// 																											cout<<"in box direction"<<endl;
// 																											Node* dirNode;

// 																											if(strcmp($1, "left") == 0)
// 																											{
// 																												dirNode = new Node(LEFT, "");
// 																											}
// 																											else
// 																											{
// 																												dirNode = new Node(RIGHT, "");
// 																											}
// 																											list.push_back(*dirNode);
// 																										}
// 			|	SIZE_T																					{
// 																											numberFct($1);
// 																											Node* sizeNode = new Node(NUMBER, number);
// 																											list.push_back(*sizeNode);
// 																										}
// 			|	BX NEW_LINE_T																			{
// 																											cout<< "END OF .bx LINE"<<endl;
// 																											Node* endNode = new Node(NEWLINE_BOX, "");
// 																											list.push_back(*endNode);
// 																										}
BX			:	BX_T DIRECTION_T DIRECTION_T NEW_LINE_T													{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* dir1Node;

																											if(strcmp($2, "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}

																											Node* dir2Node;

																											if(strcmp($3, "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box->addNode(dir1Node);
																											box->addNode(dir2Node);
																											list.push_back(*box);
																										}
			|	BX_T SIZE_T DIRECTION_T NEW_LINE_T														{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* dirNode;

																											if(strcmp($2, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}

																											box->addNode(sizeNode);
																											box->addNode(dirNode);
																											list.push_back(*box);
																										}
			|	BX_T SIZE_T SIZE_T NEW_LINE_T															{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($3);
																											Node* sizeNode2 = new Node(NUMBER, number);

																											box->addNode(sizeNode);
																											box->addNode(sizeNode2);
																											list.push_back(*box);
																										}
			| 	BX_T IDENT_T DIRECTION_T DIRECTION_T NEW_LINE_T											{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											Node* keyword = new Node(RULE, $2);

																											Node* dir1Node;

																											if(strcmp($3, "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}

																											Node* dir2Node;

																											if(strcmp($4, "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box->addNode(keyword);
																											box->addNode(dir1Node);
																											box->addNode(dir2Node);
																											list.push_back(*box);
																										}
			|	BX_T IDENT_T DIRECTION_T SIZE_T DIRECTION_T NEW_LINE_T									{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											Node* keyword = new Node(RULE, $2);

																											Node* dir1Node;

																											if(strcmp($3, "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}
																											numberFct($4);
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* dir2Node;

																											if(strcmp($5, "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box->addNode(keyword);
																											box->addNode(dir1Node);
																											box->addNode(sizeNode);
																											box->addNode(dir2Node);
																											list.push_back(*box);
																										}
			|	BX_T IDENT_T DIRECTION_T SIZE_T SIZE_T DIRECTION_T NEW_LINE_T							{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");
																											Node* keyword = new Node(RULE, $2);

																											Node* dir1Node;

																											if(strcmp($3, "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}
																											numberFct($4);
																											Node* sizeNode = new Node(NUMBER, number);

																											numberFct($5);
																											Node* sizeNode2 = new Node(NUMBER, number);

																											Node* dir2Node;

																											if(strcmp($6, "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box->addNode(keyword);
																											box->addNode(dir1Node);
																											box->addNode(sizeNode);
																											box->addNode(sizeNode2);																											
																											box->addNode(dir2Node);
																											list.push_back(*box);
																										}
			|	BX_T DIRECTION_T SIZE_T DIRECTION_T NEW_LINE_T											{
																											cout << "BOX" << endl;
																											Node* box = new Node(BOX, "");

																											Node* dir1Node;

																											if(strcmp($2, "left") == 0)
																											{
																												dir1Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir1Node = new Node(RIGHT, "");
																											}
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											Node* dir2Node;

																											if(strcmp($4, "left") == 0)
																											{
																												dir2Node = new Node(LEFT, "");
																											}
																											else
																											{
																												dir2Node = new Node(RIGHT, "");
																											}

																											box->addNode(dir1Node);
																											box->addNode(sizeNode);
																											box->addNode(dir2Node);
																											list.push_back(*box);
																										}
			|	BX_T IDENT_T NEW_LINE_T																	{
																											cout << "BOX" << endl;
																											if(strcmp($2, "can") == 0)
																											{
																												Node* boxnode = new Node(OFF_BOX, "");
																												list.push_back(*boxnode);
																											}
																											else
																											{
																												Node* boxNode = new Node(BOX, "");
																												Node* boxRule = new Node(RULE, $2);
																												boxNode->addNode(boxRule);
																												list.push_back(*boxNode);
																											}
																											
																										}
			|	BX_T DIRECTION_T SIZE_T NEW_LINE_T														{
																											cout << "BOX" << endl;
																											Node* boxNode = new Node(BOX, "");
																											Node* dirNode;																			
																											if(strcmp($2, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);

																											boxNode->addNode(dirNode);
																											boxNode->addNode(sizeNode);
																											list.push_back(*boxNode);
																										}
			|	BX_T DIRECTION_T SIZE_T SIZE_T NEW_LINE_T												{
																											cout << "BOX" << endl;
																											Node* boxNode = new Node(BOX, "");
																											Node* dirNode;	
																											if(strcmp($2, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($4);
																											Node* size2Node = new Node(NUMBER, number);

																											boxNode->addNode(dirNode);
																											boxNode->addNode(sizeNode);
																											boxNode->addNode(size2Node);
																											list.push_back(*boxNode);
																										}	
			|	BX_T OFF_T NEW_LINE_T																	{
																											cout << "BOX OFF" << endl;
																											Node* boxOff = new Node(OFF_BOX, "");
																											list.push_back(*boxOff);	
																										}
			|	BX_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T NEW_LINE_T 									{
																											Node* boxNode = new Node(BOX, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($3);
																											Node* size2Node = new Node(NUMBER, number);
																											Node* slashNode = new Node(RULE, $4);
																											numberFct($5);
																											Node* size3Node = new Node(NUMBER, number);
																											numberFct($6);
																											Node* size4Node = new Node(NUMBER, number);
																											
																											
																											boxNode->addNode(sizeNode);
																											boxNode->addNode(size2Node);
																											boxNode->addNode(slashNode);
																											boxNode->addNode(size3Node);
																											boxNode->addNode(size4Node);
																											list.push_back(*boxNode);

																										}
			|	BX_T IDENT_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T NEW_LINE_T 							{
																											Node* boxNode = new Node(BOX, "");
																											Node* IDENTNode = new Node(RULE, $2);
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($4);
																											Node* size2Node = new Node(NUMBER, number);
																											Node* slashNode = new Node(RULE, $5);
																											numberFct($6);
																											Node* size3Node = new Node(NUMBER, number);
																											numberFct($7);
																											Node* size4Node = new Node(NUMBER, number);
																											
																											boxNode->addNode(IDENTNode);
																											boxNode->addNode(sizeNode);
																											boxNode->addNode(size2Node);
																											boxNode->addNode(slashNode);
																											boxNode->addNode(size3Node);
																											boxNode->addNode(size4Node);
																											list.push_back(*boxNode);

																										}
			|	BX_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T NEW_LINE_T 				{
																											Node* boxNode = new Node(BOX, "");
																											numberFct($2);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($3);
																											Node* size2Node = new Node(NUMBER, number);
																											Node* IDENTNode = new Node(RULE, $4);
																											numberFct($5);
																											Node* size3Node = new Node(NUMBER, number);
																											numberFct($6);
																											Node* size4Node = new Node(NUMBER, number);
																											Node* slashNode = new Node(RULE, $7);
																											numberFct($8);
																											Node* size5Node = new Node(NUMBER, number);
																											numberFct($9);
																											Node* size6Node = new Node(NUMBER, number);
																											
																											boxNode->addNode(sizeNode);
																											boxNode->addNode(size2Node);
																											boxNode->addNode(IDENTNode);
																											boxNode->addNode(size3Node);
																											boxNode->addNode(size4Node);
																											boxNode->addNode(slashNode);
																											boxNode->addNode(size5Node);
																											boxNode->addNode(size6Node);
																											list.push_back(*boxNode);

																										}
			|	BX_T DIRECTION_T SIZE_T SIZE_T SIZE_T SIZE_T NEW_LINE_T 							{
																											Node* boxNode = new Node(BOX, "");
																											Node* dirNode;	
																											if(strcmp($2, "left") == 0)
																											{
																												dirNode = new Node(LEFT, "");
																											}
																											else
																											{
																												dirNode = new Node(RIGHT, "");
																											}
																											numberFct($3);
																											Node* sizeNode = new Node(NUMBER, number);
																											numberFct($4);
																											Node* size2Node = new Node(NUMBER, number);
																											numberFct($5);
																											Node* size3Node = new Node(NUMBER, number);
																											numberFct($6);
																											Node* size4Node = new Node(NUMBER, number);
																											
																											boxNode->addNode(dirNode);
																											boxNode->addNode(sizeNode);
																											boxNode->addNode(size2Node);
																											boxNode->addNode(size3Node);
																											boxNode->addNode(size4Node);
																											list.push_back(*boxNode);

																										}
			|	BX_T DIRECTION_T SIZE_T IDENT_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T IDENT_T SIZE_T SIZE_T NEW_LINE_T 	{
																															Node* boxNode = new Node(BOX, "");
																															Node* dirNode;	
																															if(strcmp($2, "left") == 0)
																															{
																																dirNode = new Node(LEFT, "");
																															}
																															else
																															{
																																dirNode = new Node(RIGHT, "");
																															}
																															numberFct($3);
																															Node* sizeNode = new Node(NUMBER, number);
																															Node* slashNode = new Node(RULE, $4);
																															numberFct($5);
																															Node* size2Node = new Node(NUMBER, number);
																															numberFct($6);
																															Node* size3Node = new Node(NUMBER, number);
																															Node* slash2Node = new Node(RULE, $7);
																															numberFct($8);
																															Node* size4Node = new Node(NUMBER, number);
																															numberFct($9);
																															Node* size5Node = new Node(NUMBER, number);
																															Node* slash3Node = new Node(RULE, $10);
																														
																															
																															boxNode->addNode(dirNode);
																															boxNode->addNode(sizeNode);
																															boxNode->addNode(slashNode);
																															boxNode->addNode(size2Node);
																															boxNode->addNode(size3Node);
																															boxNode->addNode(slash2Node);
																															boxNode->addNode(size4Node);
																															boxNode->addNode(size5Node);
																															boxNode->addNode(slash3Node);



																															numberFct($11);											
																															Node* size6Node = new Node (NUMBER, number);
																															numberFct($12);
																															Node* size7Node = new Node (NUMBER, number);
																															boxNode->addNode(size6Node);
																															boxNode->addNode(size7Node);
																															list.push_back(*boxNode);

																														}
			|	BX_T IDENT_T IDENT_T DIRECTION_T IDENT_T SIZE_T IDENT_T DIRECTION_T	NEW_LINE_T							{
																															Node* boxNode = new Node(BOX, "");
																															Node* keyword1 = new Node(RULE, $2);
																															Node* keyword2 = new Node(RULE, $3);
																															
																															Node* dirNode;	
																															if(strcmp($4, "left") == 0)
																															{
																																dirNode = new Node(LEFT, "");
																															}
																															else
																															{
																																dirNode = new Node(RIGHT, "");
																															}
																															Node* keyword3 = new Node(RULE, $5);
																															
																															numberFct($6);
																															Node* sizeNode = new Node(NUMBER, number);

																															Node* keyword4 = new Node(RULE, $7);

																															Node* dirNode2;	
																															if(strcmp($4, "left") == 0)
																															{
																																dirNode2 = new Node(LEFT, "");
																															}
																															else
																															{
																																dirNode2 = new Node(RIGHT, "");
																															}
																															boxNode->addNode(keyword1);
																															boxNode->addNode(keyword2);
																															boxNode->addNode(dirNode);
																															boxNode->addNode(keyword3);
																															boxNode->addNode(sizeNode);
																															boxNode->addNode(keyword4);
																															boxNode->addNode(dirNode2);																															
																															list.push_back(*boxNode);
																														}
			;


%%

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
	//startTreeBuilding(list);

	cout<< endl << endl <<"*******************FINISHED TREE*********************"<<endl;
	printTree(&list[0], 0);


	//save file
	ofstream file;
    file.open("template.ps");
    file << traverseGenerate(&list[0]);
    file.close();
    cout << "Template generated successfully!" << endl;
}