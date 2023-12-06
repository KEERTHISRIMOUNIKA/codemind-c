#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0,s1=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    
    { if(a%i==0)
    
       sum=sum+i; 
        
    }
    for(j=1;j<=b;j++)
    {
        if(b%j==0)
        s1=s1+j;
    }
    if(sum==s1)
    {
        printf("Amicable");
        
    }
    else
    {
        printf("Not Amicable");
    }
}