#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,s1[1000],s2[1000],al;
    int n;
    cin>>s1[0]>>s2[0];
    cin>>n;
//vector<string>s1;

    for(int i=1;i<=n;i++)
    {
        cin>>s1[i]>>s2[i];
    }
    cout<<s1[0]<<" "<<s2[0]<<endl;
for(int i=1;i<=n;i++)
{
     if(s1[i]==s1[i-1])
         {al=s2[i-1];
              cout<<s2[i]<<" "<<al<<endl;
         }

            else if(s1[i]==s2[i-1])
           {al=s1[i-1];
               cout<<s2[i]<<" "<<al<<endl;
           }
}

}
