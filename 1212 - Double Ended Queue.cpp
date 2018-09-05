#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0,k,a=1;
    int n,m,x;
    deque<int>dq;
    string s;
    //cin>>t;
    //while(t)
    //{

        cin>>n>>m;
        cout<<"Case "<<a<<":"<<endl;

        for(int i=1; i<=m; i++)
        {
            cin>>s;



            if(dq.empty() &&(s=="popLeft" || s=="popRight"))
            {
                cout<<"The queue is empty"<<endl;
            }
            else

            {

                if(s=="pushLeft")
                {
                    if(dq.size()==n)
                    {
                        cout<<"The queue is full"<<endl;
                    }
                    else
                    {
                        cin>>x;
                        cout<<"Pushed in left: "<<x<<endl;
                        dq.push_front(x);
                        cnt++;
                    }
                }
                else if(s=="pushRight")
                {
                    if(dq.size()==n)
                    {
                        cout<<"The queue is full"<<endl;
                    }
                    else
                    {
                        cin>>x;
                        cout<<"Pushed in right: "<<x<<endl;
                        dq.push_back(x);
                        cnt++;
                    }
                }
                else if(s=="popLeft")
                {
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();

                }
                else if(s=="popRight")
                {
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();

                }


            }



        }
      /*  t--;
        a++;
        dq.clear();*/
    //}


}
