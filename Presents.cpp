#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[101],b[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        a[b[i]]=i;

    }
    for(int j=1;j<=n;j++)
    {
        cout<<a[j]<<" ";
    }
}
