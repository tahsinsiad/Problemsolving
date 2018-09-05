#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,cnt=1,sum=0,j=0;
    int x[4];
    cin>>n>>a>>b>>c;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    sort(x,x+3);
    while(j<3)
    {
        if(sum<=n)
        {
            sum+=x[j];
            j++;
            cnt++;
            cout<<sum<<" ";
        }

        else{
            j=0;
        }

    }
    cout<<cnt;
}
