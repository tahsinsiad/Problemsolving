#include<iostream>
using namespace std;
int main()
{
    int n,a,cnt=0,x,y;
    cin>>n;
    cin>>a;
    x=a;
    y=a;
    for(int i=1; i<=n-1; i++)
    {
        cin>>a;
        if(a<x)
        {
            x=a;
            cnt++;
        }
        if(a>y)
        {
            y=a;
            cnt++;
        }
    }
    cout<<cnt;
}
