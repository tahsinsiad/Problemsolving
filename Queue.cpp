
#include<bits/stdc++.h>
using namespace std;

int s,f=0,r=0;
int a[100];

int enqueue()
{
  int val;
  if((f==r+1) || (f==1 && r==s))
  {
      cout<<"FULL"<<endl;
  }
  if(f==0)
  {
      f=1;
      r=1;
  }
  else if(r==s)
  {
      r=1;
  }
  else
  {
      r++;
  }
  cout<<"Enter : "<<endl;
  cin>>val;
  a[r]=val;
}

int denqueue()
{
    if(f==0)
    {
        cout<<"Empty";
        return 1;
    }
    else if(f==r)
    {

        cout<<"Element : "<<a[f]<<endl;
        f=0;
    }
    else if(f==s)
    {
        cout<<"Element is "<<a[f]<<endl;
        f=1;
    }
    else
    {
        cout<<"Element is "<<a[f]<<endl;
        f++;
    }
}

int main()
{
    int val;

    cout<<"SIze : ";
    cin>>s;
    while( cin>>val)
    {
        if(val==0)
        {
            break;
        }
        else if(val==1)
        {
            enqueue();
        }
        else if(val==2)
        {
            denqueue();
        }
    }
    return 0;
}
