#include<stdio.h>
int self_div(int n)

{
    int f=1,r,t=n;
    while(n!=0)
    { r=n%10;
      if(r==0||t%r!=0)
      {
          f=0;
          break;
      }
        n=n/10;
    }
    if(f==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if( self_div(i))
        {
            printf("%d ",i);
        }
    }
}