#include<stdio.h>
int main()
{
    int a,i,s,sum;
    scanf("%d",&a);
    s=a%10;
    while(a>=10)
    {
        a=a/10;
    }
    sum=s+a;
    printf("%d",sum);
}