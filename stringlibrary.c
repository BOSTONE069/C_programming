//This is a program to demostrate the use of the various use of
//the library functions of string.h

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Bostone";
    char str2[10] = "Ochieng";
    char str3[10];

    int len;

    int comparision;

    /* Copy string one into string 3*/
    strcpy(str3, str1);
    printf("The string number three = %s\n", str3);

    /*Concatenates string 0ne to string two*/
    strcat(str1, str2);
    printf("The string number one = %s\n", str1);

    /*Determining the length of a sring*/
    len = strlen(str1);
    printf("The length of the string is: %d\n", len);

    //This is for comparing two stings
    comparision = strcmp(str1, str2);
    if (comparision < 0)
    {
        printf("str1 is less than str2\n");
    }
    else if (comparision > 0)
    {
        printf("str2 is less than str1\n");
    }
    else
    {
        printf("str1 is equal to str2\n");
    }

    return 0;
}