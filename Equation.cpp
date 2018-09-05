#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C,d,x,y;
    cin>>A>>B>>C;
    x=(-B*1.0+sqrt(B*B-4*A*C))/2/A;
    y=(-B*1.0-sqrt(B*B-4*A*C))/2/A;
    d=B*B-4*A*C;
    if(A==0&&B==0&&C==0)
    {
        cout<<-1<<endl;
    }
    else if(A==0&&B==0&&C!=0)
    {
        cout<<0<<endl;
    }
    else if(A==0)
    {
        cout<<1<<endl;
        printf("%lf",-(double)C/B);

    }
    else if(d<0)
    {
        cout<<0<<endl;
    }
    else if(d==0)
    {
        cout<<1<<endl;
        printf("%.9lf\n",-(B*1.0/2/A));
    }
    else if(A>0)
    {
        cout<<2<<endl;

        printf("%.9lf\n%.9lf\n",y,x);


    }
    else
    {
        cout<<2<<endl;
        printf("%.9lf\n%.9lf\n",x,y);
    }


}
