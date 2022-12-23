//exponential programm with user defined function
#include<stdio.h>
double calculatePower(double base,double exp);
int main()
{
    calculatePower(2,3);
//multiple time eivabe function ta k call kora jai...jar jonne asole function dara kora holo
    calculatePower(5,3);
    calculatePower(8,2);
    calculatePower(9,3);
}

double calculatePower(double base,double exp)
{
  double result=1,i;
 for(i=1;i<=exp;i++)
  {
     result=result*base ;
  }
  printf("RESULt %.3lf \n",result);
}
