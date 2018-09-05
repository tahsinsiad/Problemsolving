#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,cnt=0;
    int x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        if(sum<0)
        {
            cnt++;
            sum=0;
        }
    }
    cout<<cnt;
}
