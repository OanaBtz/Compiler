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

#include "./parser/treebuilding.cpp"
#include "./parser/printTree.cpp"
#include "./parser/printList.cpp"





%}

%union {
	char tokens[1000];
}

%token <tokens> NOTEQUAL_T OF_T CL_T CD_T TM_T DEPTH_T HY_T HR_T MG_T DR_T WEIGHT_T UPPERCASE_T LENGTH_T IN_T PA_T NS_T IR_T IF_T EL_T TH_T OR_T AN_T CT_T EQUAL_T GTHANE_T LTHANE_T GTHAN_T LTHAN_T CANCEL_T RH_T KP_T LL_T GOTO_T EXECUTE_T LABEL_T SE_T PM_T BR_T BR_UP_T NV_T NY_T PAGE_T ENY_T COMMENT_T TI_T DA_T FO_T ON_T OFF_T AR_T BX_T SP_T US_T SIZE_T STYLE_T IDENT_T VAR_UP_T VAR_T DIRECTION_T NUM_T WIDTH_T TP_T TAB_T ROTATE_T NEW_LINE_T BM_T SU_T DM_T GS_T SK_T CE_T
%type  <tokens> CT PM BR BR_UP NV NY ENY COMMENT TI DA KP FO AR BX RH TOKEN EX IF VARPROC OPERATOR AN COMPARISON OR OPTIONALDA OPTINALMEASURE STRING_LINE SIZE_LIST SU CE DM

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
			|	TOKEN COMMENT
			|	TOKEN STRING_LINE
			|	TOKEN OF_T NEW_LINE_T																	{
																											Node ofNode(OF, "");
																											list.push_back(ofNode);
																										}
			|	TOKEN OF_T SIZE_T NEW_LINE_T															{
																											Node ofNode(OF, "");
																											numberFct($3);
																											Node ofSizeNode(NUMBER, number);
																											list.push_back(ofNode);
																											list.push_back(ofSizeNode);
																										}
			|	TOKEN CL_T SIZE_T NEW_LINE_T															{
																											Node clNode(CL, "");
																											numberFct($3);
																											Node clnumNode(NUMBER, number);
																											list.push_back(clNode);
																											list.push_back(clnumNode);
																										}
			|	TOKEN CD_T NUM_T																		{
																											Node cdNode(CD, "");
																											Node cdValueNode(VALUE, "");
																											Node cdnumNode(NUMBER, $3);
																											list.push_back(cdNode);
																											list.push_back(cdValueNode);
																											list.push_back(cdnumNode);	
																										}
			|	TOKEN TM_T SIZE_T NEW_LINE_T															{
																											Node tmNode(TM, "");
																											numberFct($3);
																											Node tmsizeNode(NUMBER, number);
																											list.push_back(tmNode);
																											list.push_back(tmsizeNode);
																										}
			|	TOKEN BM_T SIZE_T NEW_LINE_T															{
																											Node bmNode(BM, "");
																											numberFct($3);
																											Node bmsizeNode(NUMBER, number);
																											list.push_back(bmNode);
																											list.push_back(bmsizeNode);
																										}
			| 	TOKEN TP_T 																				{
																											Node tpNode(TP, "");
																											list.push_back(tpNode);
																										}
			|	TOKEN HR_T IDENT_T SIZE_T SIZE_T SIZE_T SIZE_T NEW_LINE_T								{
																											cout << "HR WITH EXTRA STUFF" << endl;
																											Node hyNode(HR, "");
																											Node hyStrNode(STRINGLITERAL, $3);
																											Node hyS1Node(NUMBER, $4);
																											Node hyS2Node(NUMBER, $5);
																											Node hyS3Node(NUMBER, $6);
																											Node hyS4Node(NUMBER, $7);
																											list.push_back(hyNode);
																											list.push_back(hyStrNode);
																											list.push_back(hyS1Node);
																											list.push_back(hyS2Node);
																											list.push_back(hyS3Node);
																											list.push_back(hyS4Node);
																										}
			|	TOKEN HY_T ON_T NEW_LINE_T																{
																											cout << "HY ON" << endl;
																											Node hyNode(HY, "");
																											Node hyOnNode(ON, "");
																											list.push_back(hyNode);
																											list.push_back(hyOnNode);
																										}
			|	TOKEN HY_T OFF_T NEW_LINE_T																{
																											cout << "HY" << endl;
																											Node hyOffNode(OFF_HY, "");
																											list.push_back(hyOffNode);	
																										}
			| 	TOKEN HR_T DIRECTION_T DIRECTION_T NEW_LINE_T											{
																											cout << "HR" << endl;
																											Node hrNode(HR, "");
																											Node lNode(LEFT, "");
																											Node rNode(RIGHT, "");
																											list.push_back(hrNode);
																											list.push_back(lNode);
																											list.push_back(rNode);
																										}	
			|	TOKEN EL_T																				{
																											cout << "ELSE" << endl;
																											Node elNode(ELSE, "");
																											list.push_back(elNode);	
																										}																			
			|	TOKEN TH_T																				{
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											list.push_back(thNode);	
																										}
			|	TOKEN TH_T NEW_LINE_T																	{
																											cout << "THEN" << endl;
																											Node thNode(THEN, "");
																											list.push_back(thNode);	
																										}
			|	TOKEN DR_T IDENT_T WEIGHT_T SIZE_T NEW_LINE_T											{
																											cout << "DR" << endl;
																											Node drNode(DR, "");
																											Node drStrNode(STRINGLITERAL, $3);
																											Node drWeightNode(WEIGHT, "");
																											Node drSizeNode(NUMBER, $5);
																											list.push_back(drNode);
																											list.push_back(drStrNode);
																											list.push_back(drWeightNode);
																											list.push_back(drSizeNode);
																										}
			|   TOKEN LABEL_T NEW_LINE_T																{
																											cout << "LABEL" << endl;
																											string s = $2;
																											Node labelStrNode(STRINGLITERAL, s.substr(3));
																											Node labelNode(LABEL, s.substr(3));																											
																										}
			|	TOKEN STYLE_T																			{
																											cout << "STYLE" << endl;
																											Node font(FONT, "");
																											styleName($2);
																											styleSize($2);
																											Node fontName(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(font);
																												list.push_back(fontName);
																												// printf("%s\n", size);
																												Node fontSize(NUMBER, size);
																												list.push_back(fontSize);
																											}
																										}																																											
			|	TOKEN STYLE_T NEW_LINE_T																{
																											cout << "STYLE" << endl;
																											Node font(FONT, "");
																											styleName($2);
																											styleSize($2);
																											Node fontName(NAME, name);


																											if(strlen(size)>0){
																												list.push_back(font);
																												list.push_back(fontName);
																												// printf("%s\n", size);
																												Node fontSize(NUMBER, size);
																												list.push_back(fontSize);
																											}
																										}
			| 	TOKEN STYLE_T VAR_T NEW_LINE_T															{

																										}
			|	DA
			|	PM																						
			;
