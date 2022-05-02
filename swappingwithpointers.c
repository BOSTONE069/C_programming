// This is a program for swaping values using pointers
#include <stdio.h>

void swap()
{
    int x;
    int y;
    int z;

    int *ptr1;
    int *ptr2;


    ptr1 = &x;
    ptr2 = &y;

    printf("Enter the first value(x) here:\n");
    scanf("%d", &x);

    printf("Enter the second value(y) here:\n");
    scanf("%d", &y);

    z = *ptr1;

    ptr1 = ptr2;

    ptr2 = &z;

    printf("After swapping %d,%d", *ptr1, *ptr2);
}

int main()
{
    swap();
}