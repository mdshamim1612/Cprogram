//Getting input for 2D array
#include<stdio.h>
int main()
{
    int A[3][4];
    int i,j;
    printf("Enter the value of the array ,3*4=12 numbers:");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
    {
    scanf("%d",&A[i][j]);
    }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    getch ();
}
