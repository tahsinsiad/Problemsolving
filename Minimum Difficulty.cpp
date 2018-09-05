#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=111111111;
    int a[100001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        x=max(x,a[i]-a[i-1]);
    }
    //cout<<x<<endl;
    for(int i=2;i<n;i++)
    {
        y=min(y, max(x,a[i+1]-a[i-1]));
    }
    cout<<y<<endl;

}
