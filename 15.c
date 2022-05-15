#include <stdio.h>

int main ()
/* It prints the numbers from 8 to 0. */
{
    int i;

    i = 9;
    while (--i)
    {
        printf("%d",i);
    }
    printf("\n");
    return (0);
}