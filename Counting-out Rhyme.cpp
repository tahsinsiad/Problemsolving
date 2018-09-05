#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0,x;
    vector<int>a;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    for(int i=0;i<k;i++)
    {
        cin>>x;
        ans=(ans+x)%n;
        cout<<a[ans]<<" ";
        a.erase(a.begin()+ans);
        n--;
    }
}
