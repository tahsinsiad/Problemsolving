#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    int a[200],b[200];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i] && abs(b[i]-a[i])>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
