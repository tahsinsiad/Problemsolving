#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,x,y,z,c,d,f;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"0";
    }
    else
    {
        if(n%4==0)
        {
            ans=n/4-1;
            cout<<ans;
            return 0;
        }
        else
        {
            ans=n/4;
            cout<<ans;
            return 0;
        }
    }
}
