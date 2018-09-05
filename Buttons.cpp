#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,sum=0,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=(n-i)*i;
    }
    cout<<sum+n;
}
