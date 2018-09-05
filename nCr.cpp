#include<bits/stdc++.h>
using namespace std;

int a[50][50];

int nCr(int n,int r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(a[n][r]!=-1) return a[n][r];
    else
    {
        a[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return a[n][r];

    }

}

int main()
{
    int x,y;
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {
            a[i][j]=-1;
        }
    }
    cin>>x>>y;
    cout<<nCr(x,y);
}
