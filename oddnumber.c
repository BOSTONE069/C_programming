//This is a prgram code for printing only odd numbers numbers from upto the given number

#include <stdio.h>

void oddnumbers()
{
	int y;
	int x;
	
	printf("Please Enter the number:\n");
	scanf("%d", &y);
	
	for (x=1; x<=y; x++)
	{
		if ((x % 2) != 0)
		{
			printf("%d\n", x);
		}
		
	}
}

int main()
{
	oddnumbers();
}
