#include<stdio.h>
int main()
{
    int count=0,end,begin;
    char s[1000],r[1000];

    printf("Enter your String:\n");
    gets(s);
    while(s[count]!='\0')
    {
        count++;
    }
    end=count-1;
    for(begin=0;begin<count;begin++)
    {
        r[begin]=s[end];
        end--;

    }
    r[begin]='\0';
    printf("%s\n",r);
return 0;

}

