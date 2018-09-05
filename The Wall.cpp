#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,a,b,sumx=0,sumy=0,cnt,gcd;
    cin>>x>>y>>a>>b;
    for(int i=x;i<=b;i++)
    {
        if(i%x==0 && i%y==0)
        {
            gcd=i;
            break;
        }
    }

    cnt=(b/gcd)-(a-1)/gcd;

    cout<<cnt;
}
