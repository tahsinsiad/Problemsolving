#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *p1,*p2,*p3,*start;

class List
{
public:
    void nodecreate(int d);
    void listcreate();
    void insert_1();
    void insert_2();
    void insert_b();
    void insert_l();
    void delete_f();
    void delete_l();
    void delete_s();
    void display();
};

void List::nodecreate(int d)
{
    p1=new Node;
    p1->data=d;
    p1->next=NULL;
}

void List::listcreate()
{
    int a;
    cin>>a;
    nodecreate(a);
    start=p1;
    p2=start;
    while(1)
    {
        cin>>a;
        if(a<0) break;
        nodecreate(a);
        p2->next=p1;
        p2=p1;
    }
}

void List::insert_1()
{
    int b;
    cin>>b;
    nodecreate(b);
    p2=start;
    start=p1;
    p1->next=p2;
}

void List::display()
{
    for(p3=start; p3!=NULL; p3=p3->next)
    {
        cout<<p3->data<<" ";
    }
    cout<<endl;
}

void List::insert_2()
{
    int a,b;
    Node *t;
    cin>>a>>b;
    nodecreate(b);
    t=p1;
    for(p3=start; p3!=NULL; p3=p3->next)
    {
        if(p3->data==a)
        {
            //t->next=p3->next;
            //p3->next=t;
            p2=p3->next;
            p3->next=t;
            t->next=p2;
        }
    }
}

void List::insert_b()
{
    int a,b;
    Node *t,*p;
    cin>>a>>b;
    nodecreate(b);
    t=p1;
    for(p3=start;;)
    {
        if(p3->next->data==a)
        {
            p2=p3->next;
            p3->next=t;
            t->next=p2;

        }
        p3=p3->next;
    }
}

void List::delete_f()
{
    Node *p;
    p=start->next;
    start=p;
}

void List::delete_l()
{
    Node *p;
    for(p3=start;;)
    {
        if(p3->next!=NULL)
        {
            p=p3;
            p3=p3->next;
        }
        else break;

    }
    p->next=NULL;
    p3=p;
}

void List::delete_s()
{
    Node *p;
    int a;
    cin>>a;
    for(p3=start;;)
    {
        if(p3->data!=a)
        {
            p=p3;
            p3=p3->next;
        }
        else break;


    }
    p->next=p3->next;
    p3=p;
}

int main()
{
    List l;
    l.listcreate();
    l.display();
    l.delete_s();
    l.display();
}
