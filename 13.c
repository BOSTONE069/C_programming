#include <stdio.h>

int main ()
/* It prints the numbers from 9 to 0. */
{
    int i;

    i = -9;
    while (i < 0)
    {
        printf("%d", -i);
        i++;
    }
    printf("\n");
    return (0);
}