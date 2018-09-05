#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double ax,ay,bx,by,cx,cy;
    long double x,y,dis1,dis2;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    x=(by-ay)/(bx-ax);
    y=(cy-ay)/(cx-ax);
    dis1=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    dis2=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
    //cout<<x<<endl<<y<<endl;
    //cout<<dis1<<endl<<dis2;
    if(x==y || dis1!=dis2)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}
