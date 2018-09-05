#include<bits/stdc++.h>


using namespace std;

int BinarySearch(int a[],int len,int key)
{
    int start,finish,index,mid;
    start=0;
    finish=len-1;

    while(start<=finish)
    {
        mid=(start+finish)/2;
        if(key==a[mid])
        {
            index=mid;
            break;
        }
        else if(key>a[mid]) start=mid+1;
        else if(key<a[mid]) finish=mid-1;
        else
        return index;
    }
}

int main()
{
    int a[10000],key,n;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<BinarySearch(a,n,key);



}
