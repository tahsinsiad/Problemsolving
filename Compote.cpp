#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,l,m,n,sum=0,ans=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        l=1*i;
        m=2*i;
        n=4*i;
        if(m<=b && n<=c)
        {
            sum=l+m+n;
            ans=max(ans,sum);
        }
    }
    cout<<ans;
}
