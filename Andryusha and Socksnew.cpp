#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,sock=0,ans=0;
    int a[200001];
    memset(a,0,sizeof(a));
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        cin>>r;
        a[r]++;
        if(a[r]==1)
        {
            sock++;
        }
        else if(a[r]==2)
        {
            sock--;
        }
        ans=max(ans,sock);
    }
    cout<<ans;
    return 0;
}
