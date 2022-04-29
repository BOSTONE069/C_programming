//This program retruns the addition of two pointers
#include <stdio.h>

int main()
{
    int y = 40;
    int x = 20;

    int sum;

    int *ptr1; // The first pointer
    int *ptr2; // The second pointer

    ptr1 = &y;
    ptr2 = &x;

    *ptr1 = 90;
    *ptr2 = 40;

    sum = *ptr1 + *ptr2;

    printf("sum = %d\n", sum);

    return 0;


}