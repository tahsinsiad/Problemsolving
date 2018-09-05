#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=1;
    cin>>a>>b;

    while(a>=0 && b>=0)
    {
        a=a-i;
        i++;
        b=b-i;
        i++;
    }
    if(a<0)
    {
        cout<<"Vladik";
    }
    else
    {
        cout<<"Valera";
    }
}
