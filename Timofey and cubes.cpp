#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int a[200002];
    cin>>n;
    x=n/2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        if(i%2==0)
        {
          swap(a[i],a[n-i-1]);
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
