#include <stdio.h>
#include <string.h>
/**
 * Gets() reads a string from user input, and puts() displays a string on the screen
 *
 * @return The string "Your name is: "
 */
int main()
{
        char name[50];
        printf("Enter your name: ");
        gets(name); // reads string from user
        printf("Your name is: ");
        puts(name); // displays string
        return 0;
}