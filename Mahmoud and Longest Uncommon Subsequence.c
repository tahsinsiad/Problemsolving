#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int la,lb,x,cnt=0,ans;
    cin>>a>>b;
    la=a.size();
    lb=b.size();
    x=max(la,lb);
    for(int i=0; i<x; i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
    }
    if(cnt==la)
    {
        cout<<-1;
    }
    else
    {
        cout<<x;
    }


}

