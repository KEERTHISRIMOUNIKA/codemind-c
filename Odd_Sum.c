#include<stdio.h>
int main()
{
    int n,i,osum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            osum=osum+arr[i];
        }
    }
    printf("%d",osum);
}