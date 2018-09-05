#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)
        {
            cout<<-1;
        }
        else
        {
            for(int j=1;j<=n-1;j++)
            {
                cout<<1;
            }
            cout<<0;
        }
    }
    else if(t<10)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<t;
        }
    }
}
