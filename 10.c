#include <stdio.h>

/**
 * This function prints the numbers 0 through 18, each on a separate line
 *
 * @return 0
 */
int main ()
{
    int i;

    for (i = 0; i <10; i++)
    {
        printf("%d", i * 2);
    }
    printf("\n");
    return (0);
}