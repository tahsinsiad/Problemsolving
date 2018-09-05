#include<bits/stdc++.h>
using namespace std;
int a[100];
int fibonacci(int n)
{

    if(n==0 || n==1) return 1;
    if(a[n]!=-1) return a[n];
    else
    {
        a[n]=fibonacci(n-1)+fibonacci(n-2);
        return a[n];
    }

}
int main()
{
    int x,c=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        a[i]=-1;
    }
    for(int j=0;j<x;j++)
    {
       cout<<fibonacci(j)<<" ";
    }
    return 0;

}
