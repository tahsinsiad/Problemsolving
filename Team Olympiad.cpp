#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1,cnt2,cnt3,x,y,z,b,j=1,k=1,l=1;
    int a[5002],a1[50001],a2[50001],a3[50001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cnt1=count(a+1,a+n+1,1);
    cnt2=count(a+1,a+n+1,2);
    cnt3=count(a+1,a+n+1,3);
    x=min(cnt1,min(cnt2,cnt3));

    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            a1[j]=i;
            j++;
        }
        else if(a[i]==2)
        {
            a2[k]=i;
            k++;
        }
        else
        {
            a3[l]=i;
            l++;
        }
    }
    if(cnt1==0 || cnt2==0 || cnt3==0)
    {
        cout<<0;
    }
    else
    {
        cout<<x<<endl;
        for(int c=1;c<=x;c++)
        {
            cout<<a1[c]<<" "<<a2[c]<<" "<<a3[c]<<endl;
        }
    }



}
