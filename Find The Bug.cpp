#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c;
    char a[1001][1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='X')
            {
                cout<<i<<","<<j;
                return 0;

            }
        }
    }
}
