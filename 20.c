#include  <stdio.h>
/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
int main ()
{
        int count = 0;
        int number;

        while (count++ <=10 )
        {
                for (number = 0; number <= 14; number++)
                {
                        printf("%d", number);
                }
        }
        printf("\n");

}
