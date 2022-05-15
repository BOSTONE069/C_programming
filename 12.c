#include <stdio.h>

int main ()
/* It prints the numbers 1 to 5 on a single line. */
{
/* It prints all even numbers from 0 to 8. */
    int i;

    i = 0;
    while (i < 10) {
        i++;
        printf("%d", i / 2);
    }
    printf("\n");
    return (0);
}