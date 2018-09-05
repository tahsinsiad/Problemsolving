#include<bits/stdc++.h>
using namespace std;
int m[100003];
int a,b,c,d,e,f;
int fn(int n)
{
    if(n==0) return a % 10000007;
    if(n==1) return b % 10000007;
    if(n==2) return c % 10000007;
    if(n==3) return d % 10000007;
    if(n==4) return e % 10000007;
    if(n==5) return f % 10000007;
    /*if(m[n]==0)
    {
        m[n]=fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
        return m[n];
    }*/
    if(m[n]!=-1) return m[n] % 10000007;
    else
    {
        m[n]=fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
        return m[n] % 10000007;
    }

}
int main()
{
    int x,t,j=1,y;

    scanf("%d",&t);
    while(t)
    {

        for(int i=0; i<100003; i++)
        {
            m[i]=-1;
        }
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);
        y=fn(x);
        printf("Case %d: %d\n", j, y % 10000007);
        j++;
        t--;
    }
    return 0;

}
