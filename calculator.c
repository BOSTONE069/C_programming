// This is a program for doing arithmetic operations

#include <stdio.h>

int main()
{
	int x;
	int y;
	float z;
	char op;
	
	printf("Enter the value First Value?\n");
	scanf("%d", &x);
	
	printf("Enter the value Second Value?\n");
	scanf("%d", &y);
	
	printf("Which operation would you like to perform?\n");
	scanf(" %c", &op);
	
	switch(op) // This is the switch case used in the performance of the operations
	{
		case '+':
			z = x + y;
			break;
		
		case '-':
			z = x - y;
			break;
			
		case '*':
			z = x * y;
			break;
		
		case '/':
			z = x / y;
			break;
		
		default:
			printf("wrong operation!!");
	}
	
	printf("The answer = %f.", z);
}
