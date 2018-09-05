#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,gcd;
    cin>>a>>b>>n;

    while(1)
    {

        for(int i=1; i<=a || i<=n; i++)
        {
            if(a%i==0 && n%i==0)
            {
                gcd=i;

            }
        }
        if(gcd>n || n==0)
        {
            cout<<"1";
            break;
        }
        n=n-gcd;
        for(int i=1; i<=b || i<=n; i++)
        {
            if(b%i==0 && n%i==0)
            {
                gcd=i;

            }
        }
        if(gcd>n || n==0)
        {
            cout<<"0";
            break;
        }
        n=n-gcd;

    }

}
