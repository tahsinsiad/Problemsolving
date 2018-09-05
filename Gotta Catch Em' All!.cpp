#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cntb=0,cnts=0,cnta=0,cntr=0,cntu=0,cntl=0,cntB=0,f=0,cntW=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            cntB++;
        }
        else if(s[i]=='u')
        {
            cntu++;
        }
        else if(s[i]=='l')
        {
            cntl++;
        }
        else if(s[i]=='a')
        {
            cnta++;
        }
        else if(s[i]=='b')
        {
            cntb++;
        }
        else if(s[i]=='s')
        {
            cnts++;
        }
        else if(s[i]=='r')
        {
            cntr++;
        }
    }

        while(cntB>=1 && cntb>=1 && cnta>=2 && cntu>=2 && cntl>=1 && cnts>=1 && cntr>=1)
        {
            f=1;
            cntW++;
            cntB--;
            cntb-=1;
            cnta-=2;
            cntu-=2;
            cntl--;
            cnts--;
            cntr--;
        }


        if(f==1)
    cout<<cntW;
    else
        cout<<0;


}
