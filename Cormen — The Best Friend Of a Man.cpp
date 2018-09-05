#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sumx=0,y,z,sum=0;
    int a[550];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sumx+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        while(a[i]+a[i+1]<k)
        {
            a[i+1]++;

        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    z=sum-sumx;
    cout<<z<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
