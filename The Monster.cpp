#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int sumA=0,sumB=0;
    if(((d%2==0 && c%2==0)&&(b%2!=0 && a%2==0)) ||((d%2!=0 && c%2==0) &&(b%2==0 && a%2==0)))
    {
        cout<<-1;
        return 0;
    }


    for(i=0;i<=5000;i++)
    {
        //cout<<sum1;
        sumA=(b+i*a);
        for(j=0; sumB<=sumA; j++)
        {
            sumB=(d+j*c);
            if(sumA==sumB)
            {
                cout<<sumA;
                return 0;
            }
        }

        //cout<<sum1<<" "<<sum2<<endl;

    }
    cout<<-1;

}