PM			:	PM_T SIZE_T NEW_LINE_T																	{
																											Node pmNode(PM, "");
																											numberFct($3);
																											Node pmsizeNode(NUMBER, number);
																											list.push_back(pmNode);
																											list.push_back(pmsizeNode);
																										}
			;
RH 			:	RH_T ON_T																				{
																											cout << "RH ON" << endl;
																											Node rhNode(RH, "");
																											Node rhonNode(ON, "");
																											list.push_back(rhNode);
																											list.push_back(rhonNode);
																										}
			|	RH_T OFF_T																				{
																											cout << "RH OFF" << endl;
																											Node rhoffNode(OFF_RH, "");
																											list.push_back(rhoffNode);
																										}
			| 	RH_T CANCEL_T																			{
																											cout << "RH CANCEL" << endl;
																											Node rhcancelNode(CANCEL, "");
																											list.push_back(rhcancelNode);
																										}
			
			| 	RH_T EXECUTE_T															
																										{
																											cout << "Rh EXECUTE" << endl;
																											Node rhexecuteNode(EXECUTE, "");
																											list.push_back(rhexecuteNode);
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
																											Node comparisonNode(CONDITION, "");
																											Node ruleNode(RULE, $1);
																											Node varNode(STRINGVARIABLE, "");
																											varName($2);
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, $3);
																											Node valueNode(VALUE, "");
																											Node stringLiteralNode(STRINGLITERAL, $4);
																											list.push_back(comparisonNode);
																											list.push_back(ruleNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}
			|	VARPROC VAR_T OPERATOR NUM_T															{
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node ruleNode(RULE, $1);
																											Node varNode(STRINGVARIABLE, "");
																											varName($2);
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, $3);
																											Node valueNode(VALUE, "");
																											Node numNode(NUMBER, $4);
																											list.push_back(comparisonNode);
																											list.push_back(ruleNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(numNode);
																										}															
			|	VAR_T OPERATOR IDENT_T																	{
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node varNode(STRINGVARIABLE, "");
																											varName($1);
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, $2);
																											Node valueNode(VALUE, "");
																											Node stringLiteralNode(STRINGLITERAL, $3);
																											list.push_back(comparisonNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}																
			|	VAR_T OPERATOR NUM_T																	{
																											cout << "COMPARISON" << endl;
																											Node comparisonNode(CONDITION, "");
																											Node varNode(STRINGVARIABLE, "");
																											varName($1);
																											Node varNameNode(NAME, var);
																											Node operatorNode(CHARACTER, $2);
																											Node valueNode(VALUE, "");
																											Node numNode(NUMBER, $3);
																											list.push_back(comparisonNode);
																											list.push_back(varNode);
																											list.push_back(varNameNode);
																											list.push_back(operatorNode);
																											list.push_back(valueNode);
																											list.push_back(numNode);
																										}																	
			;
