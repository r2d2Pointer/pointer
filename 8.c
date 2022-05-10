#include <stdio.h>

struct employee
{
    char name[30];
    int age;
    float salary;
    char gender[6];
} person;

int main()
{
    person;
    printf("Name : ");
    scanf("%s", &person.name);
    printf("Age : ");
    scanf("%d", &person.age);
    printf("Salary : ");
    scanf("%f", &person.salary);
    printf("Gender : ");
    scanf("%s", &person.gender);
    printf("\nName = %s", person.name);
    printf("\nAge = %d", person.age);
    printf("\nSalary = %.2f", person.salary);
    printf("\nGender = %s", person.gender);

    return 0;
}