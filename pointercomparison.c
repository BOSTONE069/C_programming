//This is a program for printing the addresses of the pointers
#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
/**
 * The variable 'p' is a pointer to the variable 'n'.
 *
 * @return The address of 'n' and the value of 'p'
 */
int main(void)
{
  int n;
  int *p;

  n = 98;
  p = &n;
  printf("Address of 'n': %p\n", &n);
  printf("Value of 'p': %p\n", p);
  return (0);
}

