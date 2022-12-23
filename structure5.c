#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1 ={27,25550.25};//directly initialization

    struct person person2,person3;

    person2.age=25;
    person2.salary=27750.50;//element wise assaign

    //structure variable assaignment(person3 er modde person2 ke rakhbo)
    person3=person2;

    printf("person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f \n\n\n\n",person1.salary);

    printf("person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n\n\n",person2.salary);

    printf("person3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %f\n",person3.salary);



    getch();

}


