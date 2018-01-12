void printList(std::vector<Node> list)
{
	for(int i=0; i< list.size(); i++)
	{
		string p = "";
		if(list[i].getType() == DOCUMENT)
		{
			p+= "DOCUMENT";
		}
		if(list[i].getType() == AREADEFINITION)
		{
			p+= "AREADEFINITION";
		}
		if(list[i].getType() == AREA)
		{
			p+= "AREA";
		}
		if(list[i].getType() == STRINGLITERAL)
		{
			p+= "STRINGLITERAL";
		}
		if(list[i].getType() == NUMBER)
		{
			p+= "NUMBER";
		}
		if(list[i].getType() == NAME)
		{
			p+= "NAME";
		}
		if(list[i].getType() == TYPE)
		{
			p+= "TYPE";
		}
		if(list[i].getType() == STRINGVARIABLE)
		{
			p+= "STRINGVARIABLE";
		}
		if(list[i].getType() == LINEBREAK)
		{
			p+= "LINEBREAK";
		}
		if(list[i].getType() == BOX)
		{
			p+= "BOX";
		}
		if(list[i].getType() == TI)
		{
			p+= "TI";
		}
		if(list[i].getType() == CHARACTER)
		{
			p+= "CHARACTER";
		}
		if(list[i].getType() == TP)
		{
			p+= "TP";
		}
		if(list[i].getType() == FONT)
		{
			p+= "FONT";
		}
		if(list[i].getType() == US)
		{
			p+= "US";
		}
		if(list[i].getType() == ROTATE)
		{
			p+= "ROTATE";
		}
		if(list[i].getType() == SP)
		{
			p+= "SP";
		}
		if(list[i].getType() == ON)
		{
			p+= "ON";
		}
		if(list[i].getType() == OFF_AREA)
		{
			p+= "OFF_AREA";
		}
		if(list[i].getType() == OFF_BOX)
		{
			p+= "OFF_BOX";
		}
		if(list[i].getType() == IF)
		{
			p+= "IF";
		}
		if(list[i].getType() == CONDITION)
		{
			p+= "CONDITION";
		}
		if(list[i].getType() == RULE)
		{
			p+= "RULE";
		}
		if(list[i].getType() == VALUE)
		{
			p+= "VALUE";
		}
		if(list[i].getType() == AND)
		{
			p+= "AND";
		}
		if(list[i].getType() == OR)
		{
			p+= "OR";
		}
		if(list[i].getType() == THEN)
		{
			p+= "THEN";
		}
		if(list[i].getType() == ELSE)
		{
			p+= "ELSE";
		}
		if(list[i].getType() == SE)
		{
			p+= "SE";
		}
		if(list[i].getType() == GO)
		{
			p+= "GO";
		}
		if(list[i].getType() == LABEL)
		{
			p+= "LABEL";
		}
		if(list[i].getType() == CT)
		{
			p+= "CT";
		}
		if(list[i].getType() == KP)
		{
			p+= "KP";
		}
		if(list[i].getType() == OFF_KP)
		{
			p+= "OFF_KP";
		}
		if(list[i].getType() == RH)
		{
			p+= "RH";
		}
		if(list[i].getType() == OFF_RH)
		{
			p+= "OFF_RH";
		}
		if(list[i].getType() == EXECUTE)
		{
			p+= "EXECUTE";
		}
		if(list[i].getType() == CANCEL)
		{
			p+= "CANCEL";
		}
		if(list[i].getType() == LL)
		{
			p+= "LL";
		}
		if(list[i].getType() == IR)
		{
			p+= "IR";
		}
		if(list[i].getType() == IN)
		{
			p+= "IN";
		}
		if(list[i].getType() == PA)
		{
			p+= "PA";
		}
		if(list[i].getType() == DR)
		{
			p+= "DR";
		}
		if(list[i].getType() == WEIGHT)
		{
			p+= "WEIGHT";
		}
		if(list[i].getType() == MG)
		{
			p+= "MG";
		}
		if(list[i].getType() == MG_TYPE)
		{
			p+= "MG_TYPE";
		}
		if(list[i].getType() == LEFT)
		{
			p+= "LEFT";
		}
		if(list[i].getType() == RIGHT)
		{
			p+= "RIGHT";
		}
		if(list[i].getType() == FO)
		{
			p+= "FO";
		}
		if(list[i].getType() == CD)
		{
			p+= "CD";
		}
		if(list[i].getType() == NEWLINE)
		{
			p+= "NEWLINE";
		}
		cout<<i<<" "<<p<<" "<<list[i].getData()<<endl;
	}
}