#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,x=0,y,z,ans;
    int a[110];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        x+=a[i];
    }
    y=x+(n-1)*10;
    if(y<=d)
    {
        ans=(d-x)/5;
        cout<<ans;
        return 0;
    }
    else{
        cout<<"-1";
    }
}
