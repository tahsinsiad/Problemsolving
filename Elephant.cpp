#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,ans,div;
    cin>>n;
    rem=n%5;
    div=n/5;
    if(rem==0)
    {
        cout<<div;
    }
    else{
        cout<<div+1;
    }
}
