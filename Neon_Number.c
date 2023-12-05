#include<stdio.h>
int main()
{
    int s,n,r,ds=0;
    scanf("%d",&n);
    s=(n*n);
    while(s!=0)
    {
        r=s%10;
        ds=ds+r;
        s=s/10;
    }
    if(ds==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}