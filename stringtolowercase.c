//This program is for converting the enteres string into lowercase
#include <stdio.h>

int main()

{
    char str[100];

    int i;

    printf("Please ennter the string to be converted:\n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);
    {
        if (str[i]>='A' && str[i]<='Z') // ASCII representation of alphabets
        {
            str[i] = str[i]+32;
        }
    }

    printf ("The Lower case of the string = %s", str);

    return 0;

}