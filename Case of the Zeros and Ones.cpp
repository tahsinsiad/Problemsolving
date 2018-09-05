#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt0=0,cnt1=0,x,y,z;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
        else{
            cnt0++;
        }
    }
    x=min(cnt1,cnt0);
    cout<<n-(x*2);
}
