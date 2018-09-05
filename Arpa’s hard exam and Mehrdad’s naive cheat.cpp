#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int x;
    cin>>n;
    string s="8426";
    if(n==0)
    {
        cout<<"1";
    }
    else{
    x=(n-1)%4;
    cout<<s[x];
    }


}
