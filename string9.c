//length without function
#include<stdio.h>
int main()
{
    char s1[]="Mohammed Symun Hasan Shamim";
    int i=0,len =0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d\n",len);
}
