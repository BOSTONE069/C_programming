//This is a program for finding the factorial number
#include <stdio.h>

void factorialnumber()
{
	int i;
	int x;
	
	printf("Enter the number:\n")
	scanf("%d", &x);
	
	for(i=1; i<=x; i++)
	{
		printf("%d",i*x)
	}
}

int main()
{
	factorialnumber();
}
