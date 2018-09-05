#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,c,d,a,cnt=0;
    char s[155][155];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {

            if(s[i][1]=='+')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }

    }
    cout<<cnt;
}
