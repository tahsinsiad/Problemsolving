#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string a,b;
    int x;
    cin>>b>>a;
    if(b=="R")
    {
        x=-1;
    }
    else
    {
        x=1;
    }
    for(int i=0;i<a.size();i++)
    {
        a[i]=s[s.find(a[i])+x];
        cout<<a[i];

    }
}
