#include<stdio.h>
int main()
{
int A[10][10],transpose[10][10],i,j,row,col,sum1=0,sum2=0;
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
//sum of upper triangle entries of matrix A
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if (i<j)
{
sum1=sum1+A[i][j];
}
}
}
//sum of lower triangle entries of matrix A
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if (i>j)
{
sum2=sum2+A[i][j];
}
}
}
printf("sum of upper triangle is= %d \n",sum1);
printf("sum of lower triangle is = %d ",sum2);
getch ();
}
