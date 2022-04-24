//This is a prgram code for changing temperature 
//from celcious to fahrenhiet

#include <stdio.h>

int main()
{
	float celsius;
	float fahrenheit;
	
	printf("Please enter the temperature in celsius\n");
	scanf("%f", &celsius);
	
	fahrenheit = (9/5)*celsius + 32;
	
	printf("The tempeature in fahrenheit is %f\n", fahrenheit);
	
	return 0;
}
