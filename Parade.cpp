#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,maxk=0,sumL=0,sumR=0,ans,f=0;
    int a[100005],b[100005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        sumL+=a[i];
        sumR+=b[i];
    }
    maxk=abs(sumL-sumR);
    for(int i=0;i<n;i++)
    {
        k=abs(((sumL-a[i])+b[i])-((sumR-b[i])+a[i]));
        if(k>maxk)
        {
            f=1;
            maxk=k;
            ans=i;
        }
    }
    if(f==1)
    {
        cout<<ans+1;
    }
    else
    {
        cout<<0;
    }
}

