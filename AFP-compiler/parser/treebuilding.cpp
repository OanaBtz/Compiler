#include "./printing.cpp"

int lastKnownIfIndex = 0;

int connectNextNodes(int addToIndex, int fromIndex, int amount)
{
	list[addToIndex].addNode(&list[fromIndex]);
	for(int i = 1; i < amount + 1; i++)
	{
		list[fromIndex].addNode(&list[fromIndex + i]);
	}
	return fromIndex + amount;
}

int addNodeOfType(int addToIndex, int fromIndex)
{
	cout << "Building node: ";
	printNode(&list[fromIndex]);
	switch(list[fromIndex].getType())
	{
		case STRINGLITERAL:			return connectNextNodes(addToIndex, fromIndex, 0);
		case ON: 					return connectNextNodes(addToIndex, fromIndex, 0);
		case IDENTIFIER:			return connectNextNodes(addToIndex, fromIndex, 0);
		case LINEBREAK:				return connectNextNodes(addToIndex, fromIndex, 0);
		case STRINGVARIABLE:		return connectNextNodes(addToIndex, fromIndex, 1);
		case US:					return connectNextNodes(addToIndex, fromIndex, 1);
		case TM:			return connectNextNodes(addToIndex, fromIndex, 1);
		case BM:			return connectNextNodes(addToIndex, fromIndex, 1);
		case PM:			return connectNextNodes(addToIndex, fromIndex, 1);
		case TI: 			return connectNextNodes(addToIndex, fromIndex, 2);
		case SP:			return connectNextNodes(addToIndex, fromIndex, 1);
		case LL:			return connectNextNodes(addToIndex, fromIndex, 1);
		case IN:			return connectNextNodes(addToIndex, fromIndex, 1);
		case IR:			return connectNextNodes(addToIndex, fromIndex, 1);
		case PA:			return connectNextNodes(addToIndex, fromIndex, 1);
		case DR:			return connectNextNodes(addToIndex, fromIndex, 3);
		case MG:			return connectNextNodes(addToIndex, fromIndex, 2);
		case SE:			return connectNextNodes(addToIndex, fromIndex, 4);
		case LABEL:			return connectNextNodes(addToIndex, fromIndex, 0);
		case HY:			return connectNextNodes(addToIndex, fromIndex, 1);
		case OFF_HY:		return connectNextNodes(addToIndex, fromIndex, 0);
		case NEWLINE:		return connectNextNodes(addToIndex, fromIndex, 0);
		case SK:			return connectNextNodes(addToIndex, fromIndex, 1);
		case TB:			return connectNextNodes(addToIndex, fromIndex, 2);
		case GO:			return connectNextNodes(addToIndex, fromIndex, 1);
		case CL:			return connectNextNodes(addToIndex, fromIndex, 1);
		case EXECUTE: 	list[fromIndex].addNode(&list[fromIndex]);
						break;
			case OF:	list[addToIndex].addNode(&list[fromIndex]);
						if(list[fromIndex+1].getType() == NUMBER)
						{
							list[fromIndex].addNode(&list[fromIndex+1]);
							return fromIndex + 1;
						}
						return fromIndex;
			case CD:	{
							list[addToIndex].addNode(&list[fromIndex]);
							list[fromIndex].addNode(&list[fromIndex+1]);
							list[fromIndex+1].addNode(&list[fromIndex+2]);
							int ii = 3;
							while(list[fromIndex + ii].getType() == NUMBER)
							{
								list[fromIndex].addNode(&list[fromIndex+ii++]);
							}
							return fromIndex + ii - 1;
						}
			case FONT: 	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						list[fromIndex].addNode(&list[fromIndex+2]);
						if(list[fromIndex+3].getType()==TYPE)
						{
							list[fromIndex].addNode(&list[fromIndex+3]);
							fromIndex+=3;
						}
						else
						{
							fromIndex+=2;
						}
						return fromIndex;
			case TP:	{
							list[addToIndex].addNode(&list[fromIndex]);
							int ii = 1;
							while(list[fromIndex + ii].getType() == NUMBER)
							{
								list[fromIndex].addNode(&list[fromIndex+ii++]);
							}
							return fromIndex + ii - 1;
						}
			case CT:	{
							list[addToIndex].addNode(&list[fromIndex]);
							int ii = fromIndex + 1;
							while(list[ii].getType() == STRINGLITERAL || list[ii].getType() == STRINGVARIABLE)
							{
								ii = addNodeOfType(fromIndex, ii);
								ii++;
							}
							return ii - 1;
						}
			case HR:	list[addToIndex].addNode(&list[fromIndex]);
						if(list[fromIndex+1].getType() == STRINGLITERAL && list[fromIndex+2].getType() == NUMBER && list[fromIndex+3].getType() == NUMBER && list[fromIndex+4].getType() == NUMBER && list[fromIndex+5].getType() == NUMBER)
						{
							list[fromIndex].addNode(&list[fromIndex+1]);
							list[fromIndex].addNode(&list[fromIndex+2]);
							list[fromIndex].addNode(&list[fromIndex+3]);
							list[fromIndex].addNode(&list[fromIndex+4]);
							list[fromIndex].addNode(&list[fromIndex+5]);
							fromIndex += 5;	
						}
						if(list[fromIndex+1].getType() == LEFT && list[fromIndex+2].getType() == RIGHT)
						{
							list[fromIndex].addNode(&list[fromIndex+1]);
							list[fromIndex].addNode(&list[fromIndex+2]);
							fromIndex += 2;
						}
						return fromIndex;
			case THEN:			{
									list[lastKnownIfIndex].addNode(&list[fromIndex]);
									if(list[fromIndex +1].getType() == STRINGLITERAL || list[fromIndex +1].getType() == STRINGVARIABLE)
									{
										int ii = fromIndex + 1;
										while(list[ii].getType() == STRINGLITERAL || list[ii].getType() == STRINGVARIABLE)
										{
											ii = addNodeOfType(fromIndex, ii);
											ii++;
										}
										return ii - 1;
									}
									int thenindex = addNodeOfType(fromIndex, fromIndex + 1);
									while(list[thenindex + 1].getType() == THEN)
									{
										
										thenindex = addNodeOfType(fromIndex, thenindex + 2);
									}
									return thenindex;
								}
			case ELSE:			{
									list[lastKnownIfIndex].addNode(&list[fromIndex]);
									if(list[fromIndex +1].getType() == STRINGLITERAL || list[fromIndex +1].getType() == STRINGVARIABLE)
									{
										int ii = fromIndex + 1;
										while(list[ii].getType() == STRINGLITERAL || list[ii].getType() == STRINGVARIABLE)
										{
											ii = addNodeOfType(fromIndex, ii);
											ii++;
										}
										return ii - 1;
									}
									int elseindex = addNodeOfType(fromIndex, fromIndex + 1);
									while(list[elseindex + 1].getType() == ELSE)
									{
										
										elseindex = addNodeOfType(fromIndex, elseindex + 2);
									}
									return elseindex;
								}
			case CONDITION:		{
									int j = fromIndex + 1;
									for (; list[j].getType() != VALUE ; ++j)
									{
										list[fromIndex].addNode(&list[j]);
										if(list[j].getType() == STRINGVARIABLE)
										{
											list[j].addNode(&list[j+1]);
											j++;
										}
									}
									list[j].addNode(&list[j+1]);
									list[fromIndex].addNode(&list[j]);
									list[j+2].addNode(&list[fromIndex]);
									if(list[j+2].getType() == IF)
									{
										list[addToIndex].addNode(&list[j+2]);
										lastKnownIfIndex = j+2;
									}
									else
									{
										list[lastKnownIfIndex].addNode(&list[j+2]);
									}
									return j+2;
								}
		break;
	}
	return fromIndex;	
}

