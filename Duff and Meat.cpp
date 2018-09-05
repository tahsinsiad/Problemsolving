#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,price=99999999999;
    int a[100005],p[100005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        price=min(price,p[i]);
        ans+=price*a[i];
    }
    cout<<ans;
}
