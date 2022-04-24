//This is a program code for finding the average of two numbers

#include <stdio.h>

int main()
{
	int x;
	int y;
	float Avrg;
	
	printf("This is a prgram for finding the average\n");
	
	printf("Enter the first value of x?\n");
	scanf("%d", &x);
	
	printf("Enter the second value of y?\n");
	scanf("%d", &y);
	
	Avrg = (x + y) / 2.0;
	
	printf("The average of the two numbers is %f\n", Avrg);
	
	return 0;
	
	
}
