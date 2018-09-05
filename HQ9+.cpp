#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,d,f=0,g,h;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            f=1;
            break;

        }

    }
    if(f==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
