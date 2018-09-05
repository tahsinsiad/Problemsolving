#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,x,y,z;
    cin>>a>>b>>s;
    x=abs(a);
    y=abs(b);
    z=x+y;
    if(s>=z&& (s-z)%2==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
