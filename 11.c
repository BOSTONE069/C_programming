#include <stdio.h>

/**
 * It prints the numbers 0 through 9, each on a new line
 *
 * @return 0101010101
 */
int main()

{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d", i % 2);
        i++;
    }
    printf("\n");
    return (0);
}