#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2;
    x3=x1+y2-y1;
    y3=y1+x1-x2;
    if(x1==x2)
    {
        cout<<x3<<" "<<y1<<" "<<x3<<" "<<y2;
    }
    else if(y1==y2)
    {
        cout<<x1<<" "<<y3<<" "<<x2<<" "<<y3;
    }
    else if(abs(x1-x2)==(y1-y2))
    {
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    else
    {
        cout<<-1;
    }
}
