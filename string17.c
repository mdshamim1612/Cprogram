#include<stdio.h>
int main()
{
    char str[]="sham";
    printf("str =%s\n\n",str);
    strrev(str);
    printf("str = %s\n\n",str);
    if (str==str)
    {
        printf("str is  a palindrome");
    }
getch ();
}
