#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,ry,rw,cnt=0,a,b,c;
    cin>>y>>w;
    ry=max(y,w);
    for(int i=ry;i<=6;i++){
        if(i>=ry)
        {
            cnt++;
        }
    }
    for(int i=1;i<=6;i++){
        if(cnt%i==0 && 6%i==0){
            a=i;

        }
    }
    b=cnt/a;
    c=6/a;
    cout<<b<<"/"<<c;
}
