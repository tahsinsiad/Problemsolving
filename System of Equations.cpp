#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,z,c,d,e,f,g,h,cnt=0;
    cin>>a>>b;
    for(int i=0;i<=b;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(((i*i)+j==a) && (i+(j*j)==b))
            {
                cnt++;
            }
        }

    }
    cout<<cnt;

}
