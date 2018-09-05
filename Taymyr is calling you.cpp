#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,z,x,y,ans;
    cin>>n>>m>>z;
    x=__gcd(n,m);
    y=(n*m)/x;
    ans=z/y;
    cout<<ans;

}

