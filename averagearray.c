//This is a program for finding the average of the array numbers
#include <stdio.h>

/**
 * The function takes in 6 numbers from the user and then calculates the average of the 6 numbers
 *
 * @return The average of the numbers entered.
 */
int main ()
{
	int number_array[6];

	int i;

	float Average;

	int sum =0;

	printf("Please enter the 6 numbers");

	for (i=0; i < 6; i++)
	{
		scanf("%d", &number_array[i]);
		sum = sum + number_array[i];
	}

	Average = sum / 5.0;
	printf("\nAverage = %f", Average);

	return (0);
}
