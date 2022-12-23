//exponential programm with library functions
#include<stdio.h>
int main()
{
    double base,exp,result;
    printf("Enter the base:");
    scanf("%lf",&base);
    printf("Enter Exponent:");
    scanf("%lf",&exp);
  result=  pow(base,exp);
  printf("%.2lf",result);
}
