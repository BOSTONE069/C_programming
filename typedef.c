#include <stdio.h>

typedef struct student
{
    char name[20];
    int age;
}stud;

int main()
{
    stud s1;

    printf(" Details of student s1: ");

    printf("\nEnter the name of the student:");

    scanf("%s",&s1.name);

    printf("\nEnter the age of student:");

    scanf("%d",&s1.age);

    printf("\n Name of the student is : %s", s1.name);

    printf("\n Age of the student is : %d", s1.age);

    return 0;
}