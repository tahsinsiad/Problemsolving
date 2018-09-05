#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,r1,l2,r2,k,x,y,z,ans,b,c,d;
    cin>>l1>>r1>>l2>>r2>>k;
    x=max(l1,l2);
    y=min(r1,r2);
    if(x>y)
    {
        cout<<"0";
    }
    else
    {
        if(k>=x && k<=y)
        {
            cout<<y-x;
        }
        else{
            cout<<y-x+1;
        }
    }
}
