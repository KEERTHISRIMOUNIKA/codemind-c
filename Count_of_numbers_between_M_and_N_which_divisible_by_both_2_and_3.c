#include<stdio.h>
int main()
{
    int i,a,b,dc=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%6==0)
        dc=dc+1;
    }
    printf("%d",dc);
}