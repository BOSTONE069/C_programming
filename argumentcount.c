#include <stdio.h>

/**
 * The main function is the entry point of the program
 *
 * @param argc This is the argument count. It is the number of arguments passed into the program from
 * the command line, including the name of the program.
 * @param argv This is an array of character pointers listing all the arguments.
 *
 * @return The program is returning 0.
 */
int main(int argc, char *argv[])
{
    int count;

    printf("This program was called with \"%s\".\n", argv[0]);

    if (argc > 1)
    {
        for (count = 1; count < argc; count++)
        {
            printf("argv[%d] = %s\n", count, argv[count]);
        }
    }
    else
    {
        printf("The command had no other arguments.\n");
    }

    return 0;
}