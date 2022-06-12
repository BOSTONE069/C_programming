// This is a program for finding fibonacci series in c
#include <stdio.h>


/**
 * The function takes a number from the user and prints the fibonacci series up to that number
 *
 * @return 0.
 */
int fibonacci()
{
	int x=0;
	int y=1;
	int z;
	int i;
	int number;

	printf("Enter the number:\n");
	scanf("%d", &number);
	printf("\n%d,%d,", x,y);

	for (i=2; i<=number; ++i)
	{
		z = x+y;
		printf("%d,", z);
		x = y;
		y = z;
	}
	return 0;
}

/**
 * The function fibonacci() takes no arguments and returns nothing. It prints the first 20 numbers in
 * the Fibonacci sequence
 */
int main()
{
	fibonacci();
}
