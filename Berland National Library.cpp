#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[12];
    set<int>v;
    int n,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>r;
        v.insert(r);
    }
    cout<<v.size();
}
