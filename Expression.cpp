#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int a,b,d;
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='+')
        {
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            d=a+b;
            s.push(d);
        }

        else if(x[i]=='-')
        {
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            d=b-a;
            s.push(d);

        }
        else if(x[i]=='*')
        {
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            d=a*b;
            s.push(d);

        }
        else if(x[i]=='/')
        {
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            d=b/a;
            s.push(d);

        }
        else if(x[i]=='^')
        {
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            d=pow(b,a);
            s.push(d);

        }
        else
        {
            s.push(x[i]-'0');
        }
    }
    cout<<s.top();
    s.pop();
    return 0;
}

