#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,cnt=0;
    vector<pair<int,int>> v;
    int a[1000],b[1000];
    cin>>s>>n;
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
        if(s>v[i].first)
        {
            s=s+v[i].second;
            cnt++;
        }
    }
    //cout<<cnt;
    if(cnt==n)
    {
       cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
