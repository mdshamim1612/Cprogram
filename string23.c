#include<stdio.h>
int main()
{
    char str[1000]="I eat dinner at 8 o'clock";
    int count=0,i;
    char ch='x';
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
