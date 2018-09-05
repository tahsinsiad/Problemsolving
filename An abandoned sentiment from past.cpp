#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,pos,cnt=0;
    int a[300],b[300],l=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(int j=0; j<k; j++)
    {
        cin>>b[j];
    }
    int cnt0=count(a,a+n,0);
    if(k>1)
    {
        cout<<"Yes";
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            a[i]=b[l];
            l++;

        }
    }

    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>=a[i+1])
        {
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";



}
