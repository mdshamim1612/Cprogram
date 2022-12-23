#include<stdio.h>

struct person
{
    char name[20];
    int age;
    float salary;
};

void display(struct person p) //'struct person'--> purutai data typer moto kaj kore
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);

}

int main()
{
  struct person person1;

  strcpy(person1.name,"Md Shamim");
  person1.age=20;
  person1.salary=22222.22;
  display(person1);
//eibar chaile jinista multiple time kora jai..as we call new function like below

  strcpy(person1.name,"Md sabbir");
  person1.age=17;
  person1.salary=2255.22;
  display(person1);
  getch();
}
