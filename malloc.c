/**
 * We allocate memory for a string of 3 characters, then we assign the characters 'O', 'K', and '\0' to
 * the first 3 bytes of the allocated memory
 *
 * @return The string "OK" is being returned.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    char *str;

    /* Allocating memory for a string of 3 characters. */
    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}