#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        x=max(x,a[i]);
    }
    y=a[n-1];
    printf("%d",y^x);
}
