#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,x,y,z,m,n,p;
    cin>>A>>B>>C;
    x=A/2;
    y=min(B,abs(C-x));
    z=x+y;
    m=min(A/2,C);
    n=min(B,C);
    cout<<max(z,max(m,n));
}
