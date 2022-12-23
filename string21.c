#include<stdio.h>
int main()
{
    int i=0,count=0;
    char s[1000];
    printf("Enter the sentence:\n");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            printf("\n");
            count++;
        }
        else
            printf("%c",s[i]);
            i++;

    }
    printf("\n\nThe number of words in the sentence is %d",count+1);

}
