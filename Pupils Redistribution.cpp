#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[6],b[6],x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;

    }
for(int i=0; i<6; i++)
    {

        cout<<a[i];

    }

}

