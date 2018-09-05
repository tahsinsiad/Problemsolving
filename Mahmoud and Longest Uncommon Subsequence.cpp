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
    if(a.compare(b)==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<x;
    }

}

