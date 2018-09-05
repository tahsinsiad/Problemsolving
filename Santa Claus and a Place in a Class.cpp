#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,p,k;
    long long int lane,desk,div,div1;
    char s[2];
    cin>>n>>m>>p;
    div=p/(2*m);
    k=(p-1)/2;
    if(p%(2*m)==0)
    {
        lane=div;
        cout<<lane<<" ";
    }
    else
    {
        lane=div+1;
        cout<<lane <<" ";
    }


    desk=(k%m)+1;
    cout<<desk<<" ";


    if(p%2!=0)
    {
        cout<<"L";
    }
    else
    {
        cout<<"R";
    }

}
