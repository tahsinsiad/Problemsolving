#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t2=((n-1)/k)*t;
    //cout<<t2;
    if(t2>d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
