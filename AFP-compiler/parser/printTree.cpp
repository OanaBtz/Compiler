void printTree(Node* currentNode, int indent)
{
	string p;
	for (int i = 0; i < indent; ++i)
	{
		p += "\t";
	}
	if(currentNode->getType() == DOCUMENT)
	{
		p+= "DOCUMENT";
	}
	if(currentNode->getType() == AREADEFINITION)
	{
		p+= "AREADEFINITION";
	}
	if(currentNode->getType() == AREA)
	{
		p+= "AREA";
	}
	if(currentNode->getType() == STRINGLITERAL)
	{
		p+= "STRINGLITERAL";
	}
	if(currentNode->getType() == NUMBER)
	{
		p+= "NUMBER";
	}
	if(currentNode->getType() == NAME)
	{
		p+= "NAME";
	}
	if(currentNode->getType() == TYPE)
	{
		p+= "TYPE";
	}
	if(currentNode->getType() == STRINGVARIABLE)
	{
		p+= "STRINGVARIABLE";
	}
	if(currentNode->getType() == LINEBREAK)
	{
		p+= "LINEBREAK";
	}
	if(currentNode->getType() == BOX)
	{
		p+= "BOX";
	}
	if(currentNode->getType() == TI)
	{
		p+= "TI";
	}
	if(currentNode->getType() == CHARACTER)
	{
		p+= "CHARACTER";
	}
	if(currentNode->getType() == TP)
	{
		p+= "TP";
	}
	if(currentNode->getType() == FONT)
	{
		p+= "FONT";
	}
	if(currentNode->getType() == US)
	{
		p+= "US";
	}
	if(currentNode->getType() == ROTATE)
	{
		p+= "ROTATE";
	}
	if(currentNode->getType() == SP)
	{
		p+= "SP";
	}
	if(currentNode->getType() == ON)
	{
		p+= "ON";
	}
	if(currentNode->getType() == OFF_AREA)
	{
		p+= "OFF_AREA";
	}
	if(currentNode->getType() == OFF_BOX)
	{
		p+= "OFF_BOX";
	}
	if(currentNode->getType() == IF)
	{
		p+= "IF";
	}
	if(currentNode->getType() == CONDITION)
	{
		p+= "CONDITION";
	}
	if(currentNode->getType() == RULE)
	{
		p+= "RULE";
	}
	if(currentNode->getType() == VALUE)
	{
		p+= "VALUE";
	}
	if(currentNode->getType() == AND)
	{
		p+= "AND";
	}
	if(currentNode->getType() == OR)
	{
		p+= "OR";
	}
	if(currentNode->getType() == THEN)
	{
		p+= "THEN";
	}
	if(currentNode->getType() == ELSE)
	{
		p+= "ELSE";
	}
	if(currentNode->getType() == SE)
	{
		p+= "SE";
	}
	if(currentNode->getType() == GO)
	{
		p+= "GO";
	}
	if(currentNode->getType() == LABEL)
	{
		p+= "LABEL";
	}
	if(currentNode->getType() == CT)
	{
		p+= "CT";
	}
	if(currentNode->getType() == KP)
	{
		p+= "KP";
	}
	if(currentNode->getType() == OFF_KP)
	{
		p+= "OFF_KP";
	}
	if(currentNode->getType() == RH)
	{
		p+= "RH";
	}
	if(currentNode->getType() == OFF_RH)
	{
		p+= "OFF_RH";
	}
	if(currentNode->getType() == EXECUTE)
	{
		p+= "EXECUTE";
	}
	if(currentNode->getType() == CANCEL)
	{
		p+= "CANCEL";
	}
	if(currentNode->getType() == LL)
	{
		p+= "LL";
	}
	if(currentNode->getType() == IR)
	{
		p+= "IR";
	}
	if(currentNode->getType() == IN)
	{
		p+= "IN";
	}
	if(currentNode->getType() == PA)
	{
		p+= "PA";
	}
	if(currentNode->getType() == DR)
	{
		p+= "DR";
	}
	if(currentNode->getType() == WEIGHT)
	{
		p+= "WEIGHT";
	}
	if(currentNode->getType() == MG)
	{
		p+= "MG";
	}
	if(currentNode->getType() == MG_TYPE)
	{
		p+= "MG_TYPE";
	}
	if(currentNode->getType() == LEFT)
	{
		p+= "LEFT";
	}
	if(currentNode->getType() == RIGHT)
	{
		p+= "RIGHT";
	}
	if(currentNode->getType() == FO)
	{
		p+= "FO";
	}
	if(currentNode->getType() == HR)
	{
		p+= "HR";
	}
	if(currentNode->getType() == BM)
	{
		p+= "BM";
	}
	if(currentNode->getType() == CD)
	{
		p+= "CD";
	}
	if(currentNode->getType() == NEWLINE)
	{
		p+= "NEWLINE";
	}
	if(currentNode->getType() == CL)
	{
		p+= "CL";
	}
	if(currentNode->getType() == OF)
	{
		p+= "OF";
	}
	p += " " + currentNode->getData();
	cout << p << endl;
	for (int i = 0; i < currentNode->getNodes().size(); ++i)
	{
		printTree(currentNode->getNodes().at(i), indent+1);
	}
}