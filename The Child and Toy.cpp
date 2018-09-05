#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,sum=0;
    int a[3001];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=m;j++)
    {
        cin>>x>>y;
        sum=sum+min(a[x],a[y]);
    }
    cout<<sum;
}
