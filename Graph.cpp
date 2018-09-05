#include<bits/stdc++.h>
#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
int total[20];
int inDegrees[100];
int outDegrees[100];
int main()
{
    int N,E,i,length;

//scanf("%d%d",&N,&E);
    cin>>N>>E;
    for(i=1; i<=E; i++)
    {
        int x,y;
        //scanf("%d%d",&x,&y);
        cin>>x>>y;

        edges[x].push_back(y);

    }

    for(int k=1; k<=N; k++)
    {
        cout<<"Node "<<k<<" is connected with ";
        cout<<edges[k].size()<<" nodes"<<endl;
        for(int j=0;j<edges[k].size();j++)
        {
            if(edges[k][j])
            {
                cout<<edges[k][j]<<" ";
                inDegrees[edges[k][j]]++;
                outDegrees[k]++;
            }


        }
        cout<<endl;

    }

    for(int i=1;i<=N;i++)
    {
        cout<<"Node "<<i<<" has "<<inDegrees[i]<<" indegrees"<<endl;
        cout<<"Node "<<i<<" has "<<outDegrees[i]<<" outdegrees"<<endl;
    }

}
