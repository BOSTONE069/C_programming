/*This is a program for finding the smallest number within the array*/
#include <stdio.h>

int main ()
{
	int number_array[6];

	int i;

	int search_number;

	int smallest;

	printf("Please Enter number of the arrays:\n");

	for (i=0; i<6; i++) // Allows The users to enter the values of array
	{
		scanf("%d", &number_array[i]);
	}

	smallest = number_array[0];

	for (i=0; i < 6; i++) //This interates through the array to find the smallest
	{
		if (number_array[i] < smallest)
		{
			smallest = number_array[i];
		}
	}

	printf("\nthe smallest element is: %d\n",smallest);

	return(0);

}
