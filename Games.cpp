#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[i]==b[j])
            {
                ans++;
            }
        }
    }
    cout<<ans;
}
