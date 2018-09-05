#include<bits/stdc++.h>
using namespace std;
//int a[30];
int main()
{
    int n,k,temp=0,flag=1;
    string s;
    set<char>ch;
    int a[30];
    cin>>n>>k;
    cin>>s;
    for(int k=0; k<30; k++)
    {
        a[k]=0;
    }
    for(int i=0; i<s.size(); i++)
    {
        a[s[i]-'a']++;
        temp=max(temp,s[i]-'a');


    }
//cout<<temp;
    for(int j=0; j<temp+1; j++)
    {

        //cout<<a[j]<<endl;
        if(a[j]>k)
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}
