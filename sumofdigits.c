#include <stdio.h>
#include <stdlib.h>

/**
 * It takes a number and adds the digits together.
 *
 * @param number The number whose digits are to be added.
 */
int digitsum(int number)
{
        int last_digit, sum = 0;
        while(number != 0)
        {
                last_digit = number % 10;
                sum = sum + last_digit;
                number = number / 10;

        }
        return(sum);

}

/**
 * The function takes an integer as input and returns the sum of its digits
 *
 * @return The sum of the digits of the number.
 */
int main()
{
        int number;
        printf("Enter number:");
        scanf("%d", &number);
        printf("Sum of digits is: %d", digitsum(number));
        return 0;
}