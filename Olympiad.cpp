#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>v;
    int x,n,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            v.insert(x);
        }
    }
    ans=v.size();
    cout<<ans;



}

