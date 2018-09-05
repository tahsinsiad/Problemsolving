#include<bits/stdc++.h>
using namespace std;
int a[200001],b[200001],c[200001],d[200001];
int main()
{
    long long int n,m;
    int x,y,ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>c[j]>>d[j];
    }
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+m);
    sort(d,d+m);
    x=c[m-1]-b[0];
    y=a[n-1]-d[0];
    ans=max(x,y);
    cout<<max(ans,0);


}
