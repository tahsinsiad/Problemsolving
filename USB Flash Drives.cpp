#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=0,y=0,z,d;
    int a[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        if(x<m)
        {
            x=x+a[i];
            y++;
        }

    }
    cout<<y;

}
