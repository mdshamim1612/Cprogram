#include<stdio.h>
int main ()
{
    int col,row,n;
    printf("ENTER N= ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for (col=1;col<=row;col++)
        {
            printf("*");
        }
    printf("\n");

    }
return 0;
}
