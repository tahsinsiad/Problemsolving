#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    char a[400001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%4==0)
        {
            a[i]='a';
        }
        else if(i%4==1)
        {
            a[i]='a';
        }
        else if(i%4==2)
        {
            a[i]='b';
        }
        else if(i%4==3)
        {
            a[i]='b';
        }
    }
    a[n]='\0';
    cout<<a;
}
