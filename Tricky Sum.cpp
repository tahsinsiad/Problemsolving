#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,sum=0,y,z;
    vector<long long int>x;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        sum=0;
        cin>>n;
        sum=n*(n+1)/2;
        for(int i=1;i<=n;i=i*2)
        {
            sum=sum-(2*i);
        }
        for(int k=1;k<=1;k++)
        {
            x.push_back(sum);
        }

    }

    vector<long long int>::iterator it=x.begin();
    while(it!=x.end())
    {
        cout<<*it<<endl;
        it++;
    }


}
