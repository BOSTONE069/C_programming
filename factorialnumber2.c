// This is a program for finding the factorial of a number

#include <stdio.h>

int factorial (int n)
{

    if (n <= 1)
    {
        return 1;
    }
        return n * factorial (n - 1);

}

int main()
{
  int n;

  printf ("Please Enter the values of x(integers only):\n");
  scanf("%d", &n);

  printf("%d\n", factorial(n));

  return 0;
}