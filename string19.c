#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c=0;
    char str[1000];
    printf("Enter the string:\n\n");
    gets(str);
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-i-1])
            c++;
    }
    if(c==i)
            printf("The string is a palindrome");
        else
            printf("The sting is not a palindrome");
getch();
}
