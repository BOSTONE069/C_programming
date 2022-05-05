#include <stdio.h>
/**
 * A simple calculator that can perform addition, subtraction, multiplication and division
 *
 * @return The program is returning 0.
 */
int main() {
    while (1) {
        int choice1, num1, num2;
        char choice2;
        printf("\n  [1] Addition\n  [2] Subtraction\n  [3] Multiplication\n  [4] Division\n");
        printf("\n Pick a choice: ");
        scanf("%d", &choice1);
        printf("\n Give a number: ");
        scanf("%d", &num1);
        printf("\n Give another number: ");
        scanf("%d", &num2);
       /* A switch statement. It is used to execute a block of code based on the value of a variable. */
        switch (choice1) {
            case 1:
            printf("Sum is %d", num1+num2);
            break;
            case 2:
            printf("Difference is %d", num1-num2);
            break;
            case 3:
            printf("Product is %d", num1*num2);
            break;
            case 4:
            printf("Quotient is %d", num1/num2);
            break;
            default:
            printf("Please select a valid operation");
        }
          /* Asking the user if they want to try another operation. If they do, it will ask them to
          pick another operation. If they don't, it will exit the program. */
            printf("\n Try another operation [y/n]: ");
            scanf("%s", choice2);

            if (choice2 == 'y' || choice2 == 'Y')
            {
                scanf("%d", &choice1);
            }
            else;
            {
                printf("Exiting...");
            }

    }
    return 0;
}