/*transpose matrix*/
#include<stdio.h>
int main()
{
int A[10][10],transpose[10][10],i,j,row,col;
printf("Enter the number of rows and columns of array A = ");
scanf("%d%d",&row ,&col);

//scanning matrix A
printf("Enter the elements of the matrix A\n\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("A[%d][%d]= ",i,j);
scanf("%d",&A[i][j]);
}
printf("\n");
}

//printing the array A

printf("A= \n");
for(i=0;i<row;i++)
{
printf("\t");
for(j=0;j<col;j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
//transpose matrix
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        transpose[j][i]=A[i][j];
    }
}
printf("\nTranspose matrix =\n");
for(i=0;i<col;i++)
{
    for(j=0;j<row;j++)
    {
        printf("%d ",transpose[i][j]);
    }
    printf("\n");
}

getch ();

}
