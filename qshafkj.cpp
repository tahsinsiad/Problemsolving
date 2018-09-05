#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,cnt1=0;
    for(int i=0;i<s.size();i++)
    {
        /*while(s[i]!='a' && s[i]!='b' &&s[i] != 'c' && s[i]!='\0')
        {
            cnt++;
            i++;
        }*/
        while(s[i]!='c' && s[i]!='b' &&s[i] != 'a' && s[i]!='\0')
        {
            cnt1++;
            i++;
        }
    }
    cout<<cnt<<" "<<cnt1;
}
