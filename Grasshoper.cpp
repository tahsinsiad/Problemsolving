#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int cnt=0,temp=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {

        //temp=cnt;
        cnt=1;

        while(s[i]!='A'&& s[i]!='E' && s[i]!='O' && s[i]!='U' && s[i]!='Y' && s[i]!='I' && s[i]!='\0')
        {
            cnt++;
            i++;
        }
        //cout<<cnt<<endl;

        temp=max(temp,cnt);

    }
    cout<<temp;
}
