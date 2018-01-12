#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>

using namespace std;

char tabChar;



vector<string> tabIndents;
int tabIndex = 0;

int boxYPosition;
int boxXPosition;
int boxWidth;

string globalFont;
string tabDefaultValue;

enum Type
{
    DOCUMENT,
    AREADEFINITION,
    AREA,
    STRINGLITERAL,
    NUMBER,
    NAME,
    TYPE,
    STRINGVARIABLE,
    LINEBREAK,
    BOX,
    TI,
    CHARACTER,
    TP,
    FONT,
    US,
    ROTATE,
    SP,
    ON,
    OFF_AREA,
    OFF_BOX,
    IF,
    CONDITION,
    RULE,
    VALUE,
    AND,
    OR,
    THEN,
    ELSE,
    SE,
    GO,
    LABEL,
    CT,
    KP,
    OFF_KP,
    RH,
    OFF_RH,
    EXECUTE,
    CANCEL,
    LL,
    IR,
    IN,
    PA,
    DR,
    WEIGHT,
    MG,
    MGTYPE,
    FO,
    LEFT,
    RIGHT,
    HY,
    HR,
    TM,
    BM,
    PM,
    CD,
    CL,
    OF,
    OFF_HY,
    NEWLINE,
    MG_TYPE,
    DEPTH,
    SU,
    OFF_SU,
    DM,
    OFF_DM,
    CE,
    OFF_CE,
    IDENTIFIER
};

class Node
{
    private:
    Node* parentNode;
    Type type;
    vector<Node*> nodes;
    string data;

    public:
    Node(Type type, string data)
    {
        this->type = type;
        this->data = data;
        this->parentNode = NULL;

        if(type == TYPE && data == "FED")
        {
            data = "bold";
        }
    }

    Type getType()
    {
        return type;
    }
    string getData()
    {
        return data;
    }

    void addNode(Node* node)
    {
        nodes.push_back(node);
        node->setParent(this);
    }

    std::vector<Node*> getNodes()
    {
        return nodes;
    }

    void setParent(Node* node)
    {
        parentNode = node;
    }

    Node* getParent()
    {
        return parentNode;
    }
};

Node* findAreaDefinition(Node* node, string name, Node* result)
{
    if(node->getType() == DOCUMENT)
    {
        for (unsigned long i = 0; i < node->getNodes().size(); ++i)
        {
            if(node->getNodes().at(i)->getType() == AREADEFINITION)
            {
                if(node->getNodes().at(i)->getNodes().at(0)->getData() == name)
                {
                    return node->getNodes().at(i);
                }
            }
        }
    }
    if(node->getParent() != NULL)
    {
        result = findAreaDefinition(node->getParent(), name, result);
    }
    return result;
}

