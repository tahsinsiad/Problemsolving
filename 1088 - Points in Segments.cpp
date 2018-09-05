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


    int t;
    int a[100005];
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }


        printf("Case %d:\n",j);
        while(q--)
        {
            int A,B;
            scanf("%d %d",&A,&B);
            int low=lowerBound(a,A,n-1);
            int high=upperBound(a,B,n-1);

            printf("%d\n",(high-low)+1);

        }


    }
    return 0;
}
