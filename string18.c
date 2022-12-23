#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter the string\n\n");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);

    if (strcmp(str1,str2)==0)
        printf("string is palindrome");
    else
        printf("string is not palindrome");

    return 0;


}
