#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,d=1,m;
    long long int  rem;
    cin>>n;
    m=n;
    while(m>=10)
    {

        m/=10;
        d=d*10;
    }
    cout<<(m+1)*d-n;
}
