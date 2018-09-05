#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0,cnt1;
    char temp;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            cnt++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        temp=s[i];
        if(temp=='V')
        {
            s[i]='K';
        }
        else
        {
            s[i]='V';
        }
        cnt1=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='V' && s[j+1]=='K')
            {
                cnt1++;
            }
        }
        cnt=max(cnt,cnt1);
        s[i]=temp;
    }
    cout<<cnt;

}
