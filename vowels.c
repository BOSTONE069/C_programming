//This is a prigram code for determining 
//whether a charater is consonant or a vowel

#include <stdio.h>

int main()
{
	char x;
	
	printf("Please enter the character here\n");
	scanf("%c", &x);
	
	if (x =='a' || x =='e' || x =='i' || x=='o' || x == 'u'){
		printf("%c is a vowel\n", x);
	}
	else{
		printf("%c is a consonant\n", x);
	}
	
	return 0;
	    
}