IF 			:	IF_T COMPARISON NEW_LINE_T																{
																											cout << "IF" << endl;
																											Node ifNode(IF, "");
																											list.push_back(ifNode);
																										}
			;
AN 			:	AN_T COMPARISON NEW_LINE_T																{
																											cout << "AN" << endl;
																											Node andNode(AND, "");
																											list.push_back(andNode);
																										}
			;
OR 			:	OR_T COMPARISON NEW_LINE_T																{
																											cout << "OR" << endl;
																											Node orNode(OR, "");
																											list.push_back(orNode);	
																										}
			;
STRING_LINE	:	IDENT_T																					{
																											cout << "STRING" << endl;
																											cout << $1 << endl;
																											Node textNode(STRINGLITERAL, $1);
																											list.push_back(textNode);	
																										}	
			| 	VAR_T 																					{
																											cout << "STRVAR" << endl;
																											Node variable(STRINGVARIABLE, "");
																											varName($1);
																							    			Node varName0(NAME, var);
																											list.push_back(variable);
																											list.push_back(varName0);
																										}
			|	NUM_T																					{
																											cout << "Number in a string" << endl;
																											Node numNode(NUMBER, $1);
																											list.push_back(numNode);
																										}
			|	STRING_LINE STRING_LINE
			|	STRING_LINE	NEW_LINE_T																	{
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
			;
EX 			:	GOTO_T IDENT_T NEW_LINE_T																{
																											cout << "GOTO" << endl;
																											cout << $2 << endl;
																											Node gotoNode(GO, "");
																											Node identifierNode(STRINGLITERAL, $2);
																											list.push_back(gotoNode);
																											list.push_back(identifierNode);	
																										}
			|	LL_T SIZE_T NEW_LINE_T																	{
																											cout << "LL" << endl;
																											Node llNode(LL, "");
																											numberFct($2);
																											Node sizeNode(NUMBER, number);
																											list.push_back(llNode);
																											list.push_back(sizeNode);	
																										}
			|	RH NEW_LINE_T
			|	MG_T NEW_LINE_T																			{
																											cout << "MG" << endl;
																											Node mgNode(MG, "");
																											string s = $1;
																											Node mgTNode(MG_TYPE, s.substr(4, 1));
																											Node mgStrNode(STRINGLITERAL, s.substr(6, s.length() - 7));
																											list.push_back(mgNode);
																											list.push_back(mgTNode);
																											list.push_back(mgStrNode);
																										}																	
			|	IN_T SIZE_T NEW_LINE_T																	{
																											cout << "IN" << endl;
																											Node inNode(IN, "");
																											numberFct($2);
																											Node sizeNode(NUMBER, number);
																											list.push_back(inNode);
																											list.push_back(sizeNode);

																										}
			|	IR_T SIZE_T NEW_LINE_T																	{
																											cout << "IR" << endl;
																											Node irNode(IR, "");
																											numberFct($2);
																											Node sizeNode(NUMBER, number);
																											list.push_back(irNode);
																											list.push_back(sizeNode);
																										}
			|	CT NEW_LINE_T
			|	PA_T IDENT_T NEW_LINE_T																	{
																											cout << "PA" << endl;
																											Node paNode(PA, "");
																											Node identNode(STRINGLITERAL, $2);
																											list.push_back(paNode);
																											list.push_back(identNode);
																										}
			|	KP NEW_LINE_T
			|	CE NEW_LINE_T
			|	SU NEW_LINE_T
			|	DM NEW_LINE_T
			|	US_T																					{
																											cout << "UNDERSCORE" << endl;
																											Node us(US, "");
																											list.push_back(us);
																										}
			|	SE_T IDENT_T EQUAL_T VAR_UP_T NEW_LINE_T												{
																											cout << "SE" << endl;
																											Node seNode(SE, "");
																											Node identNode(STRINGLITERAL, $2);
																											Node equalNode(CHARACTER, $3);
																											Node valueNode(VALUE, "");
																											styleName($4);
																											Node stringLiteralNode(STRINGLITERAL, name);
																											list.push_back(seNode);
																											list.push_back(identNode);
																											list.push_back(equalNode);
																											list.push_back(valueNode);
																											list.push_back(stringLiteralNode);
																										}
			;
CE 			:	CE_T ON_T																				{
																											cout << "CE ON" << endl;
																											Node ceNode(CE, "");
																											Node ceOnNode(ON, "");
																											list.push_back(ceNode);
																											list.push_back(ceOnNode);
																										}
			|	CE_T OFF_T 																				{
																											cout << "CE OFF" << endl;
																											Node ceNode(CE, "");
																											Node ceOffNode(OFF_CE, "");
																											list.push_back(ceNode);
																											list.push_back(ceOffNode);
																										}
			;
SU 			:	SU_T ON_T																				{
																											cout << "SU" << endl;
																											Node suNode(SU, "");
																											Node suOnNode(ON, "");
																											list.push_back(suNode);
																											list.push_back(suOnNode);
																										}
			|	SU_T OFF_T 																				{
																											cout << "SU OFF" << endl;
																											Node suNode(SU, "");
																											Node suOffNode(OFF_SU, "");
																											list.push_back(suNode);
																											list.push_back(suOffNode);
																										}
			;
DM 			:	DM_T IDENT_T ON_T																		{
																											cout << "DM" << endl;
																											Node dmNode(DM, "");
																											Node dmIdentNode(IDENTIFIER, "");
																											Node dmOnNode(ON, "");
																											list.push_back(dmNode);
																											list.push_back(dmIdentNode);
																											list.push_back(dmOnNode);
																										}
			|	DM_T OFF_T 																				{
																											cout << "DM OFF" << endl;
																											Node dmNode(DM, "");
																											Node dmOffNode(OFF_DM, "");
																											list.push_back(dmNode);
																											list.push_back(dmOffNode);
																										}
			;
KP 			:	KP_T ON_T																				{
																											cout << "KP ON" << endl;
																											Node kpNode(KP, "");
																											Node kponNode(ON, "");
																											list.push_back(kpNode);
																											list.push_back(kponNode);
																										}
			|	KP_T OFF_T																				{
																											cout << "KP OFF" << endl;
																											Node kpoffNode(OFF_KP, "");
																											list.push_back(kpoffNode);
			;																							}
CT 			:	CT_T VAR_T																				{
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGVARIABLE, "");
																											Node ctvarnameNode(NAME, $2);
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
																											list.push_back(ctvarnameNode);
																										}
			|	CT_T IDENT_T																			{
																											cout << "CT" << endl;
																											Node ctNode(CT, "");
																											Node ctvarNode(STRINGLITERAL, "");
																											list.push_back(ctNode);
																											list.push_back(ctvarNode);
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
																											Node daNode(AREADEFINITION, "");
																											Node daNameNode(NAME, $2);
																											
																											numberFct($3);
																											Node daxNode(NUMBER, number);

																											numberFct($4);
																											Node dayNode(NUMBER, number);

																											numberFct($6);
																											Node daWidthNode(NUMBER, number);

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
																											Node daRotateNumberNode(NUMBER, number);

																											list.push_back(daNode);
																											list.push_back(daNameNode);
																											list.push_back(daxNode);
																											list.push_back(dayNode);
																											list.push_back(daWidthNode);
																											list.push_back(*daOptionalNode);
																											list.push_back(daRotateNumberNode);
																										}
			|	DA_T IDENT_T SIZE_T SIZE_T WIDTH_T SIZE_T NEW_LINE_T									{
																											cout << "DA" << endl;
																											Node daNode(AREADEFINITION, "");
																											Node daNameNode(NAME, $2);
																											
																											numberFct($3);
																											Node daxNode(NUMBER, number);

																											numberFct($4);
																											Node dayNode(NUMBER, number);

																											numberFct($6);
																											Node daWidthNode(NUMBER, number);

																											list.push_back(daNode);
																											list.push_back(daNameNode);
																											list.push_back(daxNode);
																											list.push_back(dayNode);
																											list.push_back(daWidthNode);
																										}
			;
