#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i=0;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it=s.begin();
    while(it!=s.end())
    {
        if(i==1)
        {
            cout<<*it;
        }
        it++;
        i++;
    }





}
