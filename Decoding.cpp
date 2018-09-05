#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char s1[3000];
    int l,n,j=1,k=0;
    cin>>n>>s;
    l=s.size();
    if(s.size()%2==1)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(i%2==1)
            {
                s1[l/2-j]=s[i];
                j++;
            }
            else{
                s1[l/2+k]=s[i];
                k++;
            }
        }
        s1[l]='\0';
        cout<<s1;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(i%2==0)
            {
                s1[l/2-j]=s[i];
                j++;
            }
            else{
                s1[l/2+k]=s[i];
                k++;
            }
        }
        s1[l]='\0';
        cout<<s1;
    }

}

