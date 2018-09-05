#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt1,cnt2=0,cnt3=0,test;

    cin>>test;
    //9getchar();
    for(int j=1; j<=test; j++)
    {
        stack<char>a;
        getline(cin,s);
        if(s=="")
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(s.size()%2!=0)
        {
            cout<<"No"<<endl;
            //continue;

        }

            cnt1=0;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='(' || s[i]=='[')
                {
                    a.push(s[i]);
                }
                else if(s[i]==')' && !a.empty() && a.top()=='(')
                {
                    a.pop();
                }
                else if(s[i]==']' && !a.empty() && a.top()=='[')
                {
                    a.pop();
                }
                else
                    cnt1=1;
            }
            if(a.empty() && cnt1==0)
            {
                cout<<"Yes"<<endl;

            }
            else
            {
                cout<<"No"<<endl;

            }

    }
}


