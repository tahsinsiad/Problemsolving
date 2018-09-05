#include<iostream>
using namespace std;
int main()
{
    int k2,k3,k5,k6,x,y,z,w,sum,a;
    cin>>k2>>k3>>k5>>k6;
    x=min(k2,k5);
    y=min(k5,k6);
    z=min(x,y);
    w=k2-z;
    a=min(w,k3);
    sum=(256*z)+(32*a);
    cout<<sum;
}
