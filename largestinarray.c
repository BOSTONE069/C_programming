/*This is a program for finding the smallest number within the array*/
#include <stdio.h>

/**
 * The function iterates through the array to find the largest number and then prints the largest
 * number and the index of the largest number
 *
 * @return The largest number in the array and the index of the largest number in the array.
 */
int main ()
{
	int number_array[6];

	int i;

	int search_number;

	int largest_number;

	int largest_element_index = -1;

	printf("Please Enter number of the arrays");

	for (i=0; i<6; i++) // Allows The users to enter the values of array
	{
		scanf("%d", &number_array[i]);
	}

	largest_number = number_array[0];

	for (i=0; i < 6; i++) //This interates through the array to find the smallest
	{
		if (number_array[i] > largest_number)
		{
			largest_number = number_array[i];
			largest_element_index = i;
		}
	}

	printf("\nThe largest element is: %d and the index is %d", largest_number,largest_element_index);

	return(0);

}