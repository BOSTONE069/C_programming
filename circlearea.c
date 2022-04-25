//This is a program code for determining the area of circle

#include <stdio.h>

float carea(float);

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
