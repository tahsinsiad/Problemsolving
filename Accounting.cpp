#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,n,x,y,z;
    cin>>A>>B>>n;
    for(long double i=-1000;i<=1000;i++)
    {
        if(A*pow(i,n)==B)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"No solution";
}
