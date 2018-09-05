#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,sum=0,sum1=0,f=0;
    int a[110];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        sum1+=a[i];
        if(sum1>sum-sum1)
        {
            cout<<i;
            return 0;
        }
    }

}
