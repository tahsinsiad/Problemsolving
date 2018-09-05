#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,x;
    int a[101][101];
    cin>>n>>m;
    x=min(n,m);
    while(x>0)
    {
        n--;
        m--;
        cnt++;
        x--;
    }
    if(cnt%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }

}
