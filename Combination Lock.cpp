#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,cnt=0,s,r,v,temp,temp1;
    string a,b;
    cin>>n;
    cin>>a>>b;
    for(int j=0; j<n; j++)
    {
        if(a[j]>=b[j])
        {
            x=a[j]-b[j];
        }
        if(a[j]<b[j])
        {
            x=b[j]-a[j];
        }
        z=10-x;
        temp=min(z,x);
        cnt+=temp;

    }
    cout<<cnt;


}
