#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100000],temp[100000],l,r,x,y,cnt;
    vector<int>v1,v2;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        /*cin>>y;
        v1.push_back(y);*/
    }
    for(int j=0;j<m;j++)
    {
        cin>>l>>r>>x;
        cnt=0;
        for(int k=l;k<=r;k++)
        {
            if(a[k]<a[x])
            {
                cnt++;
            }
        }
        if(cnt==x-l)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
