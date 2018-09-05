#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[1010][4];
    int cnt1=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        cnt1=0;
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)
                cnt1++;
        }
        if(cnt1>=2)
           {
               ans++;
           }
    }
    cout<<ans;
}
