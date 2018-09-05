#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=1,x;
    int a[100001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        x=0;
        x=max(x,a[i+j]);
        j++;
    }
}
