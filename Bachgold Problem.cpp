#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,k;
    cin>>n;
    l=n/2;
    if(n==3)
    {
        cout<<"1"<<endl;
        cout<<"3";
    }
    else if(n%2==0)
    {
        cout<<l<<endl;
        for(int i=1;i<=l;i++)
        {
            cout<<"2"<<" ";
        }
        //cout<<"3";
    }
    else if(n%2==1 && n!=3){
        cout<<l<<endl;
        for(int i=1;i<=l-1;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3";
    }

}
