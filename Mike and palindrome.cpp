#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[16];
    int cnt=0;
    cin>>a;
    int len=strlen(a);

    for(int i=0;i<len/2;i++)
    {
        if(a[i]!=a[len-(i+1)])
        {
            cnt++;
        }
    }

    if(cnt>=2)
    {
        cout<<"NO";
    }
    else if(cnt==1)
    {
        cout<<"YES";

    }
    else if(cnt==0)
    {
        if(len%2!=0)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }

}
