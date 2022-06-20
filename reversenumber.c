#include <stdio.h>
#include <stdio.h>

/**
 * It takes a number, and returns the number with its digits reversed
 *
 * @param number The number to be reversed.
 *
 * @return The sum of the reversed number.
 */
int reversenumber(int number)
{
        int last_digit, sum = 0;

        while(number != 0)
        {
                last_digit = number % 10;
                sum  = sum * 10 + last_digit;
                number = number / 10;
        }
        return sum;
}

/**
 * The function reversenumber() takes an integer as an argument and returns the reverse of the number
 *
 * @return The reverse number is: 0
 */
int main()
{
        int number;

        printf("Enter The Number\n");
        scanf("%d", &number);

        printf("The reverse number is: %d",reversenumber(number));
        return 0;
}