// This is a program for swaping values using pointers
#include <stdio.h>

/**
 * The function takes two integers, swaps them, and prints the swapped values
 */
void swap()
{
    int x;
    int y;
    int z;

    /* Declaring two pointers, then assigning the address of x and y to the pointers. */
    int *ptr1;
    int *ptr2;


    ptr1 = &x;
    ptr2 = &y;

    /* Asking the user to enter two values, then it is swapping the values and printing the swapped
    values. */
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