#include <stdio.h>
#include <conio.h>

/**
 * The value of a is set to 2 if INPUT is not defined, otherwise the user is prompted to enter a value
 * for a
 */
void main()
{
        int a=0;

        #ifndef INPUT

        a=2;

        #else
        printf("Enter the value of a:");
        scanf("%d", &a);
        #endif
        printf("The value of a:%d\n",a);
        getch();
}