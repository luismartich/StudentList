
#ifndef STUDENTLIST_L
#define STUDENTLIST_L
#include<string>
using namespace std;

class studentList
{
private:
    struct listNode
    {
        string name;
        double score1,score2,SUM,AVG;
        struct listNode *next;
    };

    listNode *head;

public:
    studentList()
        {head = nullptr;}
 ~studentList();

    void appendNode(string,double,double,double,double);
    void displayNode() const;
};
#endif // STUDENTLIST_L


void studentList::appendNode(string nAme,double sCore1,double sCore2,double sUm,double aVg)
{
    listNode *newNode;
    listNode *nodePtr;

    newNode = new listNode;
    newNode->name=nAme;
    newNode->score1=sCore1;
    newNode->score2=sCore2;
    newNode->SUM=sUm;
    newNode->AVG=aVg;
    newNode->next=nullptr;

    if (!head)
        head=newNode;
    else
    {
        nodePtr = head;

        while (nodePtr->next)
            nodePtr = nodePtr->next;

        nodePtr->next=newNode;
    }
}

void studentList::displayNode() const
{
listNode *nodePtr;
nodePtr = head;
while (nodePtr)
    cout<<nodePtr->name<<"  "<<nodePtr->score1<<"  "<<nodePtr->score2<<"  "<<nodePtr->SUM<<"  "<<nodePtr->AVG<<endl;
nodePtr=nodePtr->next;
}
