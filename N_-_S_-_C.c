#include<stdio.h>
int main()
{
    int a,b,i,n,s,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        n=i+1;
        s=n*n;
        c=n*n*n;
        if(n==b)
        break;
        printf("%d %d %d
",n,s,c);
    }
}