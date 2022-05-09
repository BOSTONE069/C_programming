//This program finds the sum of the diagonal of numbers in a matrix
#include <stdio.h>

/**
 * The function takes a matrix as input and returns the sum of the diagonal elements of the matrix
 */
void main()
{
    int matrix[12][12];

    int i, j, row, column;

    int sum = 0;

    printf("Enter the number of rows and columns for the matrix:\n");
    scanf("%d%d", &row, &column);

  /* Taking the input from the user and printing the matrix. */
    printf("Enter the number of elments for the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //To add diagonal elements
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("The sum of the diagnol of the matrix = %d\n", sum);

}