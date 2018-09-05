#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,T,n,f;
    cin>>T;
    while(T)
    {
        cin>>n;
        f=0;
        x=sqrt(n);
        for(int i=2; i<=x; i++)
        {
            if(n%i==0)
            {
                f=1;
                cout<<n<<" is not a prime number."<<endl;
                break;
            }
        }
        if(f==0)
        {
            cout<<n<<" is a prime number."<<endl;
        }
        T--;
    }
}
