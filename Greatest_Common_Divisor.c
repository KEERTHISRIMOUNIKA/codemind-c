#include<stdio.h>
int main()
{
    int a,b,i,g;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((i*a)%b==0)
        {
          g=(a*b)/(i*a); 
          break;
        }
    }
    printf("%d",g);
}