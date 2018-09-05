#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x,y,z,ans,l,k,d,t,u;
    cin>>n>>m>>a>>b;

    if(n>m)
    {
        x=n/m;
        y=n%m;
        z=min((y*a),b);
        if(y!=0)
        {
           t=(x*b)+z;
        }
        else
        {
            t=(x*b);
        }
        d=n*a;
        ans=min(d,t);
        cout<<ans;

    }
    else
    {

        k=(a*n);
        l=min(k,b);
        cout<<l;
    }


}
