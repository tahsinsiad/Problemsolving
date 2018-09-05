#include<bits/stdc++.h>
using namespace std;
int main()
{
    int white=0,black=0;
    char a[100][100];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='Q')
                white+=9;
            else if(a[i][j]=='R')
                white+=5;
            else if(a[i][j]=='B'||a[i][j]=='N')
                white+=3;
            else if(a[i][j]=='P')
                white+=1;
            else
                white+=0;
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='q')
                black+=9;
            else if(a[i][j]=='r')
                black+=5;
            else if(a[i][j]=='b'||a[i][j]=='n')
                black+=3;
            else if(a[i][j]=='p')
                black+=1;
            else
                black+=0;
        }
    }
    if(white>black)
    {
        cout<<"White";
    }
    else if(black>white)
    {
        cout<<"Black";
    }
    else
    {
        cout<<"Draw";
    }
}
