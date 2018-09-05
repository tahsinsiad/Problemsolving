#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,maxi=0,ans=0;
   cin>>n;
   int a[110];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       maxi=max(maxi,a[i]);
   }
   for(int i=0;i<n;i++)
   {
       ans+=(maxi-a[i]);
   }
   cout<<ans;
}
