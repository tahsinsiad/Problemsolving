#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    while(n)
    {
        if(n%10!=1 && n%100!=14 && n%1000!=144)
        {
            cout<<"NO";
            return 0;
        }
        n=n/10;

    }
   if(f==1)
   {
       cout<<"NO";

   }
   else
   {
       cout<<"YES";
   }

}
