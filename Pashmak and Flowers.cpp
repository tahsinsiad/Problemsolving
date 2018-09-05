#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y=0,z,p=0,q=0,i;
    long long int a[210000];
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    //p=count(a,a+n,a[0]);
    //q=count(a,a+n,a[n-1]);
    for( i=0;i<n;i++)
    {
        if(a[i]==a[0])
        {
           p++;
        }
        else if(a[i]==a[n-1]){
            q++;
        }
    }
    cout<<a[n-1]-a[0]<<" ";
    if(p==n)
    {
        cout<<(n*(n-1))/2;
    }
    else
    {
      cout<<p*q;
    }


}
