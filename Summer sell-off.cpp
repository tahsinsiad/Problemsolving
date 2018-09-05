#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,f,k,l,sum=0,i;
    vector<long long int>v;
    cin>>n>>f;
    for(i=0;i<n;i++)
    {
        cin>>l>>k;
        sum+=min(l,k);
        v.push_back(min(2*l,k)-min(l,k));

    }
    sort(v.begin(),v.end(),greater<long long int>());
    vector<long long int>::iterator it=v.begin();
    while(it<v.begin()+f)
    {
        sum+=*it;
        it++;

    }
    cout<<sum;
}
