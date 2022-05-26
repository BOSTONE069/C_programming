#include <stdio.h>
#include <stdlib.h>

/* Defining a structure called student with
three members: reg_no, name and marks. */
struct student
{
    int reg_no;
    char name[25];
    int marks;
}fstudent;

/**
 * The above function takes the input from the user and stores
 * it in the structure variable fstudent
 */
int main()
{

    printf("Enter the Registration number of the student\n");
    scanf("%d", &fstudent.reg_no);

    printf("Enter the name of the student\n");
    scanf(" %s", fstudent.name);

    printf("Enter the marks of the student\n");
    scanf("%d", &fstudent.marks);

    printf("The details of the student are as follows:\n");
    printf("Registration number = %d\n", fstudent.reg_no);
    printf("Name = %s\n", fstudent.name);
    printf("Marks = %d\n", fstudent.marks);
}