#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,x,y,lPos,uPos;
    vector<int>v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        v.push_back(x);
    }
    scanf("%d",&q);
    for(int j=0;j<q;j++)
    {
        scanf("%d",&y);
        vector<int>::iterator low,up;
        low=lower_bound(v.begin(),v.end(),y);
        up=upper_bound(v.begin(),v.end(),y);
        lPos=low-v.begin();
        uPos=up-v.begin();
        if(lPos-1<0)
        {
            printf("X %d\n",v[uPos]);

        }
        else if(uPos+1>n)
        {
            printf("%d X\n",v[lPos-1]);
        }
        else
        {
            printf("%d %d\n",v[lPos-1],v[uPos]);
        }
    }

}
