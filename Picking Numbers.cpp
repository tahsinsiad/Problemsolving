#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,temp=0;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i])
        cout<<cnt<<" ";
    }

}
