#include<bits/stdc++.h>
using namespace std;
int cost[100],weight[100];
int n,cap;
int func(int i,int w)
{
    int profit1=0,profit2=0;
    if(i==n+1)
    {
        return 0;
    }
    if(w+weight[i]<=cap)
    {
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    else
    {
        profit1=0;
    }
    profit2=func(i+1,w);
    return max(profit1,profit2);

}
int main()
{
    cin>>n>>cap;
    for(int i=1;i<=n;i++)
    {
        cin>>weight[i]>>cost[i];
    }
    cout<<func(1,0);
}
