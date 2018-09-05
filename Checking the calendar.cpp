#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[7]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string str1,str2;
    cin>>str1>>str2;

    if(str1==str2)
    {
        cout<<"YES";
    }
    else if( (str1=="monday" && str2=="thursday") || (str1=="tuesday" && str2=="friday") || (str1=="wednesday" && str2=="saturday") || (str1=="thursday" && str2=="sunday") || (str1=="friday" && str2=="monday") || (str1=="saturday" && str2=="tuesday" ) || (str1=="sunday" && str2=="wednesday") )
     {
         cout<<"YES";
     }
     else if( (str1=="monday" && str2=="wednesday") || (str1=="tuesday" && str2=="thursday") || (str1=="wednesday" && str2=="friday") || (str1=="thursday" && str2=="saturday") || (str1=="friday" && str2=="sunday") || (str1=="saturday" && str2=="monday") || (str1=="sunday" && str2=="tuesday"))
     {
         cout<<"YES";
     }
    else
    {
        cout<<"NO";
    }
}
