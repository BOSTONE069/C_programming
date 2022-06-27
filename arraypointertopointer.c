#include <stdio.h>

/**
 * The function returns a pointer to the first element of the array
 *
 * @return The address of the first element of the array.
 */
int *getarray(int *array)
{


        printf("Enter the elements ina an array\n");

       /* Taking input from the user and storing it in the array. */
        for(int i=0; i<5; i++)
        {
                scanf("%d", &array[i]);
        }

        return array;
}

/**
 * The function getarray() returns a pointer to an array of integers
 *
 * @return The address of the first element of the array.
 */
int main()
{
        int *number;

        int array[5];

        number = getarray(array);

        printf("Elements of the array\n");

        /* Printing the elements of the array. */
        for(int i = 0; i < 5; i++)
        {
                printf("%d ", number[i]);
        }

        return 0;


}