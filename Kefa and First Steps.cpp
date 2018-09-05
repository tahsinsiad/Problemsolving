#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=0,temp=0,y=0,z=0;
    cin>>n;
    while(n)
    {
        cin>>x;
        if(x>=z)
        {
            ans++;
        }
        else
        {
            ans=1;
        }
        y=max(ans,y);
        z=x;
        n--;

    }
    cout<<y;
}
