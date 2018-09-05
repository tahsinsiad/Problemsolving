#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    char c;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        c=a[a.size()-1];
        for(int j=a.size()-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=c;
        s.insert(a);
    }
    cout<<s.size();

}

