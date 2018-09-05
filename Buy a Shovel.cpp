#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1,x;
    cin>>k>>r;
    while(1)
    {
        x=k*i;
        if(x%10==r || x%10==0)
        {
            cout<<i;
            break;
        }
        i++;
    }
}
