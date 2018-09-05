#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,mini,maxi=0;
    int a[200000],b[200000];
    int k=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i == 0)
        {
            mini=abs(a[i + 1] - a[i]);
            cout<<mini<<" ";
        }

        else if(i == n - 1)
        {
            mini= abs(a[i - 1] - a[i]);
            cout<<mini<<" ";
        }

        else
        {
            mini = min(abs(a[i + 1] - a[i]), abs(a[i - 1] - a[i]));
            cout<<mini<<" ";
        }


        if(i == 0)
        {
            maxi= abs(a[n - 1] - a[i]);
            cout<<maxi<<endl;
        }

        else if(i == n - 1)
        {
            maxi = abs(a[0] - a[i]);
            cout<<maxi<<endl;

        }


        else
        {
            maxi = max(abs(a[0] - a[i]), abs(a[n - 1] - a[i]));
            cout<<maxi<<endl;
        }

    }

}
