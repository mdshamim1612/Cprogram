//exponential programm with loop
#include<stdio.h>
int main()
{
    double base,exp,result=1,i;
    printf("Enter the base:");
    scanf("%lf",&base);
    printf("Enter Exponent:");
    scanf("%lf",&exp);
  for(i=1;i<=exp;i++)
  {
     result=result*base ;
  }
  printf("RESULt %.3lf .",result);
}

