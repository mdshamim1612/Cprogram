#include<stdio.h>
int main()
{
    int n,row,col;
    printf("ENTER N= ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)

        {
            printf(" ");
        }
        for(col=1;col<=(row*2)-1;col++)
        {
            printf("%c",col+64);
        }
    printf("\n");
    }
return 0;
}
