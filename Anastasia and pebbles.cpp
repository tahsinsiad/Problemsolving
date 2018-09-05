#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,n,k,cnt=0,j=0,l=0,p=0;
    int a[100001],b[100001],c[100],rem[100001];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }

    for(int m=0;m<j;m++)
    {
        if(b[m]%(2*k)!=0)
        {
            rem[p]=b[m]%(2*k);
            p++;
        }
    }
    ans=j+p+abs(l-p);
    cout<<ans;
}
