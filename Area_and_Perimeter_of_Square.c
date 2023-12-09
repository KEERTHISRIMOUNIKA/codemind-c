#include<stdio.h>
int sq_area(int),sq_per(int);
int main()
{
    int a;
    scanf("%d",&a);
    int res=sq_area(a);
    int res1=sq_per(a);
    printf("%d %d
",res,res1);

}
int sq_area(int a)
{
    int area;
    area=a*a;
    return area;
}
int sq_per(int a)
{
    int perimeter;
    perimeter=4*a;
    return perimeter;
}