//user er kach theke value nibo
#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
    printf("Enter the following information for person1 : \n\n");
    printf("Enter age :");
    scanf("%d",&person1.age);
    printf("Enter salary: ");
    scanf("%f",&person1.salary);


    printf("person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f \n\n\n\n",person1.salary);

    printf("Enter the following information for person2 : \n\n");
    printf("Enter age :");
    scanf("%d",&person2.age);
    printf("Enter salary: ");
    scanf("%f",&person2.salary);

    printf("person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);


    getch();

}

