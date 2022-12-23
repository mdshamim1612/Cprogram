//structure comparison
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

     if(person1.age==person2.age && person1.salary==person2.salary)
        printf("person1==person2\n\n");
     else
        printf("person1 is not equal person2\n\n");

if(person3.age==person2.age && person3.salary==person2.salary)
        printf("person3==person2\n\n");
     else
        printf("person3 is not equal person2\n\n");
    getch();

}



