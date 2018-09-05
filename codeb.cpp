#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int y;
    int a[100010],b[100];
    int cnt=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            y=a[i]^a[j];
            //cout<<y<<" ";
            if(y==x)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
}
