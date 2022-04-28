//This program applies the use of recursion to get the factorial of numbers
#include <stdio.h>

int factorialnumber()
{
	int x;

	printf("Enter the number:\n");
	scanf("%d", &x);

    if (x <=1)
    {
    	return (1);
	}
	else
	{
		return (x * factorialnumber(x-1));
	}
}

int main()
{
	factorialnumber();
}
