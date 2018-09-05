#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,rem,cnt=0,digit=0;
    int a[200];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        digit=0;
        while(a[i]!=0)
        {
            rem=a[i]%10;
            a[i]=a[i]/10;
            if(rem==4 || rem==7)
            {
                digit++;
            }


        }
        //cout<<digit<<endl;
        if(digit<=d)
        {
            cnt++;
        }


    }
    cout<<cnt;
}
