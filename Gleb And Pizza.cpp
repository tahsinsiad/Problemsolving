#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,d,k,x,y,sr,ans=0;
    cin>>r>>d>>k;
    for(int i=0;i<k;i++)
    {
        cin>>x>>y>>sr;
        if(sqrt(x*x+y*y)+sr<=r)
        {
            if(sqrt(x*x+y*y)>=r-d+sr)
            {
                ans++;
            }
        }
    }
    cout<<ans;

}
