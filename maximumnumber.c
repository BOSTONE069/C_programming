// This is a oprogram code for determining 
//  The maximum number between two numbers

#include <stdio.h>

int main ()
{
	int x;
	int y;
	
	printf("Enter the value of x\n");
	scanf("%d", &x);
	
	printf("Enter the value of y\n");
	scanf("%d", &y);
	
	if (x >= y){
		printf("X is the maximum number");
	}
	else{
		printf("y is the maximum number");
	}
	
	return 0;
}
