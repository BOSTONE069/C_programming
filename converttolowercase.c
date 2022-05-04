// This program is for converting the enteres string into lowercase
#include <stdio.h>
#include <ctype.h>

/**
 * The tolower() function converts the letter c to lower case, if possible
 *
 * @return The lower case of the string.
 */
int main()
{
    char str[100];

    int i;

    printf("Please ennter the string to be converted:\n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(tolower(str[i]));
    }

    printf("\nThe Lower case of the string = %s", str);

    return 0;
}