++
//This is a program for printinf the tables

#include <stdio.h>

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
