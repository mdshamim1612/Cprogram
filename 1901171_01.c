#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    float cgpa;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 10; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("Displaying Information:\n\n");
    for (i = 0; i < 10; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name: ");
        puts(s[i].Name);
        printf("Cgpa: %.1f", s[i].cgpa);
        printf("\n");
    }
    return 0;
}
