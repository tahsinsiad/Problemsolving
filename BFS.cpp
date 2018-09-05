#include<bits/stdc++.h>
using namespace std;
int main()
{
    int edge,node,p,x,y;

    while(cin>>node)
    {
        vector<int>edges[100000];
        queue<int>Q;
        int color[100000];
        memset(color,-1,sizeof(color));
        if(node==0)
        {
            return 0;
        }
        cin>>edge;

        for(int i=0; i<edge; i++)
        {
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);

        }

        int flag=0;
        color[0]=0;
        Q.push(0);

        while(!Q.empty())
        {
            p=Q.front();
            Q.pop();
            for(int i=0; i<edges[p].size(); i++)
            {
                if(color[edges[p][i]]==-1)
                {
                    if(color[p]==0)
                    {
                        color[edges[p][i]]=1;
                    }
                    else
                    {
                        color[edges[p][i]]=0;

                    }
                    Q.push(edges[p][i]);

                }
                else
                {
                    if(color[edges[p][i]]==color[p])
                    {
                        flag=1;
                        break;
                    }
                }

            }
            if(flag==1)
            {
                break;
            }

        }
        if(flag==1)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"BICOLORABLE."<<endl;
        }

    }
    return 0;
}
