// This is a program code for checking whether
// a charcter is in lowercase or uppercase using the ASCII TABLE
#include <stdio.h>

void case1()
{
	char ch;
	
	printf("Enter the Upper or lower case charater:\n");
	scanf("%c", &ch);
	
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
