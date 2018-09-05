#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    float sum=0,x,k;
    int a[111];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    x=sum/n;

    while(x<(k-.5))
    {
        sum+=k;
        x=sum/(n+1+cnt);
        cnt++;

    }
    if(cnt>=1)
    {
        cout<<cnt;
    }
    else
    {
        cout<<0;
    }
}
