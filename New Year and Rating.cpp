#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    int l=-2e9,r=2e9;
    int a[200002],b[200002];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        if(b[i]==1)
        {
            l=max(l,1900-sum);
        }
        else
        {
            r=min(r,1899-sum);
        }
        sum+=a[i];
    }
    if(r==2e9)
    {
        cout<<"Infinity";
    }
    else if(l>r)
    {
        cout<<"Impossible";
    }
    else
    {
        cout<<sum+r;
    }
}
