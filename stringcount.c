//This is a program for counting the lowercase, uppercase, number
//and special charaters in a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch[100];

    int i;

    int upper_case = 0, lower_case = 0, number = 0, special_characters=0;

    printf("Please Enter the String To be Checked:\n");
    gets(ch);

   /* A for loop that is iterating through the string and checking each character to see if it is upper
   case, lower case, a number, or a special character. */
    for (i = 0; i < strlen(ch); i++)
    {
        if (isupper(ch[i]))
        {
            upper_case++;
        }
        else if (islower(ch[i]))
        {
            lower_case++;
        }
        else if (isdigit(ch[i]))
        {
            number++;
        }
        else
        {
            special_characters++;
        }
    }

    /* Printing the number of upper case, lower case, special characters and numbers in the string. */
    printf("\nUpper case letters: %d", upper_case);
    printf("\nLower case letters: %d", lower_case);
    printf("\nSpecial characters: %d", special_characters);
    printf("\nNumber case letters: %d", number);


    return 0;


}