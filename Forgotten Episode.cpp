#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,temp;
    int a[200000];
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;;i++)
    {
        if(a[i]!=i)
        {
            cout<<i;
            return 0;
        }
    }
}
