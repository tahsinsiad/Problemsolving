#include<stdio.h>
//using namespace std;
int main()
{
    int n,x,y,z;
    char s1[100],s2[100];

   scanf("%d%s%s",&n,&s1,&s2);
    x=strcmp(s1,s2);
    printf("%d",x);
}
