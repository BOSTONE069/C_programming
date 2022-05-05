#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * It prints all the arguments passed to the program and then multiplies them
 *
 * @param argc The number of arguments passed to the program.
 * @param argv This is an array of character pointers listing all the arguments passed to the program.
 *
 * @return 0
 */
int main(int argc, char* argv[])
{
    int i;

    /* Printing the arguments passed to the program. */
    for (i = 1; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    int multiplication = 1;
    /* Multiplying all the arguments passed to the program. */
    for (i = 1; i < argc; i++)
    {
        multiplication *= atoi(argv[i]);
    }
    printf("multiplication result = %d\n", multiplication);
    return 0;
}