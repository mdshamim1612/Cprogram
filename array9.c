//2D array
#include <stdio.h>
int main()
{
 int a[3][4]={{5,6,7,8},{9,10,11,12},{13,14,15,16},},i,j;
 printf("A two dimensional array:\n");
 for(i=0;i<3;i++)
 {

 for(j=0;j<4;j++)
 {
 printf("%d ",a[i][j]);
 }
 printf("\n");
 }
 getch ();

}
