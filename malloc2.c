/**
 * It allocates memory for 3 integers and assigns values to them
 *
 * @return The address of the first byte of the allocated memory.
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
    int *tab;

    /* Allocating memory for 3 integers and assigning values to them. */
    tab = malloc(sizeof(*tab) * 3);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
    return (0);
}