/**
This is a prgram code for determining maximum values among the three
*/
#include <stdio.h>

int main ()
{
	int x;
	int y;
	int z;
	
	printf("Enter the value of x\n");
	scanf("%d", &x);
	
	printf("Enter the value of y\n");
	scanf("%d", &y);
	
	printf("Enter the value of z \n");
	scanf("%d", &z);
	
	if (x >= y && x >= z){
		printf("%d is the maximum number\n", x);
	}
	else if (y >= x && y >= z){
		printf("%d is the maximum number\n", y);
	}
	else
		printf("%d is the maximum number\n", z);
	
	
	return 0;
}
