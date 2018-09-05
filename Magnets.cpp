#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    int a[110000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    /*if(n==1)
    {
        cout<<"1";

    }*/


        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[i+1])
            {
                cnt++;
            }
        }
        cout<<cnt;
        return 0;


}
