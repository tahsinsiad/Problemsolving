#include<bits/stdc++.h>
using namespace std;
int a[1000002];
int main()
{
    long long int n,i,flag=0;
    scanf("%I64d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);

        if(a[i]%2==1)
        {
            flag=1;;
        }
    }
    if(flag==1)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
}
