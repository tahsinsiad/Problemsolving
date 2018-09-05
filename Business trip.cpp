#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,sum=0,f;
    int a[13];
    cin>>n;
    f=n;
    for(int i=0;i<12;i++)
    {
       cin>>a[i];

    }
    sort(a,a+12,greater<int>());
    int j=0;
    while(f>0&&j<=11)
    {
        f=f-a[j];
        j++;
        cnt++;

    }
    if((n-f)>=n)
    {
        cout<<cnt;
    }
    else
    {
        cout<<-1;
    }


}
