#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,smallest,x=0,y,z,f=0;
    int a[3300];
    vector<pair<int,int>> v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        smallest=i;
        for(int j=i; j<n; j++)
        {
            if(a[smallest]>a[j])
            {
                smallest=j;
            }

        }

        if(i!=smallest)
        {
            x++;
            f=1;
            v.push_back(make_pair(i,smallest));

        }
        swap(a[i],a[smallest]);


    }
    if(f==1)
    {
        cout<<x<<endl;
        for(int k=0;k<v.size();k++)
        {
            cout<<v[k].first<<" "<<v[k].second<<endl;
        }
    }
    else{
        cout<<"0";
    }

}