bool traverseTypecheck(Node* currentNode, bool hasNoErrors){
    ofstream fout("labels.out", ios::out|ios::trunc);
    fout << "";
    fout.close();

    for (int i = 0; i < currentNode->getNodes().size(); ++i){
        hasNoErrors = traverseTypecheck(currentNode->getNodes().at(i), hasNoErrors);
        if(!hasNoErrors){
            break;
        }
    }
    if(hasNoErrors){
        if(currentNode->getType() == AREADEFINITION){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "AREADEFINITION must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(hasNoErrors){
                if(currentNode->getNodes().at(0)->getType() != NAME
                || currentNode->getNodes().at(1)->getType() != NUMBER
                || currentNode->getNodes().at(2)->getType() != NUMBER
                || currentNode->getNodes().at(3)->getType() != NUMBER){
                    cout << "Wrong syntax in AREADEFINITION. Must be: NAME NUMBER NUMBER NUMBER (ROTATE)" << endl;
                    hasNoErrors = false;
                }
                if(currentNode->getNodes().size() > 4){
                    if(currentNode->getNodes().at(4)->getType() != ROTATE){
                        cout << "5th child in AREADEFINITION is not a ROTATE" << endl;
                        hasNoErrors = false;
                    }
                }
            }
        }


        if(currentNode->getType() == AREA){
            if(findAreaDefinition(currentNode, currentNode->getNodes().at(0)->getData(), NULL) == NULL){
                cout << "AREA has no related AREADEFINITION" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != RH
            && currentNode->getParent()->getType() != LABEL){
                cout << "AREA must be child of DOCUMENT, LABEL or RH" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NAME){
                cout << "First child of AREA must be NAME" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == BOX){
            if(currentNode->getParent()->getType() != AREA){
                cout << "BOX must be child of AREA" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == FONT){
            if(currentNode->getParent()->getType() != AREA
            && currentNode->getParent()->getType() != BOX
            && currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "FONT must be child of AREA, BOX, LABEL or DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NAME
            || currentNode->getNodes().at(1)->getType() != NUMBER
            || currentNode->getNodes().at(2)->getType() != TYPE){
                cout << "Wrong syntax in FONT. Must be: NAME NUMBER TYPE" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == TP){
            if(currentNode->getParent()->getType() != AREA){
                cout << "TP must be child of AREA" << endl;
                hasNoErrors = false;
            }
            for (int i = 0; i < currentNode->getNodes().size(); ++i){
                if(currentNode->getNodes().at(i)->getType() != NUMBER){
                    cout << "Children of TP must be NUMBER" << endl;
                    hasNoErrors = false;
                    break;
                }
            }
        }
        if(currentNode->getType() == TI)
        {
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "TI must be child of DOCUMENT or LABEL" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != CHARACTER
            || currentNode->getNodes().at(1)->getType() != NUMBER){
                cout << "Wrong syntax in TI. Must be: CHARACTER NUMBER" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == US){
            if(currentNode->getParent()->getType() != AREA
            && currentNode->getParent()->getType() != BOX
            && currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != THEN
            && currentNode->getParent()->getType() != LABEL){
                cout << "US must be child of AREA, BOX, THEN, LABEL or DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != STRINGLITERAL
            && currentNode->getNodes().at(0)->getType() != STRINGVARIABLE){
                cout << "Child of US must be STRINGLITERAL or STRINGVARIABLE" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == STRINGVARIABLE 
        || currentNode->getType() == STRINGLITERAL){
            if(currentNode->getParent()->getType() != AREA
            && currentNode->getParent()->getType() != BOX
            && currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != US
            && currentNode->getParent()->getType() != CONDITION
            && currentNode->getParent()->getType() != VALUE
            && currentNode->getParent()->getType() != SE
            && currentNode->getParent()->getType() != GO
            && currentNode->getParent()->getType() != CT
            && currentNode->getParent()->getType() != MG
            && currentNode->getParent()->getType() != KP){
                cout << "STRINGVARIABLE or STRINGLITERAL must be child of AREA, BOX, DOCUMENT, US, CONDITION, VALUE, SE, GO, CT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getType() == STRINGVARIABLE){
                if(currentNode->getNodes().at(0)->getType() != NAME){
                    cout << "Child of STRINGVARIABLE must be NAME" << endl;
                    hasNoErrors = false;
                }
            }
        }
        if(currentNode->getType() == SP){
            if(currentNode->getParent()->getType() != AREA
            && currentNode->getParent()->getType() != BOX
            && currentNode->getParent()->getType() != RH){
                cout << "SP must be child of AREA, BOX or RH" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NUMBER){
                cout << "Child of SP must be NUMBER" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == HR){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "HR must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != LEFT
            && currentNode->getNodes().at(1)->getType() != RIGHT){
                cout << "Child of HR must be LEFT and RIGHT" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == LINEBREAK){
            if(currentNode->getParent()->getType() != AREA
                    && currentNode->getParent()->getType() != BOX
                    && currentNode->getParent()->getType() != THEN)
            {
                cout << "LINEBREAK must be child of AREA, BOX or THEN" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == CHARACTER)
        {
            if(currentNode->getParent()->getType() != CONDITION 
            && currentNode->getParent()->getType() != TI 
            && currentNode->getParent()->getType() != SE)
            {
                cout << "CHARACTER must be child of CONDITION, TI or SE" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == IF)
        {
            if(currentNode->getParent()->getType() != DOCUMENT && currentNode->getParent()->getType() != AREA)
            {
                cout << "IF must be child of DOCUMENT or a child of AREA" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == CONDITION)
        {
            if(currentNode->getParent()->getType() != IF
                && currentNode->getParent()->getType() != AND
                && currentNode->getParent()->getType() != OR)
            {
                cout << "CONDITION must be child of OR, AND or IF" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == AND)
        {
            if(currentNode->getParent()->getType() != IF)
            {
                cout << "AN must be child of IF" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == OR)
        {
            if(currentNode->getParent()->getType() != IF)
            {
                cout << "OR must be child of IF" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == THEN)
        {
            if(currentNode->getParent()->getType() != IF)
            {
                cout << "THEN must be child of IF" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == ELSE)
        {
            if(currentNode->getParent()->getType() != IF)
            {
                cout << "ELSE must be child of IF" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == RULE)
        {
            if(currentNode->getParent()->getType() != CONDITION)
            {
                cout << "RULE must be child of CONDITION" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getData() != "L" && currentNode->getData() != "U")
            {
                cout<< "The children of RULE can only be L or U";
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == VALUE)
        {
            if(currentNode->getParent()->getType() != CONDITION 
                && currentNode->getParent()->getType() != SE )
            {
                cout << "VALUE must be child of CONDITION or SE" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == SE)
        {
            if(currentNode->getParent()->getType() != THEN && currentNode->getParent()->getType() != ELSE)
            {
                cout << "SE must be child of ELSE or THEN" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == US)
        {
            if(currentNode->getParent()->getType() != THEN && currentNode->getParent()->getType() != AREA)
            {
                cout << "US must be child of THEN or AREA" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == CT)
        {
            if(currentNode->getParent()->getType() != ELSE)
            {
                cout << "CT must be child of ELSE" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == MG)
        {
            if(currentNode->getParent()->getType() != THEN 
            && currentNode->getParent()->getType() != BOX
            && currentNode->getParent()->getType() != KP){
                cout << "MG must be child of THEN" << endl;
                cout << "LINEBREAK must be child of AREA, BOX or KP" << endl;
                hasNoErrors = false;
            }
        }
        if(currentNode->getType() == FO){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "FO must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != RIGHT
               && currentNode->getNodes().at(0)->getType() != LEFT){
                cout << "Child of FO must be LEFT or RIGHT" << endl;
                hasNoErrors = false;
            }
        }

        if(currentNode->getType() == GO){
            if(currentNode->getParent()->getType() != THEN
            && currentNode->getParent()->getType() != ELSE
            && currentNode->getParent()->getType() != DOCUMENT){
                cout << "GO must be child of THEN, ELSE or DOCUMENT" << endl;
                hasNoErrors = false;
            }
        }

        if(currentNode->getType() == LABEL){
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "LABEL " << currentNode->getData() << " must be child of DOCUMENT or LABEL" << endl;
                hasNoErrors = false;
            }
            // if(currentNode->getNodes().at(0)->getType() != STRINGLITERAL){
            //     cout << "Child of LABEL must be STRINGLITERAL" << endl;
            //     hasNoErrors = false;
            // }
        }

        if(currentNode->getType() == KP){
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "KP must be child of DOCUMENT or LABEL" << endl;
                hasNoErrors = false;
            }
            for(int i = 0; i<currentNode->getNodes().size(); i++){
                 if(currentNode->getNodes().at(i)->getType() != ON
                 && currentNode->getNodes().at(i)->getType() != TYPE
                 && currentNode->getNodes().at(i)->getType() != IF
                 && currentNode->getNodes().at(i)->getType() != OFF_KP
                 && currentNode->getNodes().at(i)->getType() != LINEBREAK
                 && currentNode->getNodes().at(i)->getType() != STRINGVARIABLE){
                    cout << "Child of KP must be ON, TYPE, IF, OFF_KP, LINEBREAK or STRINGVARIABLE" << endl;
                    hasNoErrors = false;
                 }
            }
        }
        if(currentNode->getType() == RH){
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "RH must be child of DOCUMENT or LABEL" << endl;
                hasNoErrors = false;
            }
            for(int i = 0; i<currentNode->getNodes().size(); i++){
                 if(currentNode->getNodes().at(i)->getType() != ON
                 && currentNode->getNodes().at(i)->getType() != SP
                 && currentNode->getNodes().at(i)->getType() != AREA
                 && currentNode->getNodes().at(i)->getType() != OFF_RH
                 && currentNode->getNodes().at(i)->getType() != EXECUTE
                 && currentNode->getNodes().at(i)->getType() != CANCEL){
                    cout << "Child of RH must be ON, SP, AREA, OFF_RH, EXECUTE or CANCEL" << endl;
                    hasNoErrors = false;
                 }
            }
        }

        if(currentNode->getType() == LL){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "LL must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NUMBER){
                cout << "Child of LL must be NUMBER" << endl;
                hasNoErrors = false;
            }
        }

        if(currentNode->getType() == IN){
            if(currentNode->getParent()->getType() != DOCUMENT
            && currentNode->getParent()->getType() != LABEL){
                cout << "IN must be child of DOCUMENT or IN" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NUMBER){
                cout << "Child of IN must be NUMBER" << endl;
                hasNoErrors = false;
            }
        }

        if(currentNode->getType() == IR){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "IR must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != NUMBER){
                cout << "Child of IR must be NUMBER" << endl;
                hasNoErrors = false;
            }
        }

        if(currentNode->getType() == DR){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "DR must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            for(int i = 0; i<currentNode->getNodes().size(); i++){
                 if(currentNode->getNodes().at(i)->getType() != STRINGLITERAL
                 && currentNode->getNodes().at(i)->getType() != WEIGHT
                 && currentNode->getNodes().at(i)->getType() != NUMBER){
                    cout << "Child of DR must be STRINGLITERAL, WEIGHT or NUMBER" << endl;
                    hasNoErrors = false;
                 }
            }
        }

        if(currentNode->getType() == PA){
            if(currentNode->getParent()->getType() != DOCUMENT){
                cout << "PA must be child of DOCUMENT" << endl;
                hasNoErrors = false;
            }
            if(currentNode->getNodes().at(0)->getType() != STRINGLITERAL){
                cout << "Child of PA must be STRINGLITERAL" << endl;
                hasNoErrors = false;
            }
        }

        // if(currentNode->getType() == GO){
        //     if(currentNode->getParent()->getType() != DOCUMENT
        //     && currentNode->getParent()->getType() != THEN
        //     && currentNode->getParent()->getType() != ELSE){
        //         cout << "GO must be child of DOCUMENT, THEN or ELSE" << endl;
        //         hasNoErrors = false;
        //     }
        //     if(currentNode->getNodes().size()>0){
        //         cout << "GO must not have children."<< endl;
        //         hasNoErrors = false;
        //     }
        // }

        // if(currentNode->getType() == LABEL){
        //     if(currentNode->getParent()->getType() != DOCUMENT){
        //         cout << "LABEL " << currentNode->getData() << " must be child of DOCUMENT or LABEL" << endl;
        //         hasNoErrors = false;
        //     }
        }
        return hasNoErrors;
}

string traverseGenerate(Node* currentNode){
    ofstream fout("labels.out", ios::out|ios::app);
    
    string result;

    

    if(currentNode->getType() == HR){
        if(currentNode->getNodes().at(0)->getType() == LEFT
        && currentNode->getNodes().at(1)->getType() == RIGHT){
            result += "newpath\n";
            result += to_string(boxXPosition) + " mm 55 mm moveto\n";
            result += to_string(boxXPosition + boxWidth) + " mm 55 mm lineto\n";
            result += "closepath\nstroke\n";
            result += to_string(boxXPosition + 2) + " mm 52 mm moveto\n";
        }
    }

    if(currentNode->getType() == GO){
        result+=currentNode->getData()+"\n";
        result+="nulldevice\n";
    }

    if(currentNode->getType() == LABEL){ 
        cout<<"Got here"<<endl;               
        fout.close();
        fout.open("labels.out", ios::trunc);
        fout<<"/";
        for(int i=0; i < currentNode->getNodes().size(); i++){
            if(currentNode->getNodes().at(i)->getType() == LABEL){
                fout << traverseGenerate(currentNode->getNodes().at(i)) << "\n";
                cout << traverseGenerate(currentNode->getNodes().at(i)) << "\n";
                fout.close();
                fout.open("labels.out", ios::app);
            }
        }
        fout << "/"+currentNode->getData() << "{\n";
        cout << "/"+currentNode->getData() << "{\n";
        fout.close();
        fout.open("labels.out", ios::app);
        for(int i=0; i < currentNode->getNodes().size(); i++){
            if(currentNode->getNodes().at(i)->getType() == LABEL){
                fout << currentNode->getNodes().at(i)->getData() << "\n";
                cout << currentNode->getNodes().at(i)->getData() << "\n";
            }else{
                fout << traverseGenerate(currentNode->getNodes().at(i)) << "\n";
                cout << traverseGenerate(currentNode->getNodes().at(i)) << "\n";
            }
        }
        fout << "}def\n\n";
        cout << "}def\n\n";
        fout.close();
        return result;
    }

    if(currentNode->getType() == AREA){
        cout<<"Got here"<<endl;        
        string name = currentNode->getNodes().at(0)->getData();
        Node* n = findAreaDefinition(currentNode, name, NULL);

        for (int i = 0; i < currentNode->getNodes().size(); ++i){
            if(currentNode->getNodes().at(i)->getType() == BOX){
                boxXPosition = stoi(n->getNodes().at(1)->getData());
                boxYPosition = 302 - stoi(n->getNodes().at(2)->getData());
                boxWidth = stoi(n->getNodes().at(3)->getData());
            }
        }
    }

    if(currentNode->getType() == IN){
        result+="/indent "+(currentNode->getNodes().at(0)->getData())+" def\n";
    }

    if(currentNode->getType() == SP && currentNode->getParent()->getType() != BOX)
    {
        bool isinBox = false;
        Node* n = currentNode;
        while(n->getParent() != NULL)
        {
            n = n->getParent();
            if(n->getType() == BOX)
            {
                isinBox = true;
            }
        }
        if(!isinBox)
        {
            boxYPosition -= stoi(currentNode->getNodes().at(0)->getData());
        }
    }

    for (int i = 0; i < currentNode->getNodes().size(); ++i){
        result += traverseGenerate(currentNode->getNodes().at(i));
    }

    cout << result << endl;
    cout << currentNode->getType() << endl;
    cout << currentNode->getData() << endl;
    cout << "kek" << endl;

    if(currentNode->getType() == FONT){
        if(currentNode->getParent()->getType() != AREA){
            if(currentNode->getNodes().at(0)->getData()== "SWISS")
                globalFont = "ARIALbold";
            else
                globalFont = currentNode->getNodes().at(0)->getData();
            if(currentNode->getNodes().size() > 2)
            {
                globalFont += currentNode->getNodes().at(2)->getData();
            }
            globalFont += " " + currentNode->getNodes().at(1)->getData();
            result += "/" + globalFont + " selectfont\n";
        }
    }

    if(currentNode->getType() == LINEBREAK){
        if(currentNode->getParent()->getType() == AREA){
            cout << "ayy" << endl;
            Node* n = currentNode->getParent()->getNodes().at(0);
            result += "currentpoint /y exch def /x exch def\n";
            result += "x " + n->getData() + "x sub neg 3 neg mm rmoveto\n";
            result += "INDENT mm 0 rmoveto\n";
        }
        if(currentNode->getParent()->getType() == BOX){
            cout << "lmao" << endl;
            if (currentNode->getParent()->getParent()->getType() == AREA){
                Node *n = currentNode->getParent()->getParent()->getNodes().at(0);
                result += "currentpoint /y exch def /x exch def\n";
                result += "x " + n->getData() + "x sub neg 3 neg mm rmoveto\n";
                result += "INDENT mm 0 rmoveto\n";
            }
        }
    }
    string ir;
    if(currentNode->getType() == STRINGLITERAL)
    {
        string areaName;
        if(currentNode->getParent()->getType() == AREA)
        {
            areaName = currentNode->getParent()->getNodes().at(0)->getData();
        }
        if(currentNode->getParent()->getType() == BOX || currentNode->getParent()->getType() == US)
        {
            if (currentNode->getParent()->getParent()->getType() == AREA)
            {
                areaName = currentNode->getParent()->getParent()->getNodes().at(0)->getData();
            }
        }
        int amountOftabChars = 0;
        int lastFoundTabChar = 0;
        int howManyChars = 0;
        for (int i = 0; i < currentNode->getData().size(); ++i)
        {
            howManyChars++;
            if(currentNode->getData().at(i) == tabChar || (amountOftabChars > 0 && i == currentNode->getData().size() - 1))
            {
                if(i > 0)
                {
                    if(i == currentNode->getData().size() - 1)
                    {
                        howManyChars += 2;
                        cout<<howManyChars<<endl;
                    }
                    result += "currentpoint /y exch def /x exch def\n";
                    if(tabIndex > tabIndents.size()-1 ){
                        result += "x " + areaName + "x sub neg " + tabDefaultValue + " mm add 0 rmoveto\n";
                    }else{
                        result += "x " + areaName + "x sub neg " + tabIndents[tabIndex++] + " mm add 0 rmoveto\n";
                    }
                    result += "(" + currentNode->getData().substr(lastFoundTabChar, howManyChars - 1) + ") " + areaName +"x mm " + areaName + "w mm textwrap\n";
                    }
                amountOftabChars++;
                lastFoundTabChar = i + 2;
                howManyChars = 0;
            }
        }

        if(amountOftabChars == 0)
        {   
            bool inIf = false;
            bool x = false;
            bool y = false;
            bool z = false;
            if(currentNode->getParent()->getParent())
            {
                x = true;
                if(currentNode->getParent()->getParent()->getParent())
                {
                y = true;
                    if(currentNode->getParent()->getParent()->getParent()->getParent())
                    {
                    z = true;
                    }
                }
            }

            if(currentNode->getParent()->getType() == IF)
            {
                inIf = true;
            }
            if(x && currentNode->getParent()->getParent()->getType() == IF)
            {
                inIf = true;
            }
            if(y && currentNode->getParent()->getParent()->getParent()->getType() == IF)
            {
                inIf = true;
            }
            if(z && currentNode->getParent()->getParent()->getParent()->getParent()->getType() == IF)
            {
                inIf = true;
            }



            if(currentNode->getParent()->getType() == US 
            && !inIf)
            {
                cout<<ir<<"I`m in strlit"<<endl;
                if(ir == ""){
                    result += "(" + currentNode->getData() + ")";
                    result += " ulshow\n";
                }else{
                    result += "(" + currentNode->getData() + ")";
                    result += "  y 10 sub right-justify-ulshow\n";
                }
            }
            else if(!inIf)
            {
                result += "(" + currentNode->getData() + ")";
                if(ir == ""){
                    result += " " + areaName +"x " + areaName + "w mm textwrap\n";
                }else{
                    result += " y 10 sub right-justify\n";
                }
            }
            else if(currentNode->getParent()->getType() == CT){
                result += currentNode->getData();
                result += "\n";
            } else{
                cout<< "weird"<<endl;
            }
        }
    }

    if(currentNode->getType() == STRINGVARIABLE)
    {
        bool inIf = false;
        bool x = false;
        bool y = false;
        bool z = false;
        if(currentNode->getParent()->getParent())
        {
            x = true;
            if(currentNode->getParent()->getParent()->getParent())
            {
            y = true;
                if(currentNode->getParent()->getParent()->getParent()->getParent())
                {
                z = true;
                }
            }
        }
        string areaName;
        if(currentNode->getParent()->getType() == AREA)
        {
            areaName = currentNode->getParent()->getNodes().at(0)->getData();
        }
        if(currentNode->getParent()->getType() == BOX)
        {
            if (currentNode->getParent()->getParent()->getType() == AREA)
            {
                areaName = currentNode->getParent()->getParent()->getNodes().at(0)->getData();
            }
        }

        if(currentNode->getParent()->getType() == IF)
        {
            inIf = true;
        }
        if(x && currentNode->getParent()->getParent()->getType() == IF)
        {
            inIf = true;
        }
        if(y && currentNode->getParent()->getParent()->getParent()->getType() == IF)
        {
            inIf = true;
        }
        if(z && currentNode->getParent()->getParent()->getParent()->getParent()->getType() == IF)
        {
            inIf = true;
        }
        
        
        cout << "I made it!!!" << endl;

        if(currentNode->getParent()->getParent()->getType() == US 
        && !inIf)
        {
            result += currentNode->getNodes().at(0)->getData();
            if(ir == "")
            {
                result += " ulshow\n";
            }else{
                result += "  y 10 sub right-justify-ulshow\n";
            }
        }
        else if(!inIf)
        {
            result += currentNode->getNodes().at(0)->getData();
            if(ir == ""){
                result += " " + areaName +"x " + areaName + "w mm textwrap\n";
            }else{
                result += " y 10 sub right-justify\n";
            }
        }
        else if(currentNode->getParent()->getType() == CT){
            result += currentNode->getData();
            result += "\n";
        } 
    }
    
    if(currentNode->getType() == AREADEFINITION){
        string name = currentNode->getNodes().at(0)->getData();

        result += "/"+name+"x "+currentNode->getNodes().at(1)->getData() + " def\n";
        result += "/"+name+"y "+to_string(297 - stoi(currentNode->getNodes().at(2)->getData())) + " def\n";
        result += "/"+name+"w "+currentNode->getNodes().at(3)->getData() + " def\n";

        if(currentNode->getNodes().size() > 4){
            result += "/"+name+"r "+currentNode->getNodes().at(4)->getNodes().at(0)->getData() + " def\n";
        }
    }

    if(currentNode->getType() == AREA){
        string name = currentNode->getNodes().at(0)->getData();
        Node* n = findAreaDefinition(currentNode, name, NULL);

        string font;

        for (int i = 0; i < currentNode->getNodes().size(); ++i){
            if(currentNode->getNodes().at(i)->getType() == FONT){
                if(currentNode->getNodes().at(i)->getNodes().at(0)->getData()=="SWISS"){
                    font = "ARIALbold";
                }else{
                    font = currentNode->getNodes().at(i)->getNodes().at(0)->getData();
                }
                if(currentNode->getNodes().at(i)->getNodes().size() > 2){
                    font += currentNode->getNodes().at(i)->getNodes().at(2)->getData();
                }
                font +=" "+currentNode->getNodes().at(i)->getNodes().at(1)->getData();
            }
        }

        if(font.size() > 0){
            result = "/" + font + " selectfont\n" + result;
        }

        if(n->getNodes().size() > 4){
            result = name + "x mm " + name + "y mm moveto\n" + name + "r neg rotate\ncurrentpoint /" + name +
                     "y exch def /" + name + "x exch def\nINDENT mm 0 rmoveto\n" + result + name + "r rotate\n";
        }
        else{
            result = name + "x mm " + name + "y mm moveto\ncurrentpoint /" + name +
                     "y exch def /" + name + "x exch def\nINDENT mm 0 rmoveto\n" + result +"\n";
        }

        if(font.size() > 0){
            result += "/" + globalFont + " selectfont\n";
        }
    }



    if(currentNode->getType() == BOX){
        result += "newpath\n";
        result += to_string(boxXPosition) + " mm " + to_string(boxYPosition) + " mm moveto\n";
        result += to_string(boxXPosition + boxWidth) + " mm " + to_string(boxYPosition) + " mm lineto\n";

        for (int i = 0; i < currentNode->getNodes().size(); ++i){
            
            if(currentNode->getNodes().at(i)->getType() == LINEBREAK){
                boxYPosition -= 5;
            }
            if(currentNode->getNodes().at(i)->getType() == NEWLINE){
                boxYPosition -= 7;
            }
            if(currentNode->getNodes().at(i)->getType() == SP){
                boxYPosition -= stoi(currentNode->getNodes().at(i)->getNodes().at(0)->getData());
            }
        }
        result += to_string(boxXPosition + boxWidth) + " mm " + to_string(boxYPosition) + " mm lineto\n";
        result += to_string(boxXPosition) + " mm " + to_string(boxYPosition) + " mm lineto\n";
        result += "closepath\nstroke\n";
        result += to_string(boxXPosition) + " mm 45 mm moveto\n";
    }

    if(currentNode->getType()== RH){
        string rhResult = "";
        for (int i = 0; i < currentNode->getNodes().size(); ++i)
        {
            if(currentNode->getNodes().at(i)->getType() == EXECUTE){
                result += rhResult;
            }else if(currentNode->getNodes().at(i)->getType() == CANCEL){
                rhResult = "";
            }else{
                rhResult += traverseGenerate(currentNode->getNodes().at(i));
            }
        }
    }


    if(currentNode->getType() == TP)
    {
        for (int i = 0; i < currentNode->getNodes().size(); ++i)
        {
            tabIndents.push_back(currentNode->getNodes().at(i)->getData());
        }
    }

    if(currentNode->getType() == TI){
        tabChar = currentNode->getNodes().at(0)->getData()[0];
        tabDefaultValue = currentNode->getNodes().at(1)->getData();
    }

    

    if(currentNode->getType() == IF)
    {
        int ifelse = 0;
        string message = "";
        string condition = "";
        string andOrCond = "";
        string secCond = "";
        string thenStatements = "";
        string elseStatements = "";
        string rule = "";
        string function = "";
        
        for (int i = 0; i < currentNode->getNodes().size(); i++)
        {
            if(currentNode->getNodes().at(i)->getType() == CONDITION){
                
                for (int j = 0; j < currentNode->getNodes().at(i)->getNodes().size(); j++)
                {   
                    
                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == RULE){
                        
                        if(currentNode->getNodes().at(i)->getNodes().at(j)->getData()=="L"){
                            rule += " length\n";
                        }else{
                            rule += " toupper\n";
                        }
                    }
                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == STRINGVARIABLE){
                        condition += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                        condition += rule;
                        condition += "(" + currentNode->getNodes().at(i)->getNodes().at(j+2)->getNodes().at(0)->getData() + ")";
                        condition += "\n";
                        if(currentNode->getNodes().at(i)->getNodes().at(j+1)->getData() == "=")
                            condition += "eq\n";
                        else if(currentNode->getNodes().at(i)->getNodes().at(j+1)->getData() == ">")
                            condition += "gt\n";
                    }           
                }
            }
            if(currentNode->getNodes().at(i)->getType() == THEN)
            {
                thenStatements = "";
                thenStatements += "{\n";
                for (int j = 0; j < currentNode->getNodes().at(i)->getNodes().size(); j++)
                {
                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == MG)
                    {
                        if(currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData()=="T"){
                            if(ir == ""){
                                function = " show\n";
                            }else{
                                function = " y 10 sub right-justify\n";
                            }
                        }
                        if(currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(1)->getType()== STRINGLITERAL){
                            message = currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(1)->getData();
                        }
                        thenStatements += "  (" + message + ")"+ function;
                    }

                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == SE){
                        thenStatements += "  /";
                        thenStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                        thenStatements += " (";
                        thenStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(2)->getNodes().at(0)->getData();
                        thenStatements += ") def\n";
                    }

                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == US){
                        if(ir == ""){
                            thenStatements += "  (";
                            thenStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                            thenStatements += ") ulshow"; 
                        }else{
                            thenStatements += "  (";
                            thenStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                            thenStatements += ")  y 10 sub right-justify-ulshow\n";
                        }
                    }
                    
                }
                thenStatements += "\n}\n";
            }
            if(currentNode->getNodes().at(i)->getType() == AND || currentNode->getNodes().at(i)->getType() == OR)
            {
                if(currentNode->getNodes().at(i)->getType() == AND )
                    secCond = "and";
                else
                    secCond = "or";
                rule = "";
                if(currentNode->getNodes().at(i)->getNodes().at(0)->getType() == CONDITION){
                    
                    for (int j = 0; j < currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().size(); j++)
                    {   
                        
                        if(currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j)->getType() == RULE){
                            
                            if(currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j)->getData()=="L"){
                                rule += " length\n";
                            }else{
                                rule += " toupper\n";
                            }
                        }
                        if(currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j)->getType() == STRINGVARIABLE){
                            andOrCond += currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j)->getNodes().at(0)->getData();
                            andOrCond += rule;
                            andOrCond += currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j+2)->getNodes().at(0)->getData();
                            andOrCond += "\n";
                            if(currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j+1)->getData() == "=")
                                andOrCond += "eq\n";
                            else if(currentNode->getNodes().at(i)->getNodes().at(0)->getNodes().at(j+1)->getData() == ">")
                                condition += "gt\n";
                        }           
                    }
                }
            }
            if(currentNode->getNodes().at(i)->getType() == ELSE)
            {
                ifelse = 1;
                elseStatements = "{\n";
                for (int j = 0; j < currentNode->getNodes().at(i)->getNodes().size(); j++)
                {
                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == SE){
                        elseStatements += "  /";
                        elseStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                        elseStatements += " (";
                        elseStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(2)->getNodes().at(0)->getData();
                        elseStatements += ") def";
                    }

                    if(currentNode->getNodes().at(i)->getNodes().at(j)->getType() == US){
                        if(ir == ""){
                            elseStatements += "  (";
                            elseStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                            elseStatements += ") ulshow"; 
                        }else{
                            elseStatements += "  (";
                            elseStatements += currentNode->getNodes().at(i)->getNodes().at(j)->getNodes().at(0)->getData();
                            elseStatements += ")  y 10 sub right-justify-ulshow\n";
                        }
                    }
                }
                elseStatements += "\n}";
            }
        }
        result += condition;
        if(secCond == "and"){
            result += andOrCond;
            result += thenStatements; 
            if(ifelse == 0){
                result+="if\n";
            }
            else{
                result += elseStatements;
                result +="ifelse\n";
            }
        }else if(secCond == "or"){
            result += thenStatements; 
            if(ifelse == 0){
                result+="if\n";
            }
            else{
                result += elseStatements;
                result+="ifelse\n";
            }
            result += andOrCond;
            result += thenStatements; 
            if(ifelse == 0){
                result+="if\n";
            }
            else{
                result += elseStatements;
                result+="ifelse\n";
            }
        }else{
            result += thenStatements; 
            if(ifelse == 0){
                result+="if\n";
            }
            else{
                result += elseStatements;
                result+="ifelse\n";
            }
        }
    }
    return result;
}


