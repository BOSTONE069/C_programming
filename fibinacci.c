// This is a program for finding fibonacci series in c
#include <stdio.h>


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

int main()
{
	fibonacci();
}
