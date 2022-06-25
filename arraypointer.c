#include <stdio.h>

/**
 * It prints the elements of the array.
 *
 * @param arrays This is the array that we want to print.
 */
void printarray(char *arrays)
{
        printf("Elemts of array are:\n");

        /* Printing the elements of the array. */
        for(int i=0; i<5; i++)
        {
                printf("%c", arrays[i]);

        }

}

/**
 * The function printarray() takes an array of characters as an argument and prints the array
 *
 * @return A,B,C,D,E
 */
int main()
{
        char arrays[5] = {'A','B','C','D','E'};

        printarray(arrays);

        return 0;
}