#include<stdio.h>
int main()
{

    int result=sum(1,2);
    printf("The summation is : %d\n",result);
    result=sum(5,2);
    /*যত ইচ্ছা তত বার প্রিন্ট করা যাবে নীচের মতো করে */
    printf("The summation is : %d\n",result);
    result=sum(1,9);
    printf("The summation is : %d\n",result);
}
int sum(int a,int b)
{
    return a+b;
}

