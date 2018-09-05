#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,a,b,ans;
    cin>>k>>a>>b;
    if(a>=0 && b>0)
    {
        if(a==0)
        {
            ans=b/k+1;
            cout<<ans;
            return 0;
        }

        else
        {
            ans=b/k;
            cout<<ans;
            return 0;
        }

    }
    else if(a<0 && b<=0)
    {
        if(b==0)
        {
            ans=abs(a)/k+1;
            cout<<ans;
            return 0;
        }

        else
        {
            ans=abs(b)/k;
            cout<<ans;
            return 0;
        }
    }
    else if(a==b)
    {
        if(abs(a)%k==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    else
    {
        ans=((b/k)*2)+1;
        cout<<ans;
    }
}
