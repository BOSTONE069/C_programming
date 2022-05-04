
//This is a program for printinf the tables

#include <stdio.h>

/**
 * The function prints the tables of the number entered by the user
 */
void printtables()
{
	int y;
	int x;
	int z;

	printf("Please Enter the number:\n");
	scanf("%d", &y);

	for (x=1; x<=y; x++)
	{
		for (z=1; z<=10; z++)
		{
			printf("\t%d",x*y);
		}
		printf("\n");

	}
}

int main()
{
	printtables();
}
