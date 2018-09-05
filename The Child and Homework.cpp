#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    int l1,l2,l3,l4,cnt,i,cnt1,p,f=0;
    int a[4];
    cin>>s1>>s2>>s3>>s4;
    l1=s1.size()-2;
    l2=s2.size()-2;
    l3=s3.size()-2;
    l4=s4.size()-2;
    //cout<<l1<<l2<<l3<<l4;
    a[0]=l1;
    a[1]=l2;
    a[2]=l3;
    a[3]=l4;
    //cout<<l1<<" "<<" "<<l2<<" "<<l3<<" "<<l4;
    for( i=0; i<4; i++)
    {
        cnt=0;
        cnt1=0;
        for(int j=0; j<4; j++)
        {
            if(i!=j)
            {
                if(a[i]>=2*a[j])
                {
                    cnt++;
                }
                else if(a[i]<=a[j]/2)
                {
                    cnt1++;
                }
            }

        }

        if(cnt==3 || cnt1==3)
        {
            f++;
            p=i;
        }
    }
    if(f==1)
    {
        if(p==0)
        {
            cout<<"A";

        }
        else if(p==1)
        {
            cout<<"B";
        }
        else if(p==3)
        {
            cout<<"D";
        }
    }
    else
    {
        cout<<"C";
    }

}
