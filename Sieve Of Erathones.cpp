#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool status[100001];
    int i,j,k,l,n,sq,T,ans,f,x,m;
    //int a[100];
    cin>>T;

    while(T)
    {
    cin>>m>>n;
    sq=sqrt(n);
    f=0;
    for(i=4;i<=n;i+=2)
    {
        status[i]=true;
    }
    for(i=3;i<=sq;i+=2)
    {
        if(!status[i])
        {
            for(j=i*i;j<=n;j+=i)
            {
                //cout<<j<<endl;
                status[j]=true;
            }
        }
    }
    status[1]=true;
    for(i=m;i<=n;i++)
    {
        if(!status[i])
        {

           ans=i;
           f++;


        }
    }
if(f==0)
{
    cout<<-1<<endl;
}
else
{
    cout<<ans<<endl;
}

    T--;
    }
}
