#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,pG,pT,ph;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='G')
        {
            pG=i;

        }
        else if(s[i]=='T')
        {
            pT=i;

        }

    }
    if(pG>pT)
    {
        while(1)
        {
            if(s[pG]=='#')
            {
                cout<<"NO";
                return 0;
            }
            else if(s[pG]=='T')
            {
                cout<<"YES";
                return 0;
            }
            else if(pG<0)
            {
                cout<<"NO";
                return 0;
            }
            pG-=k;
        }
    }
    else if(pT>pG)
    {
        while(1)
        {
            if(s[pG]=='#')
            {
                cout<<"NO";
                return 0;
            }
            else if(s[pG]=='T')
            {
                cout<<"YES";
                return 0;
            }
            else if(pG>n-1)
            {
                cout<<"NO";
                return 0;
            }
            pG+=k;
        }

    }


}
