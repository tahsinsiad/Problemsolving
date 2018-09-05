#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,x,y=0;
    cin>>n>>k;
    x=240-k;
    for(int i=1;i<=n;i++)
    {
       y+=(5*i);
       if(y<=x)
       {
           cnt++;
       }
    }
    cout<<cnt;
}

