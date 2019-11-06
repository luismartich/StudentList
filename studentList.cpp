



#include<iostream>
#include<string>
#include "studentList.h"

int main ()
{

int SIZE;
int count;
string n;
double s1,s2;
double su,av;

studentList list;

cout<<"How many student are you evaluating? "<<endl;
cin>>SIZE;

    for(count=0;count<SIZE;count++)
    {
    cout<<"Write the name of the student: "<<endl;
    cin>>n;
    cout<<"What is the score 1: "<<endl;
    cin>>s1;
    cout<<"What is the score 2: "<<endl;
    cin>>s2;
    su=s1+s2;

    if (s2==0)
        av=s1;
    else
        av=su/2;

    list.appendNode(string n,double s1,double s2,double su,double av);
    list.displayNode();
    }
    return 0;
}






