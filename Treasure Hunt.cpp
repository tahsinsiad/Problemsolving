#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x,y,a,b,c,d;
    cin>>x1>>y1>>x2>>y2;
    cin>>x>>y;
    a=abs(x1-x2)%x;
    b=abs(y1-y2)%y;
    c=(abs(x1-x2)/x)%2;
    d=(abs(y1-y2)/y)%2;
    if(a==0 && b==0 &&(c==d))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
