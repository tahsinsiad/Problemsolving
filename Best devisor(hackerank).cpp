#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    int p,q,r=0,s=0,t=0;
    int a[100];
    cin >> n;
    for(int i=2; i<=n; i++)
    {

        j=0;
        while(n%i==0 && j>s)
        {

            /*p=i;
            s=0;
            while(p!=0)
            {
                s=s+p%10;
                p=p/10;
            }

            t=max(t,s);
             r=1;*/

            a[j]=i;
            j++;
            s++;
        }
    }
    /*if(r==1)
    {
        cout<<t;
    }
    else{
        cout<<n;
    }*/
    for(int k=0;k<s;k++)
    {
        cout<<a[k]<<" ";
    }
    //cout<<t;
    return 0;
}
