#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,T,n,x;
    char a[10];
    j=0;
    string s;
    cin>>T;
    while(T)
    {
        j=0;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
            {
                k=i;
                break;
            }
        }
        if(s[s.size()-1]!='A'&&s[s.size()-2]!='A'&&s[s.size()-3]!='A')
        {
            a[j]=s[s.size()-3];
            j++;
            a[j]=s[s.size()-2];
            j++;
            a[j]=s[s.size()-1];
            j++;
            a[j]='\0';
            x=atoi(a);
            memset(a,0,sizeof(a));
            if(x%8==0)
            {
                cout<<"YES"<<endl;
                if(k==0)
                {
                    s[k]=1;
                    cout<<"1"<<endl;

                }
                else
                {
                    s[k]=0;
                    cout<<"0"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            if(s[s.size()-1]=='A')
            {

                a[j]=s[s.size()-3];
                j++;
                a[j]=s[s.size()-2];
                j++;
                a[j]='0';
                j++;
                a[j]='\0';
                x=atoi(a);
                memset(a,0,sizeof(a));
                for(i=0; i<9; i++)
                {
                    if(x%8==0)
                    {
                        cout<<"YES"<<endl;
                        s[k]=i+48;
                        cout<<i<<endl;
                        break;
                    }
                    x++;
                }
            }
            else if(s[s.size()-2]=='A')
            {
                a[j]=s[s.size()-3];
                j++;
                a[j]='0';
                j++;
                a[j]=s[s.size()-1];
                j++;
                a[j]='\0';
                x=atoi(a);
                memset(a,0,sizeof(a));
                for(i=0; i<9; i++)
                {
                    if(x%8==0)
                    {
                        cout<<"YES"<<endl;
                        s[k]=i+48;
                        cout<<i<<endl;
                        break;
                    }
                    x+=10;
                }
            }
            else if(s[s.size()-3]=='A')
            {
                a[j]='0';
                j++;
                a[j]=s[s.size()-2];
                j++;

                a[j]=s[s.size()-1];
                j++;
                a[j]='\0';

                x=atoi(a);
                memset(a,0,sizeof(a));
                for(i=0; i<9; i++)
                {
                    if(x%8==0)
                    {
                        cout<<"YES"<<endl;
                        s[k]=i+48;
                        cout<<i<<endl;
                        break;
                    }
                    x+=100;
                }
            }
        }
        T--;
    }
}
