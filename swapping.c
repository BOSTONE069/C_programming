//This is a program for swaping values 
#include <stdio.h>

void swap()
{
	int x;
	int y;
	int z;
	
	printf("Enter the first value(x) here:\n");
	scanf("%d", &x);
	
	printf("Enter the second value(y) here:\n");
	scanf("%d", &y);
	
	z = x;
	
	x = y;
	
	y = z;
	
	printf("After swapping %d,%d", x,y);
	
	

	
}

int main()
{
	swap();
}
