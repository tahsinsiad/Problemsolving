#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,cnt;
    cin>>q;
    while(q)
    {
    cnt=0;
    cin>>n;
    if(n%7==0 || n%4==0 || n%7==4 || n%4==7)
    {
        cout<<"Yes"<<endl;
        cnt++;
    }
    else
    {
        while(n>0)
        {
            n-=4;
            if(n%7==0)
            {
                cout<<"Yes"<<endl;
                cnt++;
                break;
            }
        }
    }
    if(cnt==0)
    {
        cout<<"No"<<endl;
    }
    q--;
    }
}
