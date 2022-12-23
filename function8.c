#include<stdio.h>
double triangleArea(double b,double h);
//majhe majhe new function je call kora hoiche seta main er age declare kora lage but with(;)
int main()
{
    double base,height;
    printf("Enter Base:");
    scanf("%lf",&base);
    printf("Enter Height:");
    scanf("%lf",&height);
    double area= triangleArea(base,height);
   printf("area = %.1lf\n",area);
}
 double triangleArea(double b,double h)
{
   return 0.5 * b * h;
}
