//This is a program code for determining
//whether the number entered is odd or even

#include <stdio.h>

int main(void)
{
	int n;
	float result;

	printf("Please enter the integer value?\n");
	scanf("%d", &n);

	result = n % 2 ? 1 : 0; // This is the tenary operator

	if (result == 1)
	{
		printf("This is an odd number");
	}
	else
	{
		printf("This is an even number");
	}
	return (0);

}
