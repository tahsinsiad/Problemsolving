#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,j=3;
    vector<string>v;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        if(360%(180-a)==0)
        {

            v.push_back("YES");
        }
        else
        {

            v.push_back("NO");
        }
    }
    vector<string>::iterator it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<endl;
        it++;
    }

}
