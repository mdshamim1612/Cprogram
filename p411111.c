#include<stdio.h>
int main()
{
int row,col,n;
printf("ENTER N=");
scanf("%d",&n);
for(row=1;row<=n;row++)
    {
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
    for(col=1;col<=row;col++)
    {
        printf("%d",col);
    }
printf("\n");
    }
}
