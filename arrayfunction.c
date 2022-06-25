#include <stdio.h>

/**
 * The function getarray() takes an array of integers as an argument and prints the elements of the
 * array
 *
 * @param arrays This is the array that we are passing to the function.
 */
void getarray(int arrays[])
{
        printf("Elements of the array are:");

        for(int i = 0; i < 5; i++)
        {
                printf("%d ", arrays[i]);
        }
}


/**
 * The function getarray() takes an array of integers as an argument and prints the array elements
 *
 * @return the address of the first element of the array.
 */
int main()
{
        int arrays[5]={45,67,34,78,90};

        getarray(arrays);

        return 0;
}