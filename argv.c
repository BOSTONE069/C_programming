#include <stdlib.h>
#include <stdio.h>

/**
 * The function `main()` takes two arguments, `argc` and `argv[]`. `argc` is the number of arguments
 * passed to the program, and `argv[]` is an array of strings containing the arguments
 *
 * @param argc This is the number of arguments passed to the program.
 * @param argv This is an array of character pointers listing all the arguments.
 *
 * @return The sum of the numbers entered.
 */
int main(int argc, char* argv[])
{
    int i;
    int sum = 0;

    printf ("argc = %d\n", argc);
    printf("Lets see the value of argv[]\n");

    /* This is the main part of the program. It checks if there are any arguments passed to the
    program. If there are, it loops through them and prints them out. It also adds them to the sum. */
    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            printf ("argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("Total sum = %d\n", sum);
    }

    return 0;
}