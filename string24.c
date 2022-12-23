//a program that accept a sentence and print word by word
#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000];
    int i=0,count=0;
    printf("Enter a string");
    gets (name);
    printf("\n\n words of new line:\n\n");
    while(name[i]!='\0')
    {
        if (name[i]==' ')
        {
            printf("\n");
            count++;

        }
        else
            {
                printf("%c",name[i]);
                i++;

            }
    }
printf("\n The number of word= %d",count+1);
return 0;
}