SIZE_LIST	:	SIZE_T 																					{
																											styleSize($1);
																											Node tpSizeNode(NUMBER, size);
																											list.push_back(tpSizeNode);
																										}
			|	SIZE_LIST SIZE_LIST
			|	SIZE_LIST NEW_LINE_T																	{
																											Node newlineNode(NEWLINE, "");
																											list.push_back(newlineNode);
																										}
			;
AR			:	AR_T IDENT_T ON_T NEW_LINE_T															{
																											cout << "AR" << endl;
																											Node area(AREA, "");
																											Node areaIdent(NAME, $2);
																											Node areaOn(ON, "");
																											list.push_back(area);
																											list.push_back(areaIdent);
																											list.push_back(areaOn);
																										}
			|	AR_T OFF_T NEW_LINE_T																	{
																											cout << "AR" << endl;
																											Node areaOff(OFF_AREA, "");
																											list.push_back(areaOff);
																										}
			|	STYLE_T STYLE_T NEW_LINE_T																{
																											cout << "STYLE" << endl;
																											styleName($1);
																											styleSize($1);
																											if(strlen(size)>0){
																												Node fontName(NAME, name);
																												Node font(FONT, "");
																												Node fontSize(NUMBER, size);
																												list.push_back(font);
																												list.push_back(fontName);
																												list.push_back(fontSize);
																											}

																											styleName($2);
																											Node fontType(TYPE, "bold");
																											list.push_back(fontType);

																										}
			|	VAR_T '.' VAR_T	NEW_LINE_T																{
																											cout << "VARIABLE" << endl;
																											Node variable(STRINGVARIABLE, "");

																											varName($1);
																											Node varName1(NAME, var);

																											Node variable2(STRINGVARIABLE, "");

																											varName($3);
																											Node varName2(NAME, var);

																											list.push_back(variable);
																											list.push_back(varName1);
																											list.push_back(variable2);
																											list.push_back(varName2);

																										}									
			|	VAR_T NEW_LINE_T																		{
																											cout << "VARIABLE" << endl;
																											Node variable(STRINGVARIABLE, "");

																											varName($1);
																											Node variableName(NAME, var);

																											list.push_back(variable);
																											list.push_back(variableName);
																										}																							
			|	SIZE_LIST																	
			|	BX																											
			;
