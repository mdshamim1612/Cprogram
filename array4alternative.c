#include<stdio.h>
int main()
{
int num[100],n,i;
int max=num[0];
printf("HOW MANY NUMBERS: ");
scanf("%d",&n);
printf("Enter numbers now:");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
if(max<num[i])
{
max=num[i];
}
}
printf("maximum number is %d",max);
}
