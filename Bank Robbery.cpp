#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,cnt=0;
    long long int x,i;
    cin>>a>>b>>c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>b&&x<c)
        {
           cnt++;
        }
    }
    cout<<cnt;


}
