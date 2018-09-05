#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cntr=0,fn=1,fr=1,fnr=1,x,y,z;
    cin>>n;
    int a[110];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cntr++;
        }
    }
    for(int j=1;j<=n;j++)
    {
        fn=fn*j;
    }
    for(int k=1;k<=cntr;k++)
    {
        fr=fr*k;
    }
    x=n-cntr;
    for(int m=1;m<=x;m++)
    {
        fnr=fnr*m;
    }
    y=fn/(fr*fnr);
    cout<<y-(2*cntr);

}
