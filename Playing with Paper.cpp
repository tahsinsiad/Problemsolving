#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum=0;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a>=b)
        {
          sum+=a/b;
          a=a%b;
        }
        else
        {
            sum+=b/a;
            b=b%a;
        }
    }
    cout<<sum;
}
