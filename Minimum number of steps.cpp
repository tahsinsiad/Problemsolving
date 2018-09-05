#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnta=0, cntb=0,x,y,z,f;
    string s;
    cin>>s;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='b')
        {
            cntb++;
        }
        else
        {
            cnta=(cnta+cntb)%1000000007;
            cntb=(cntb*2)%1000000007;
        }
    }
    cout<<cnta<<endl;

}
