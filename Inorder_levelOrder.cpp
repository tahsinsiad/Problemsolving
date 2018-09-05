#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct  t_node
{
	char ch,sign;
	t_node *left,*right,*next;
};

typedef t_node *treeNode;
treeNode root,start,last;

void put(treeNode ptr)
{
	if(start==NULL)
	{
	    start=ptr;
	    last = ptr;
	}
	else
	{
        last->next=ptr;
        last = ptr;
	}
}



treeNode get()
{
	treeNode p;
	if(start==NULL)
	{
		return start;
	}
	else
	{
	    p=start;
        start=start->next;
        return p;
	}
}

void tree_make()
{
	treeNode p,dat;
	char c;
	cout<<"Enter root of tree:";
	cin>>c;
	c=toupper(c);
	if(c=='0')
	{
		cout<<"tree is empty\n";
		getch();
		exit(1);
	}
	p=new t_node;
	p->ch=c;
	p->sign='0';
	p->right=NULL;
	p->left=NULL;
	p->next=NULL;
	if(root==NULL)
	root=p;
	put(p);
	while(start!=NULL)
	{
        char aa;
		dat=get();
		cout<<" Enter left of "<<dat->ch<<": ";
		cin>>aa;
		if(aa!='0')
		{
			aa=toupper(aa);
			p=new t_node;
			if(p==NULL)
			{
				printf("\n Memory not available");
				exit(0);
			}
			p->left=NULL;
			p->sign='0';
			p->right=NULL;
			p->next=NULL;
			p->ch=aa;
			put(p);
			dat->left=p;

		}
        cout<<" Enter right of "<<dat->ch<<": ";
        cin>>aa;
        if(aa!='0')
        {
            aa=toupper(aa);
            p=new t_node;
            if(p==NULL)
            {
                printf("\n Memory not available");
                exit(0);
            }
            p->left=NULL;
            p->sign='0';
            p->right=NULL;
            p->next=NULL;
            p->ch=aa;
            put(p);
            dat->right=p;
        }
	}
}

void push_s(treeNode pt)
{
	//treeNode p;
	pt->next=start;
	start=pt;
}

treeNode pop()
{
	treeNode pt;
	if(start==NULL)
	{
	    return start;
	}
	else
	{
		pt=start;
		start=start->next;
		return pt;
	}
}

void preorder_t()
{
	cout<<"9\n\nAfter preorder traverse\n\n";
	treeNode ptr;
	ptr=root;
	while(ptr!=NULL)
	{
		cout<<"   "<<ptr->ch;
		if(ptr->right!=NULL)
		{
		    push_s(ptr->right);
		}
		if(ptr->left!=NULL)
		{
		    ptr=ptr->left;
		}
		else
		{
		    ptr=pop();
		}
	}
}



int main()
{
    tree_make();
    preorder_t();
    cout<<endl;
    return 0;
}

