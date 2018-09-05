#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cin>>n;
    if(n<=5)
    {
        cout<<s[n-1];
    }
    else
    {
        while(n>5)
        {
            n=n/2-2;
        }
        cout<<s[n-1];
    }
}
