#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;

};

node * create()
{
    node *p;
    int x;
    cout<<" enter  data (-1 for no data)";
    cin>>x;
    if(x==-1)
    return NULL;
    p=new node;
    p->data=x;
    cout<<"enter left child of "<<x;
    p->left=create();
     cout<<"enter right child of "<<x;
    p->right=create();
return p;



}


void preorder(node *t)
{
    if(t!=NULL)
        {
         cout<<t->data<<" ";
         preorder(t->left);
         preorder(t->right);

            }

}

void postorder(node *t)
{
    if(t!=NULL)
        {


         postorder(t->left);
         postorder(t->right);
         cout<<t->data<<" ";
           }

}

void inorder(node *t)
{
    if(t!=NULL)
    {

         inorder(t->left);
         cout<<t->data<<" ";
         inorder(t->right);

    }

}

int main()
{
    node *root;
    root=create();
    cout<<"preorder traversal: ";
    preorder(root);
    cout<<endl;
 cout<<"inorder traversal: ";
    inorder(root);
    cout<<endl;
 cout<<"postorder traversal: ";
    postorder(root);

}