FO			:	FO_T DIRECTION_T NEW_LINE_T																{
																											cout << "FO" << endl;
																										}
			;
TI			:	TI_T IDENT_T NUM_T NEW_LINE_T															{
																											cout << "TI" << endl;
																											Node tiNode(TI, "");
																											Node charNode(CHARACTER, $2);
																										    Node numNode(NUMBER, $3);
																											
																											list.push_back(tiNode);
																											list.push_back(charNode);
																											list.push_back(numNode);
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
																											Node linebreak(LINEBREAK, ""); 
																											list.push_back(linebreak); 
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
BX			:	BX_T DIRECTION_T DIRECTION_T NEW_LINE_T													{
																											cout << "BOX" << endl;
																											Node box(BOX, "");
																											list.push_back(box);
																										}
			|	BX_T OFF_T NEW_LINE_T																	{
																											cout << "BOX OFF" << endl;
																											Node boxOff(OFF_BOX, "");
																											list.push_back(boxOff);	
																										}
			|	SP_T SIZE_T NEW_LINE_T																	{
																											cout << "SP" << endl;
																											Node spaceNode(SP, "");
																											
																											numberFct($2);
																											Node spacenNode(NUMBER, number);

																											list.push_back(spaceNode);
																											list.push_back(spacenNode);
																										}
			;

%%

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