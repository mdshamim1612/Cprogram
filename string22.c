//to calculate frequency of any letter in sentence
#include<stdio.h>
int main()
{
    char str[1000],ch;
    int count=0,i;
    printf("Enter a sentence\n");
    gets(str);
    printf("Enter a character to find it's frequency \n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';++i)
    {
        if (ch==str[i])
        {
          ++count;
        }

    }
printf("Frequency of %c=%d",ch,count);
return 0;
}
