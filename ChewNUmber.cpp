#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,rem,x,y=0,j=0;
    int a[200];
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        if(rem>4 && rem!=9)
        {
            rem=9-rem;
        }
        else{
            rem;
        }
        a[j]=rem;
        j++;
        y++;
        n=n/10;

    }

           while(y--)
            {
                if(a[y]==9 &&y!=j-1)
                {
                    cout<<"0";
                }
                else
                cout<<a[y];
            }


    }



