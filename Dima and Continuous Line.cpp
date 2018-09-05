#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    int a[2000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        while(a[i]<a[i+2])
        {
            i++;
            f++;
        }

    }
    if(f==n-1)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
