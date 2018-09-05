#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,x,m=1,p=1;

    cin>>n>>k;
    x=(n+1)/2;
    if(k<=x)
    {
        cout<<2*k-1;
    }
    else
    {
        cout<<2*(k-x);
    }

}
