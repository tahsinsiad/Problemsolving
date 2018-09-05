#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cnt1=0,cnt0=0,ans;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
           cnt1++;
        }
        else

        {
            cnt0++;
        }
    }
    ans=min(cnt1,cnt0);
    cout<<ans*2;

}
