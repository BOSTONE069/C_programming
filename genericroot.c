#include <stdio.h>
#include <stdlib.h>

/**
 * It takes a number and adds up all the digits in the number until the sum is a single digit
 *
 * @param number The number whose digital root is to be found.
 *
 * @return The sum of the digits of the number.
 */
int genericroot(int number)
{
        int last_digit, sum;


        while (number >= 10)
        {
               /* Extracting the last digit of the number and adding it to the sum. */
               sum = 0;
               while (number != 0)
               {
                       last_digit = number % 10;
                       sum = sum + last_digit;
                       number = number / 10;
               }

               /* This is a while loop. */
               if(sum>=10)
               {
                        number=sum;
               }
               else
               {
                        break;
               }

        }
        return(sum);

}

/**
 * It takes a number, adds the digits of the number, and if the sum is greater than 9, it repeats the
 * process until the sum is less than 10
 *
 * @return The generic root of the number.
 */
int main()
{
        int number;

        printf("Enter number:");
        scanf("%d", &number);

        printf("Generic root of the number is: %d", genericroot(number));
        return 0;
}