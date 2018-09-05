#include<bits/stdc++.h>
using namespace std;
int main()
{
    int red,blue,diff,same,temp,a,b,c;
    cin>>red>>blue;
    diff=min(red,blue);
    temp=max(red,blue);
    same=(temp-diff)/2;
    cout<<diff<<" "<<same;
}
