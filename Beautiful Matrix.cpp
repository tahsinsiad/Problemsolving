#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6];
    int cntr=0,cntc=0,cnt,x,y;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
               x=i;
               y=j;
            }
        }
    }
    if(x<3)
    {
        cntr=3-x;
    }
    else if(x>3)
    {
       cntr=x-3;
    }
    else
    {
       cntr=0;
    }

    if(y<3)
    {
        cntc=3-y;
    }
    else if(y>3)
    {
       cntc=y-3;

    }
    else
    {
       cntc=0;
    }
    //cout<<cntr<<" "<<cntc<<endl;
    cnt=abs(cntr)+abs(cntc);
    cout<<cnt;

}
