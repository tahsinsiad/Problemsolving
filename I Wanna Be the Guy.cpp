#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,p;
    cin>>n;
    set<int>x;
    for(int i=0; i<2; i++)
    {
        cin>>p;
        for(int j=0; j<p; j++)
        {
            cin>>s;
            x.insert(s);
        }

    }
    if(x.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}
