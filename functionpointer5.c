#include <stdio.h>
#include <stdlib.h>

void func(int);

/* Assigning the address of the function `func` to the pointer `fp`. */
void main()
{
    void (*fp)(int);

    fp = func;

    (*fp)(1);
    fp(2);

    exit(EXIT_SUCCESS);
}

/**
 * This function prints the value of the argument
 *
 * @param arg The argument to be passed to the function.
 */
void func(int arg)
{
    printf("%d\n", arg);
}