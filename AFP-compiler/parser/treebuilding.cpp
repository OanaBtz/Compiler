int lastKnownIfIndex = 0;

int addNodeOfType(int addToIndex, int fromIndex)
{
	cout << "Node is " << list[fromIndex].getType() << endl;
	switch(list[fromIndex].getType())
	{
			case EXECUTE: 	list[fromIndex].addNode(&list[fromIndex]);
							break;
			case OF:	list[addToIndex].addNode(&list[fromIndex]);
						if(list[fromIndex+1].getType() == NUMBER)
						{
							list[fromIndex].addNode(&list[fromIndex+1]);
							return fromIndex + 1;
						}
						return fromIndex;
			case CL:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
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
			case STRINGLITERAL:		list[addToIndex].addNode(&list[fromIndex]);
						return fromIndex;
			case ON: 	list[addToIndex].addNode(&list[fromIndex]);
						return fromIndex;
			case IDENTIFIER:	list[addToIndex].addNode(&list[fromIndex]);
								return fromIndex;
			case LINEBREAK:		list[addToIndex].addNode(&list[fromIndex]);
								return fromIndex;
			case STRINGVARIABLE:		list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case US:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case TM:	
			case BM:	
			case PM:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case TI: 	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						list[fromIndex].addNode(&list[fromIndex+2]);
						return fromIndex+2;
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
			case SP:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex + 1;
			case LL:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex + 1;
			case IN:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case IR:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case PA:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
			case DR:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						list[fromIndex].addNode(&list[fromIndex+2]);
						list[fromIndex].addNode(&list[fromIndex+3]);
						return fromIndex + 3;
			case MG:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						list[fromIndex].addNode(&list[fromIndex+2]);
						return fromIndex+2;
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
			case GO:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						return fromIndex+1;
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
			case SE:	list[addToIndex].addNode(&list[fromIndex]);
						list[fromIndex].addNode(&list[fromIndex+1]);
						list[fromIndex].addNode(&list[fromIndex+2]);
						list[fromIndex].addNode(&list[fromIndex+3]);
						list[fromIndex+3].addNode(&list[fromIndex+4]);
						return fromIndex+4;
			case LABEL:			list[addToIndex].addNode(&list[fromIndex]);
								return fromIndex;
			case HY:			list[addToIndex].addNode(&list[fromIndex]);
								list[fromIndex].addNode(&list[fromIndex+1]);
								return fromIndex+1;
			case OFF_HY:		list[addToIndex].addNode(&list[fromIndex]);
								return fromIndex;
			case NEWLINE:	list[addToIndex].addNode(&list[fromIndex]);
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
			case CONDITION:		int j = fromIndex + 1;
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
		break;
	}
	return fromIndex;	
}

int recursiveContainerTraversal(int addToIndex, int fromIndex, int off_type)
{
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
		j = addNodeOfType(fromIndex, j);
	}
	list[fromIndex].addNode(&list[j]);
	return j;
}

void startTreeBuilding(std::vector<Node> list)
{
	int j;
	
	for(int i=0;i<list.size();i++){
		i = addNodeOfType(0, i);
		cout << i << endl;
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
			case SU: 		j = recursiveContainerTraversal(0, i, OFF_SU);
							break;
			case CE: 		j = recursiveContainerTraversal(0, i, OFF_CE);
							break;
			case DM: 		j = recursiveContainerTraversal(0, i, OFF_DM);
							break;
		}
	}
}