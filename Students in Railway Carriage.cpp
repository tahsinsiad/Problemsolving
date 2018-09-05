#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,pos=1,j=0,y,mina,l,minb,minao,minbo,sum=0,k,i,p,q,ans=0;
    int x[200010];
    string s;
    cin>>n>>a>>b;
    cin>>s;
    if(a>b){
        swap(b,a);
    }
    for(i=0; i<s.size(); i++)
    {
        if(b>0 && s[i]=='.' && pos==1){
            b--;
            ans++;
            pos=0;
        }
        else if(a>0 && s[i]=='.'){
            a--;
            ans++;
            pos=1;
        }
        else{
            pos = 1;
        }
    }


    cout<<ans;


}
