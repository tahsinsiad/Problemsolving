#include<bits/stdc++.h>
using namespace std;

string s;
int main()
{
    int n,ans=0;
    set<char>ch;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            ch.insert(s[i]);
            ans=max(ans,(int)ch.size());
        }
        else
        {
            ch.clear();
        }
    }
    cout<<ans<<endl;
}
