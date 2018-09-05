#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,swapc=0;
    int a[2100];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]+d;
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);

            swapc++;

        }
    }
    cout<<swapc;
}