/*
int main() {

    Node docNode(DOCUMENT, "");

    Node fooooo(FO, "");
    Node leeeeft(LEFT, "");

    fooooo.addNode(&leeeeft);

    Node fontNode(FONT, "");
    Node fontNameNode(NAME, "swiss");
    Node fontsizeNode(NUMBER, "12");
    Node fonttypeNode(TYPE, "bold");

    fontNode.addNode(&fontNameNode);
    fontNode.addNode(&fontsizeNode);
    fontNode.addNode(&fonttypeNode);

    Node tiNode(TI, "");
    Node charNode(CHARACTER, "¤");
    Node numNode(NUMBER, "5");

    tiNode.addNode(&charNode);
    tiNode.addNode(&numNode);

    Node da1Node(AREADEFINITION, "");
    Node da1nameNode(NAME, "OVERSKR");
    Node da1xNode(NUMBER, "20");
    Node da1yNode(NUMBER, "32");
    Node da1WidthNode(NUMBER, "175");

    da1Node.addNode(&da1nameNode);
    da1Node.addNode(&da1xNode);
    da1Node.addNode(&da1yNode);
    da1Node.addNode(&da1WidthNode);

    Node area1Node(AREA, "");
    Node usNode(US, "");
    Node textNode(STRINGLITERAL, "Kreditoplysninger");

    area1Node.addNode(&da1nameNode);
    usNode.addNode(&textNode);
    area1Node.addNode(&usNode);


    Node da2Node(AREADEFINITION, "");
    Node da2nameNode(NAME, "VEND");
    Node da2xNode(NUMBER, "7");
    Node da2yNode(NUMBER, "270");
    Node da2WidthNode(NUMBER, "175");
    Node da2RotoNode(ROTATE, "");
    Node da2rotoNumberNode(NUMBER, "-90");

    da2RotoNode.addNode(&da2rotoNumberNode);

    da2Node.addNode(&da2nameNode);
    da2Node.addNode(&da2xNode);
    da2Node.addNode(&da2yNode);
    da2Node.addNode(&da2WidthNode);
    da2Node.addNode(&da2RotoNode);

    Node font2Node(FONT, "");
    Node font2NameNode(NAME, "swiss");
    Node font2sizeNode(NUMBER, "6");
    Node font2typeNode(TYPE, "FED");

    font2Node.addNode(&font2NameNode);
    font2Node.addNode(&font2sizeNode);
    font2Node.addNode(&font2typeNode);

    Node area2Node(AREA, "");
    Node text2Node(STRINGLITERAL, "BECKSIK      CVR-nr. 7777777777 København");
    Node text21Node(STRINGLITERAL, "KL. ");
    Node text22Node(STRINGVARIABLE, "");
    Node nameNode(NAME, "TID");
    Node breakNode(LINEBREAK, "");

    text22Node.addNode(&nameNode);

    area2Node.addNode(&da2nameNode);
    area2Node.addNode(&font2Node);
    area2Node.addNode(&text2Node);
    area2Node.addNode(&breakNode);
    area2Node.addNode(&text21Node);
    area2Node.addNode(&text22Node);

    Node da3Node(AREADEFINITION, "");
    Node da3nNode(NAME, "BOX");
    Node da3xNode(NUMBER, "20");
    Node da3yNode(NUMBER, "40");
    Node da3widthNode(NUMBER, "175");

    da3Node.addNode(&da3nNode);
    da3Node.addNode(&da3xNode);
    da3Node.addNode(&da3yNode);
    da3Node.addNode(&da3widthNode);

    Node area3Node(AREA, "");
    Node area3nNode(NAME, "BOX");

    Node area3BoxNode(BOX, "");
    Node spaceNode(SP, "");
    Node spacenNode(NUMBER, "6");

    spaceNode.addNode(&spacenNode);

    Node space3Node(SP, "");
    Node space3nNode(NUMBER, "4");

    space3Node.addNode(&space3nNode);


    Node tpNode(TP, "");
    Node tpn1Node(NUMBER, "1");
    Node tpn2Node(NUMBER, "30");
    Node tpn3Node(NUMBER, "65");
    Node tpn4Node(NUMBER, "140");

    tpNode.addNode(&tpn1Node);
    tpNode.addNode(&tpn2Node);
    tpNode.addNode(&tpn3Node);
    tpNode.addNode(&tpn4Node);

    area3Node.addNode(&area3nNode);
    area3Node.addNode(&tpNode);

    Node strNode(STRINGLITERAL, "¤Banksted¤Kontonummer¤Kredittype¤Dannelsesdato");

    area3BoxNode.addNode(&strNode);
    area3BoxNode.addNode(&spaceNode);

    area3Node.addNode(&area3BoxNode);
    area3Node.addNode(&space3Node);

    Node area3boxNode2(BOX, "");
    Node space2Node(SP, "");
    Node space2nNode(NUMBER, "220.5");
    space2Node.addNode(&space2nNode);
    area3boxNode2.addNode(&space2Node);

    area3Node.addNode(&area3boxNode2);

    Node da4Node(AREADEFINITION, "");
    Node da4nNode(NAME, "BANKSTED");
    Node da4xNode(NUMBER, "20");
    Node da4yNode(NUMBER, "47");
    Node da4widthNode(NUMBER, "175");

    da4Node.addNode(&da4nNode);
    da4Node.addNode(&da4xNode);
    da4Node.addNode(&da4yNode);
    da4Node.addNode(&da4widthNode);

    Node area4Node(AREA, "");
    Node area4nNode(NAME, "BANKSTED");
    Node on(ON, "");
    Node tabStrNode(STRINGLITERAL, "¤");
    Node strvar1Node(STRINGVARIABLE, "");
    Node strvar1nNode(NAME, "BANKSTED");
    Node strvar2Node(STRINGVARIABLE, "");
    Node strvar2nNode(NAME, "LANGKTONR");
    Node strvar3Node(STRINGVARIABLE, "");
    Node strvar3nNode(NAME, "REGTYPE11");
    Node strvar4Node(STRINGVARIABLE, "");
    Node strvar4nNode(NAME, "REGTYPELNG");
    Node strvar5Node(STRINGVARIABLE, "");
    Node strvar5nNode(NAME, "DATO");
    Node off(OFF_AREA, "");

    strvar1Node.addNode(&strvar1nNode);
    strvar2Node.addNode(&strvar2nNode);
    strvar3Node.addNode(&strvar3nNode);
    strvar4Node.addNode(&strvar4nNode);
    strvar5Node.addNode(&strvar5nNode);


    Node go1Node(GO, "label1");
    Node label1Node(LABEL, "label1");
    Node go2Node(GO, "label2");
    Node label2Node(LABEL, "label2");
    Node go3Node(GO, "label3");
    Node label3Node(LABEL, "label3");

    area4Node.addNode(&area4nNode);
    area4Node.addNode(&on);
    area4Node.addNode(&tpNode);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar1Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar2Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar3Node);
    area4Node.addNode(&strvar4Node);
    area4Node.addNode(&tabStrNode);
    area4Node.addNode(&strvar5Node);
    area4Node.addNode(&off);

    Node da5Node(AREADEFINITION, "");
    Node da5nNode(NAME, "SIKHED");
    Node da5xNode(NUMBER, "25");
    Node da5yNode(NUMBER, "59");
    Node da5widthNode(NUMBER, "175");

    da5Node.addNode(&da5nNode);
    da5Node.addNode(&da5xNode);
    da5Node.addNode(&da5yNode);
    da5Node.addNode(&da5widthNode);

    Node area5Node(AREA, "");
    Node area5nNode(NAME, "SIKHED");
    Node tabStr2Node(STRINGLITERAL, "Some text");
    Node brNode(LINEBREAK, "");

    area5Node.addNode(&area5nNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);
    area5Node.addNode(&tabStr2Node);
    area5Node.addNode(&brNode);

    Node inNode(IN, "");
    Node innNode(NUMBER, "6");
    inNode.addNode(&innNode);

    docNode.addNode(&fontNode);
    // docNode.addNode(&fooooo);
    docNode.addNode(&tiNode);
    docNode.addNode(&da1Node);
    docNode.addNode(&da2Node);
    docNode.addNode(&da3Node);
    docNode.addNode(&da4Node);
    docNode.addNode(&da5Node);
    docNode.addNode(&area1Node);
    docNode.addNode(&go1Node);
    // docNode.addNode(&go2Node);
    // docNode.addNode(&go3Node);
    docNode.addNode(&inNode);

    docNode.addNode(&label1Node);
    label1Node.addNode(&area3Node);
    label1Node.addNode(&label2Node);
    label2Node.addNode(&area4Node);
    label2Node.addNode(&label3Node);
    label3Node.addNode(&area5Node);

    Node rhNode(RH, "");
    Node rhSpNode(SP, "");
    Node rhSpNumNode(NUMBER, "83");
    Node rhOffNode(OFF_RH, "");

    rhNode.addNode(&on);
    rhNode.addNode(&rhSpNode);
    rhSpNode.addNode(&rhSpNumNode);
    rhNode.addNode(&rhOffNode);

    // docNode.addNode(&rhNode);

    Node kpNode(KP, "");
    Node kpTypeNode(TYPE, "FED");
    Node kpIfNode(IF, "");
    Node kpBreakNode(LINEBREAK, "");
    Node kpVariableNode(STRINGVARIABLE, "");
    Node kpVariablenNode(NAME, "var");
    Node kpOffNode(OFF_KP, "");

    kpNode.addNode(&on);
    kpNode.addNode(&kpTypeNode);
    kpNode.addNode(&kpIfNode);
    kpNode.addNode(&kpBreakNode);
    kpNode.addNode(&kpBreakNode);
    kpNode.addNode(&kpVariableNode);
    kpVariableNode.addNode(&kpVariablenNode);
    kpNode.addNode(&kpOffNode);

    // // docNode.addNode(&kpNode);
    
    if(traverseTypecheck(&docNode, true)){
        ofstream file;
        file.open("template.ps");
        file << traverseGenerate(&docNode);
        cout << "Template generated successfully!" << endl;
        file.close();
    }

    // if(traverseTypecheck(&docNode, true)){
    //     cout << traverseGenerate(&docNode) << endl;
    //     cout << "Typecheck successful" << endl;
    // }else{
    //     cout << "Typecheck failed" << endl;
    // }


    return 0;
}
*/