#include<stdio.h>
void display (int x[]);
int main()
{
    int num[]={10,20,30,40,50};
    int maximumValu=maximum(num);
    printf("Maximum valued number is %d",maximumValu);

}
int maximum (int x[])
{
    int i;
    int max=x[0];
 for (i=0;i<5;i++)
    {
         if (max<x[i])
            max=x[i];
    }
    return max;
}

