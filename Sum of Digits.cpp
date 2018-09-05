#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,sum,len,x;
    char s[100001];
    cin>>s;
    x=strlen(s);
    while(x>1)
    {
        cnt++;
        sum=0;
        for(int i=0;i<x;i++)
        {
            sum=sum+(s[i]-48);
        }
        sprintf(s,"%d",sum);
        x=strlen(s);
    }
    cout<<cnt;
}
