// This is a program for finding the area of rectangle

#include <stdio.h>

/**
 * The function `main()` takes no arguments, and returns an integer
 */
int main()
{
    int length;
    int width, area;

    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the width\n");
    scanf("%d", &width);

    area = length * width;

    printf("%d", area);
    printf("\n");

}