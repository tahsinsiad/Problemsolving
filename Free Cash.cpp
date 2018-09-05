#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v;
    int n,cash=1;
    int a[200000],b[200000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        if(v[j])
    }
    cout<<cash;

}
