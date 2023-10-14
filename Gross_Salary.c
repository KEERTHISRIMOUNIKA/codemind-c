#include<stdio.h>
int main()
{ int da,hra,x;
scanf("%d",&x);
if(x<=10000)
{da=0.8*x;
hra=0.2*x;}
else if(x<=20000)
{da=0.9*x;
hra=0.25*x;}
else
{da=0.95*x;
hra=0.3*x;}
float gs=da+hra+x;
printf("%.2f",gs);}


