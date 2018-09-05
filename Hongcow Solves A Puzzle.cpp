#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,cnt=0;
   char a[600][600];
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(a[i][j]=='.')
           {
               cnt++;
           }
       }
   }
   if(cnt%2==1)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }
}
