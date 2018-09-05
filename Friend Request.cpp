#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,y;
    string s;
    vector<string> v;
    cin>>T;
    while(T)
    {
        cin>>s>>x>>y;
        if(x==1 || y>=30)
        {
           v.push_back(s);
        }
        T--;
    }
    vector<string>::iterator it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<endl;
        it++;
    }
}