int recursiveContainerTraversal(int addToIndex, int fromIndex, int off_type)
{
	cout << "   >>    Container start" << endl;
	list[addToIndex].addNode(&list[fromIndex]);
	int j = fromIndex+1;
	for(;list[j].getType()!=off_type;j++)
	{
		switch(list[j].getType())
		{
			case NAME:		list[fromIndex].addNode(&list[j]);
							break;
			case EXECUTE: 	list[fromIndex].addNode(&list[j]);
							break;
			case CANCEL: 	list[fromIndex].addNode(&list[j]);
							break;
			case KP:		j = recursiveContainerTraversal(fromIndex, j, OFF_KP);
							break;
			case RH:		j = recursiveContainerTraversal(fromIndex, j, OFF_RH);
							break;
			case AREA: 		j = recursiveContainerTraversal(fromIndex, j, OFF_AREA);
							break;
			case BOX:		j = recursiveContainerTraversal(fromIndex, j, OFF_BOX);
							break; 
			case SU: 		j = recursiveContainerTraversal(fromIndex, j, OFF_SU);
							break;
			case CE: 		j = recursiveContainerTraversal(fromIndex, j, OFF_CE);
							break;
			case DM: 		j = recursiveContainerTraversal(fromIndex, j, OFF_DM);
							break;
		}
		if(j > list.size() - 1)
		{
			cout << "ERROR: ";
			printNode(&list[fromIndex]);
			cout << "Missing OFF node";
			exit(0);
		}
		j = addNodeOfType(fromIndex, j);
	}
	list[fromIndex].addNode(&list[j]);
	cout << "   <<    Container end" << endl;
	return j;
}

void startTreeBuilding(std::vector<Node> list)
{
	int j;
	
	for(int i=0;i<list.size();i++){
		i = addNodeOfType(0, i);
		switch(list[i].getType()){
			case AREADEFINITION:	list[0].addNode(&list[i]);
									for(j=i+1; list[j].getType()!=AREADEFINITION && list[j].getType()!=AREA && list[j].getType()!=TI && list[j].getType()!=RH;j++)
									{
										if(list[j].getType()==ROTATE || list[j].getType()==DEPTH){
											list[j].addNode(&list[j+1]);
											list[i].addNode(&list[j]);
											j++;
										}else
										{
											list[i].addNode(&list[j]);							
										}
									}
									i=j-1;
									break;
			case KP:		i = recursiveContainerTraversal(0, i, OFF_KP);
							break;
			case RH:		i = recursiveContainerTraversal(0, i, OFF_RH);
							break;
			case AREA: 		i = recursiveContainerTraversal(0, i, OFF_AREA);
							break;
			case SU: 		i = recursiveContainerTraversal(0, i, OFF_SU);
							break;
			case CE: 		i = recursiveContainerTraversal(0, i, OFF_CE);
							break;
			case DM: 		i = recursiveContainerTraversal(0, i, OFF_DM);
							break;
		}
	}
}