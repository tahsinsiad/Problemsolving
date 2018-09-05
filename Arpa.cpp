#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    long long int y;
    int a[100010],b[100];
    long long int cnt=0;
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

