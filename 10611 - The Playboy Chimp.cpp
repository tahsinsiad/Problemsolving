#include<bits/stdc++.h>
using namespace std;

int lowerBound(int a[],int key,int len)
{
    int low=0,high=len,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
            if(a[mid-1]==key) high=mid-1;

        }
        else if(a[mid]>key) high=mid-1;
        else low=mid+1;


    }

    return low;
}


int upperBound(int a[],int key,int len)
{
    int low=0,high=len,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
            if(a[mid+1]==key) low=mid+1;

        }
        else if(a[mid]>key) high=mid-1;
        else low=mid+1;


    }

    return high;
}

int main()
{
    int a[50001],N,Q,X,lPos,uPos;
    scanf("%d",&N)

    for(int i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&Q);
    for(int j=0; j<Q; j++)
    {
        scanf("%d",&X);
        lPos=0;
        uPos=0;
        lPos=lowerBound(a,X,N-1);
        uPos=upperBound(a,X,N-1);
        /*cout<<lPos<<" ";
        cout<<uPos<<" ";
        cout<<endl;*/
        //cout<<a[lPos]<<" ";
        if(lPos+1>N)
        {
            printf("%d X\n",a[lPos-1]);
        }
        else if(lPos-1<0)
        {
            printf("X %d\n",a[uPos]);
        }
        else
        {
            printf("%d %d\n",a[lPos-1],a[uPos]);
        }

    }


}
