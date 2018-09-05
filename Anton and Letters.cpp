#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[1001],b[1001];
    set<char>v;
    int cnt=0,j=0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    //cout<<b;
    for(int k=0;k<j;k++)
    {
        v.insert(b[k]);
    }
    cout<<v.size();

}
