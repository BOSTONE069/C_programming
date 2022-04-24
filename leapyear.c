//This is function for printing the checking and printing a leap year
#include <stdio.h>

void leapyear()
{
	int x;
	
	printf("Please enter the year in number format:\n");
	scanf("%d", &x);
	
	if((x % 4)==0 )
	{
		printf("\n%d is a leap year", x);
	}
	else
	{
		printf("This is not a leap year");
	}
}

int main()
{
	leapyear();
}
