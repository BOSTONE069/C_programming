#include <stdio.h>


/**
 * It takes an array as an argument, and returns an array
 *
 * @param array This is the array that we are passing to the function.
 *
 * @return The address of the array.
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
 * The function getarray() takes an array as an argument and returns a pointer to the array
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