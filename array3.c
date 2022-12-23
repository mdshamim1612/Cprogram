#include<stdio.h>
int main()
{
    int a[1000],sum=0,n,i;
    printf("HOW MANY NUMBERS: ");
    scanf("%d" ,&n);
    printf("ENTER NUMBERS:");
    for(i=0;i<n;i++)
    {
    scanf("%d ",&a[i]);
    }
   for(i=0;i<n;i++)
   {
    sum= sum+ a[i];
   }

    printf("The sum is : %d\n",sum);
    printf("the average is: %0.2f\n",(float)sum/n);
}
