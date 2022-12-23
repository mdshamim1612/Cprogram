//printing fibonacci number
#include<stdio.h>
int main()
{
int n,a[50],i;
printf("ENTER THE VALUE OF HOW MANY FIBOINACCI NUMBERS YOU WANT TO SEE = ");
scanf("%d",&n);
a[0]=0;
a[1]=1;
for(i=2;i<n;i++)
{
a[i]=a[i-1]+a[i-2];
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
