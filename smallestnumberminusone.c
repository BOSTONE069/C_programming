//This is a program finding the smallest element using a user defined functions
#include <stdio.h>

int smallest_number()
{
	int number_array[6];
	
	int i;
	
	int search_number;
	
	int smallest;
	
	int indexNumberArray;
	 
	printf("Please Enter number of the arrays");
	
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
			indexNumberArray=i;
		}
	}
	number_array[indexNumberArray]=-1;
	
	printf("\n New array content is :\n");
	
	for (i = 0; i < 6; i++)
	{
		printf("\%d\t",number_array[i]);
		
	}
	
	return(0);
	
}

int main ()
{
	smallest_number();
}
