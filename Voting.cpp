#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cntD=0,cntR=0,n;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='D')
        {
            cntD++;
        }
        else

        {
            cntR++;
        }
    }
    /*if(cntD==cntR)
    {
        cout<<s[0];
        return 0;
    }*/
    if(s[0]=='D')
    {
       if(cntD>=cntR)
        {
            cout<<"D";
        }
        else
        {
            cntR=cntR-cntD;
            if(cntR<cntD)
            {
                cout<<"D";
            }
            else
            {
                cout<<"R";
            }
        }
    }
    else if(s[0]=='R')
    {
       if(cntR>=cntD)
        {
            cout<<"R";
        }
        else
        {
            cntD=cntD-cntR;
            if(cntD<cntR)
            {
                cout<<"R";
            }
            else
            {
                cout<<"D";
            }
        }
    }
}
