#include <stdio.h>

/**
 * The function takes a number as input and prints the multiplication table of that number
 *
 * @return The program is returning the multiplication table of the number entered by the user.
 */
int main()
{
	int i = 1, number=0;

	printf("Enter the number\n");
	scanf("%d", &number);

	do{
		printf("%d\n", (number*i));
		i++;
	}while(i<=20);

	return 0;
}
