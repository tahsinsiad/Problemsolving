#include<bits/stdc++.h>


using namespace std;

int bsl(int *ary,int target,int n)
{
    int low=0,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)>>1;
        if(ary[mid]==target)
        {
            return mid;
            if(ary[mid-1]==target) high=mid-1;

        }
        else if(ary[mid]>target) high=mid-1;
        else low=mid+1;


    }

    return low;
}



int bsh(int *ary,int target,int n)
{
    int low=0,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)>>1;
        if(ary[mid]==target)
        {
            return mid;
            if(ary[mid+1]==target) low=mid+1;

        }
        else if(ary[mid]>target) high=mid-1;
        else low=mid+1;


    }

    return high;
}

int main()
{

 //   freopen("in.txt","r",stdin);
    int test;
    int ary[100005];
    scanf("%d",&test);
    for(int cas=1; cas<=test; cas++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0; i<n; i++) scanf("%d",ary+i);
        printf("Case %d:\n",cas);
        while(q--)
        {
            int low,high;
            scanf("%d %d",&low,&high);
            int l=bsl(ary,low,n-1);
            int h=bsh(ary,high,n-1);
           // cout<<h<<l<<endl;
            printf("%d\n",(h-l)+1);

        }


    }
    return 0;
}
