/*copy an array*/
#include<stdio.h>
int main()
{
    int array1[100],array2[100],i,n;
    printf("How many number:");
    scanf("%d",&n);
    printf("Enter your numbers :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array1[i]);
    }
    printf("\n Array1: ");
    for(i=0;i<n;i++)
    {
    printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];

    }
    printf("\n Array2 :");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
getch ();
}
