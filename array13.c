/*ADDITION  OF TWO MATRICES*/
#include <stdio.h>
int main()
{
int i,j;
int numOfrows,numOfcols;
int A[10][10], B[10][10], C[10][10];
printf("Enter the number of rows and column:");
scanf("%d%d",&numOfrows,&numOfcols);
//scanning A matrix
printf("Enter the elements of matrix 'A':\n");
for (i=0;i<numOfrows;i++)
{
    for(j=0;j<numOfcols;j++)
    {

    printf("A[%d][%d] = ",i,j);
    scanf("%d",&A[i][j]);
    }
printf("\n");
}
//scanning B matrix

printf("\n\n\nEnter the elements of matrix 'B':\n");
for (i=0;i<numOfrows;i++)
{
    for(j=0;j<numOfcols;j++)
    {
    printf("B[%d][%d] = ",i,j);
    scanf("%d",&B[i][j]);
    }
    printf("\n");
}
//printing matrix A
printf("A=");
for (i=0;i<numOfrows;i++)
{
    printf("\t");
for(j=0;j<numOfrows;j++)
    {
    printf("%d ",A[i][j]);

    }
    printf("\n");
    }


//printing matrix B
printf("\n\nB=");
for (i=0;i<numOfrows;i++)
{
    printf("\t");
    for(j=0;j<numOfcols;j++)
    {
    printf("%d ",B[i][j]);
    }
printf("\n");
}
for (i=0;i<numOfrows;i++)
    //adding two matrices
{
    for(j=0;j<numOfcols;j++)
    {
    C[i][j]=A[i][j]*B[i][j];
    }
}
//printing matrix C
printf("\n\nC=");
for (i=0;i<numOfrows;i++)
{
    printf("\t");
    for(j=0;j<numOfcols;j++)
    {
    printf("%d ",C[i][j]);
    }
printf("\n");
}
getch ();
}
