#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s3="23:59";
    char s[100],s1[100],temp[100],s4[20],s5[20];
    int cnt=0,num1,num2;
    cin>>s;
    strcpy(temp,s);
    strrev(temp);
    for(int i=0;i<strlen(temp);i++)
    {
        s1[i]=temp[i];
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(s1[i]==s[i])
        {
            cnt++;
        }
    }
    //cout<<s1<<endl;
    //cout<<cnt<<endl;
    if(cnt==strlen(s))
    {
        cout<<0;
    }
    else if(s==s3)
    {
        cout<<1;
    }
    else
    {
        int k=0;
        for(int i=0;i<strlen(s)/2;i++)
        {
            s4[i]=s[i];
        }
        for(int j=strlen(s)/2+1;j<strlen(s);j++)
        {
            s5[k]=s[j];
            k++;
        }
        s4[2]='\0';
        s5[2]='\0';
        //cout<<s4<<s5;
        strrev(s4);
        num1=atoi(s4);
        num2=atoi(s5);
        cout<<abs(num2-num1);
    }
}
