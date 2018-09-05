#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,suma=0,sumb=0,sumc=0;
    cin>>n;
    int a[100001],b[100001],c[100001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int k=0;k<n-1;k++)
    {
        cin>>b[k];
    }
    for(int j=0;j<n-2;j++)
    {
        cin>>c[j];
    }
    for(int i=0;i<n;i++)
    {
        suma+=a[i];
    }
    for(int k=0;k<n-1;k++)
    {
        sumb+=b[k];
    }
    for(int j=0;j<n-2;j++)
    {
        sumc+=c[j];
    }
    cout<<suma-sumb<<endl;
    cout<<sumb-sumc;

}
