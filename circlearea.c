//This is a program code for determining the area of circle

#include <stdio.h>

float carea(float);

/**
 * The function carea() is called from the main() function.
 *
 * The main() function passes the value of radius to the carea() function.
 *
 * The carea() function calculates the area of the circle and returns the value to the main() function.
 *
 *
 * The main() function prints the value of area on the screen
 */
int main () //This is the system defines function
{
	float radius;
	float area;

	printf("Enter Circle Radious:\n");
	scanf("%f", &radius);

	area = carea(radius); // This is the call for the user defined function

	printf("\nArea of a circle:%f",area);
}

float carea(float r) // This is user defines function
{
	float a;
	a = 3.14 * r * r;
	return(a);
}
