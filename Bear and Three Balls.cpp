#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,f=0,temp=0,x,i=0,y=0;
    int a[51];
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it=s.begin();
    while(it!=s.end())
    {
        a[i]=*it;
        it++;
        i++;
        y++;
    }
    for(int j=0;j<y;j++)
    {
        if(a[j+1]-a[j]==1)
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        temp=max(temp,cnt);
    }
    //cout<<temp;
    if(temp>=3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
