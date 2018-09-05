#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y=0,z;
    cin>>n>>m;
    if(n%2==0)
    {
     x=n/2;
    }
    else{
        x=n/2+1;
    }

    while(x<=n)
    {
        if(x%m==0)
        {
           y=1;
           break;
        }
        x++;
    }
    if(y==1)
    {
        cout<<x;
    }
    else
    {
        cout<<"-1";
    }

}
