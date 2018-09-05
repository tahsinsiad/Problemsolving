#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x,y,r,low=1.0,high=400.0,mid;
    char c[10];
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {


    cin>>a>>c>>b;
    r=sqrt(a*a+b*b)/2.0;
    mid=acos((r*r+r*r-b*b)/(2*r*r));
    y=r*mid;
    x=400.0/(2.0*a+2.0*y);
    cout<<"Case "<<i<<": ";
    cout<<fixed<<setprecision(8)<<a*x<<" "<<b*x<<endl;
    }

}
