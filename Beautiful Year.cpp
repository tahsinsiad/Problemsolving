#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,rem,f=0,x;

    cin>>y;
    while(1)
    {
        y++;
        x=y;
        set<int>v;
        while(x)
        {
            rem=x%10;
            v.insert(rem);
            x=x/10;
        }
        if(v.size()==4)
        {
            cout<<y;
            return 0;
        }

    }



}
