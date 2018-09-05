#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>v;
    long long int a[100002],n,x,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[0] && a[i]<a[n-1])
        {
            cnt++;
        }
    }
    cout<<cnt;


}
