#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=INFINITY;
    int a[100];
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);

    for(int j=0; j<=m-n; j++)
    {
        ans=min(ans,(a[j+n-1]-a[j]));
    }
    cout<<ans;

}
