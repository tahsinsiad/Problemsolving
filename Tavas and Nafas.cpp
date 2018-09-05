#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;

    cin>>n;
    string s1[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string s2[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
    {
        cout<<"zero";

    }
    else if(n==10)
    {
        cout<<"ten";
    }
    else if(n==11)
    {
        cout<<"eleven";
    }
    else if(n==12)
    {
        cout<<"twelve";
    }
    else if(n==13)
    {
        cout<<"thirteen";
    }
    else if(n==14)
    {
        cout<<"fourteen";
    }
    else if(n==15)
    {
        cout<<"fifteen";
    }
    else if(n==16)
    {
        cout<<"sixteen";
    }
    else if(n==17)
    {
        cout<<"seventeen";
    }
    else if(n==18)
    {
        cout<<"eighteen";
    }
    else if(n==19)
    {
        cout<<"nineteen";
    }
    else
    {
        a=n/10;
        b=n%10;
        if(a==0)
        {
            cout<<s2[b-1];
        }
        else if(b==0)
        {
            cout<<s1[a-2];
        }
        else

        {
            cout<<s1[a-2]<<"-"<<s2[b-1];
        }
    }


}
