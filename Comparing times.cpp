#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour1,hour2,min1,min2;
    //char t1[2],t2[2];
    string t1,t2;
    char c;
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        cin>>hour1>>c>>min1>>t1;
        cin>>hour2>>c>>min2>>t2;
        if(t1=="AM")
        {
            cout<<"First"<<endl;

        }
        else if(t2=="AM")
        {
            cout<<"Second"<<endl;
            return 0;
        }
        else if(t1=="AM" && t2=="AM")
        {
            if(hour1==hour2)
            {
                if(min1<min2)
                {
                    cout<<"First"<<endl;

                }
                else
                {
                    cout<<"Second"<<endl;

                }

            }
            else if(hour1==12)
            {
                cout<<"First"<<endl;

            }
            else if(hour2==12)
            {
                cout<<"Second"<<endl;

            }
            else{
                if(hour1<hour2)
                {
                    cout<<"First"<<endl;

                }
                else
                {
                    cout<<"Second"<<endl;

                }
            }
        }
        else
        {
           if(hour1==hour2)
            {
                if(min1<min2)
                {
                    cout<<"First"<<endl;

                }
                else
                {
                    cout<<"Second"<<endl;

                }

            }
            else{
                if(hour1<hour2)
                {
                    cout<<"First"<<endl;

                }
                else
                {
                    cout<<"Second"<<endl;

                }
            }
        }
    }




}
