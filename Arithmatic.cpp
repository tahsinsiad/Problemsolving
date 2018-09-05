#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M,x,ans,y;
    //int a[200];
    cin>>N>>M;
    x=(N*(N+1))/2;
    for(int i=0;i<M;i++)
    {
       cin>>y;
       x=x-y;
    }
    cout<<x<<endl;


}
