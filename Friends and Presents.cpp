#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt1,cnt2,x,y,mid,low,high,remx,remy,total;
    cin>>cnt1>>cnt2>>x>>y;
    low=1,high=100000000000;
    while(low<high)
    {
        mid=(low+high)/2;
        remx=mid-(mid/x);
        remy=mid-(mid/y);
        total=mid-(mid/(x*y));
        if(cnt1<=remx&&cnt2<=remy&&cnt1+cnt2<=total)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<high;
    return 0;
}
