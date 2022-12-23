#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int result = square(a);
    printf("Square is : %d\n",result);
}
int square(int b)
{
    int c=b*b;
    return c ;
}
