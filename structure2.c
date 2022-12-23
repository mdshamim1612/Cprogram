#include<stdio.h>
int main()
{
    //local structure
        struct person
        {
        int age;
        float salary;
        };
    struct person person1,person2;
    person1.age=27;
    person1.salary=27500.50;

    printf("person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n\n\n\n",person1.salary);

    person2.age=67;
    person2.salary=38500.80;

    printf("person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    getch();

}

