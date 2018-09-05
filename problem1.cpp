#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,fx,fy,fz;
    x=1,y=3;
    fx=x*x-x-2;
    fy=y*y-y-2;
    if(fx*fy>0)
    {
        cout<<"Root not found";
    }
    for(;(y-x)>0.001;)
    {
        z=x-((y-x)*fx)/(fy-fx);
        fz=z*z-z-2;
        if(fx*fz<0)
            y=z;
        else
            x=z;

    }
    cout<<"Root is : "<<z;
    return 0;
}

