#include <stdio.h>
#include <stdlib.h>

#define int char

/**
 * The function `main` returns an `int` and takes no arguments
 *
 * @return 4
 */
int main(void)
{
    int i;

    i = 5;
    printf("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}