#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110];
    int n,x=99999999,y=0,z,posmax,posmin,k,l,m,o=0,p;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        x=min(x,a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        y=max(y,a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==y)
        {
            posmax=i;

        }
        else if(a[i]==x)
        {
            posmin=i;

        }
    }

    if(a[1]==x || a[1]==y)
    {
        z=n-1;
        cout<<z;
    }
    else
    {
        if(posmax<posmin)
        {

            k=posmax-1;
            l=n-posmin;
            if(l>k)
            {
                cout<<n-posmax;
            }
            else
            {
                cout<<posmin-1;
            }
        }
        else
        {
            k=posmin-1;
            l=n-posmax;
            if(l>k)
            {
                cout<<n-posmin;
            }
            else
            {
                cout<<posmax-1;
            }
        }

    }
}
