#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,temp=0,x,y,z,ans;
    int a[2000],b[2000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    k=a[0]+b[0];
    z=k;
    for(int i=1; i<n; i++)
    {
        y=abs(k-a[i]);
        x=y+b[i];
        k=x;
        temp=max(temp,x);


    }
    ans=max(z,temp);
    cout<<ans;
}
