#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if( i%2==1 && i<=n-(n%2)-2)
            cout<<"-";
    }
}
