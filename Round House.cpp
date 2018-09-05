#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans,x;
    cin>>n>>a>>b;
    x=(((a-1)+b)%n)+n;
    ans=(x%n)+1;
    cout<<ans;

}
