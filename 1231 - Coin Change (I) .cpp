#include<bits/stdc++.h>
using namespace std;
int coin[51],a[51];
int make;
int dp[51][1001];
int n;
int call(int i,int amount)
{
    if(i==n)
    {
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    for(int j=0;j<=a[i];j++)
    {
       if(amount-(coin[i]*j>=0))ret1+=call(i+1,amount-(coin[i]*j))%100000007;
       else break;
    }

    ret1=ret1%1000000007;
    return ret1;

}
int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&make);
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&coin[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf ("Case %d: %lld\n",k,call(0,make) ) ;

        //cout<<"Case "<<k<<": "<<call(0,make)<<endl;
        k++;


    }
    return 0;
}

