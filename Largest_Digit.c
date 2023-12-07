#include<stdio.h>
int main()
{
    int i,a,s=0,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        s=a%10;
        if(s>sum)
        sum=s;
        a=a/10;
    }
    printf("%d",sum);
}