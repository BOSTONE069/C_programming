// This is a program code for checking whether
// a charcter is in lowercase or uppercase using the ASCII TABLE
#include <stdio.h>

/**
 * The function case1() takes a character as input and checks whether
 * it is in upper case or lower case
 */
void case1()
{
	char ch;

	printf("Enter the Upper or lower case charater:\n");
	scanf("%c", &ch);

	/* Checking whether the character is in upper case or lower case. */
	if (ch >=65 && ch <=90)
	{
		printf("The character %c is in Uppercase\n", ch);
	}
	else if ( ch>= 97 && ch <=122)
	{
		printf("The character %c is in lower case\n", ch);
	}
	else
	{
		printf("The character is invalid");
	}

}

int main()
{
	case1();
}
