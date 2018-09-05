#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int info;
    Node *next;
    Node *prev;
};
Node *p1,*p2,*start,*p3,*End;
class List
{
public:
    void nodecreate(int d);
    void listcreate();
    void display();
};

void List::nodecreate(int d)
{
    p1=new Node;
    p1->info=d;
    p1->next=NULL;
    p1->prev=NULL;
}

void List::listcreate()
{
    int a;
    cin>>a;
    nodecreate(a);
    start=p1;
    p2=start;
    End=p1;
    while(a)
    {
        cin>>a;
        if(a<0) break;
        nodecreate(a);
        p2->next=p1;
        p1->prev=p2;
        p2=p1;
        End=p1;
    }

}
void List::display()
{
    for(p3=End;p3!=NULL;p3=p3->prev)
    {
        cout<<p3->info<<" ";
    }
}

int main()
{
    List l;
    l.listcreate();
    l.display();
}
