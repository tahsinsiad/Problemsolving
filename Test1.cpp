#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int i,j,k,l,cnt=0;
    cin>>a;
    strcpy(b,a);
    //strrev(a);
    if(strlen(a)%2!=0)
    {
        for(i=0; i<=strlen(a)/2+1; i++)
        {
            if(a[i]!=a[strlen(a)-(i+1)])
            {
                cnt++;
            }
        }
        if(cnt!=1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        for(i=0; i<strlen(a)/2; i++)
        {
            if(a[i]!=a[strlen(a)-(i+1)])
            {
                cnt++;
            }
        }
        if(cnt!=1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }


}
