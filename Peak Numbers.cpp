#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,cnt,x;
    vector<int> v;
    while(1)
    {
        cin>>N;
        if(N==0)
        {
            break;
        }
        int a[N];
        cnt=0;
        for(int i=0; i<N; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<N; i++)
        {
            if(i!=0 && i!= N-1)
            {
                if(a[i]>a[i+1] && a[i]>a[i-1] && a[i]>0)
                {
                    cnt++;

                }
            }

        }
        v.push_back(cnt);
    }
    vector<int>::iterator it=v.begin();
    int k=1;
    while(it!=v.end())
    {
        cout<<"Case "<<k<<": "<<*it<<endl;
        it++;
        k++;
    }
}
