#include<bits/stdc++.h>
using namespace std;

bool status[1100002];




int main()
{
    int n,a[100001],x;
    vector<int>v;

    int N=100001;
    int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	for(int j=2;j<=N;j++)
    {
        if(!status[j])
        {

          v.push_back(j);
        }
    }
    int y;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>x;
        y=sqrt(x);
        vector<int>::iterator it=v.begin();
        while(it!=v.end())
        {
            if(y==*it)
            {
                cout<<"YES"<<endl;
                it++;
            }
            else
            {
                cout<<"NO"<<endl;
                it++;
            }
        }

    }

}
