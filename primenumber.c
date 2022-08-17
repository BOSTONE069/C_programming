//This is a program for finding whether a value is a prime number
#include <stdio.h>
#include<math.h>

int primenumber()
{
	int x;
	int i;

	printf("Enter the number here:\n");
	scanf("%d", &x);

	/* Checking whether the number is a prime number or not. */
	for (i=2; i<=sqrt(x) ;i++)
	{
		if (x % i == 0)
		{
			printf("This is not a prime number\n");
			return 0;
		}
	}
	printf("This is a prime number");

}

int main()
{
	primenumber();
}
