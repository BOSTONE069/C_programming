// This program is for converting the enteres string into lowercase
#include <stdio.h>
#include <ctype.h>

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