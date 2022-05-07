#include <stdio.h>


/**
 * This function prints the remainder of i divided by 2, as long as i is less than 20
 */
int main()
{
	int i;

	i = 10;

	while (i<20)
	{
		printf("%d", i %2);
		i++;
	}
}
