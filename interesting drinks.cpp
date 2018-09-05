#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,cnt,x,y,z;
    vector<int>a,p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       a.push_back(x);
    }
    sort(a.begin(),a.end());
    cin>>q;
    vector<int> ::iterator up;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        up=upper_bound(a.begin(),a.end(),y);
        p.push_back(up-a.begin());
    }
    vector<int>::iterator it=p.begin();
    while(it!=p.end())
    {
        cout<<*it<<endl;
        it++;
    }

}
