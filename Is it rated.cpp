#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,x=0;
    int c[1001],d[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]!=d[i])
        {
            f++;
        }
    }
    if(f==0)
    {
        for(int i=0;i<n;i++)
        {
            if(c[i]<c[i+1])
            {
                x++;
            }
        }
        if(x==0)
        {
            cout<<"maybe";
            return 0;
        }
        else
        {
            cout<<"unrated";
            return 0;
        }
    }
    else
    {
        cout<<"rated";
    }
}
