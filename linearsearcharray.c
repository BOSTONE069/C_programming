//This is a program for doing linearsearch within the array elements
#include <stdio.h>

int main ()
{
	int number_array[6];
	
	int i;
	
	int search_number;
	
	 
	printf("Please Enter number of the arrays");
	
	for (i=0; i<6; i++)
	{
		scanf("%d", &number_array[i]);
	}
	
	printf("\nWhich element to search for=");
	scanf("%d", &search_number);
	
	for (i=0; i<6; i++)
	{
		if (number_array[i]==search_number)
		{
			printf("Element found at position %d", i);
			return (0);
		}
	}
	
	printf("Element is not present in the array\n");
}
