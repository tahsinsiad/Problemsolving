#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,res;
    int cnt=0;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    res=s1+s2;
    sort(res.begin(),res.end());
    sort(s3.begin(),s3.end());

    if(res==s3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
