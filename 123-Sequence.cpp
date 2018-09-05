#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0,cnt3=0;
    int sum1,sum2,sum3,x,y,z,ans;
    int a;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        cnt1++;
        else if(a==2)
        cnt2++;
        else
        cnt3++;

    }
    sum1=cnt1+cnt2;
    sum2=cnt2+cnt3;
    sum3=cnt3+cnt1;
    x=min(sum1,sum2);
    y=min(x,sum3);
    //cout<<min(cnt1+cnt2,min((cnt2+cnt3),(cnt3+cnt1)) );
    printf("%d",y);
}
