/*Maltiplication of two matrix*/
#include<stdio.h>
int main()
{
int first[10][10],sec[10][10],result[10][10],i,j,r1,c1,r2,c2,k,l,sum=0;
printf("Enter the number of row and column of first matrix=");
scanf("%d %d",&r1,&c1);

printf("Enter the number of row of and column of second matrix =");
scanf("%d %d",&r2,&c2);

while(c1!=r2)
    {
    printf ("ERROR!!!!");
    printf("Enter the number of row and column of first matrix=");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of row of and column of second matrix =");
    scanf("%d %d",&r2,&c2);

    }
//scanning first matrix

printf("\nEnter the elements of first matrix: \n");

for(i=0;i<r1;i++)
    {
    for(j=0;j<c1;j++)
        {
        printf("first[%d][%d]=  ", i ,j);

        scanf("%d",&first[i][j]);
        }
}
//scanning second matrix
printf("\nEnter the elements of second matrix:\n");
for (i=0;i<r2;i++)
    {
    for(j=0;j<c2;j++)
        {
        printf("sec[%d][%d]= ", i ,j);
        scanf("%d",&sec[i][j]);
        }
    }
//multiplying this two matrices
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
            sum=sum+first[i][k]*sec[k][j];
        }
        result[i][j]=sum;
        sum=0;
    }
}


//printing first matrix
printf("First=\n");
for(i=0; i<r1; i++)
    {
        printf("\t");
    for(j=0; j<c1;j++)
        {
        printf("%d ",first[i][j]);
        }
    printf("\n");

    }

//printing second matrix
printf("Second =\n");

for(i=0;i<r2;i++)
    {
        printf("\t");
    for(j=0;j<c2; j++)
        {
        printf("%d ",sec[i][j]);
        }
    printf("\n");
}
//printing redult
printf("Result =\n");

for(i=0;i<r1;i++)
    {
        printf("\t");
    for(j=0;j<c2; j++)
        {
        printf("%d ",result[i][j]);
        }
    printf("\n");
}
getch ();
}
