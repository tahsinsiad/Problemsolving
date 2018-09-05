#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,x=1,y,z,temp=0;
    int a[1010];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n>1)
    {

    for(int i=0;i<n-1;i++)
    {

        cnt=1;
        while(a[i]==a[i+1] && i<n-1)
        {
            cnt++;
            i++;

        }

        temp=max(temp,cnt);

    }
    cout<<temp<<" ";
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            x++;
        }
    }
    cout<<x;
    }
    else if(n==1)
    {
        cout<<"1"<<" "<<"1";
    }
    else
    {
        cout<<"0"<<" "<<"0";
    }

}
