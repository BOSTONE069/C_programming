#include <stdio.h>
#include <stdlib.h>

struct student
{
    int reg_no;
    char name[25];
    int marks;
} fstudent;

/**
 * It takes a pointer to a student structure and adds a student to the structure
 *
 * @param fstudent A pointer to a student structure.
 */
void addstudent(struct student *fstudent)
{
    printf("Enter the Registration number of the student\n");
    scanf("%d", &fstudent->reg_no);

    printf("Enter the name of the student\n");
    scanf(" %s", fstudent->name);

    printf("Enter the marks of the student\n");
    scanf("%d", &fstudent->marks);
}

/**
 * It takes a student structure as an argument and
 *  prints the details of the student
 *
 * @param fstudent This is the structure
 * variable that is passed to the function.
 */
void showstudent(struct student fstudent)
{
    printf("The details of the student are as follows:\n");
    printf("Registration number = %d\n", fstudent.reg_no);
    printf("Name = %s\n", fstudent.name);
    printf("Marks = %d\n", fstudent.marks);
}

/**
 * The function addstudent() takes a
 * pointer to a student structure as
 * an argument and assigns values
 * to the members of the structure
 */
int main()
{
    int i;
    struct student fstudent[3];
   /* Calling the function addstudent() three times. */
    for(i=0; i<3; i++)
    {
        addstudent(&fstudent[i]);
    }
    /* Calling the function showstudent() three times. */
    for(i=0; i<3; i++)
    {
        showstudent(fstudent[i]);
    }
}