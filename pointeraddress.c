//This is a program for printing the pointers address and it values

#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;
  int *p;

  n = 74;
  p = &n;
 /* Printing the address of n and the value of p and the value of p and the value of n. */
  printf("Address of 'n': %p\n", &n);
  printf("Value of 'p': %p\n", p);
  printf("The value of p: %u\n", *p);
  printf("The value of n: %u\n", n);
  return (0);
}