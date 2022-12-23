//exponential programm with user defined function
#include<stdio.h>
double calculatePower(double base,double exp);
int main()
{
    double base,exp;
    printf("Enter the base:");
    scanf("%lf",&base);
    printf("Enter Exponent:");
    scanf("%lf",&exp);
    calculatePower(base,exp);
}

double calculatePower(double base,double exp)
{
  double result=1,i;
 for(i=1;i<=exp;i++)
  {
     result=result*base ;
  }
  printf("RESULt %.3lf .",result);
}
