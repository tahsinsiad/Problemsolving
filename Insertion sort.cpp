#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key=0,j;
    int a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         key=max(key,a[i]);
    }

    for(int i=0;i<n;i++)
    {
        b[a[i]]=a[i];
        b[a[i]]++;

    }
    for(int i=0;i<key;i++)
    {
        cout<<b[i]<<" ";
    }
}
