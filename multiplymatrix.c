//This is a program for multiplication of 2D mattrix

#include <stdio.h>

/**
 * The function takes two matrices as input and returns the product of the two matrices
 *
 * @return The program is returning the product of two matrices.
 */
int main()
{
    int matrixA[12][12], matrixB[12][12], matrixC[12][12];

    int i, j, row, column, sum = 0, k;

    printf("Enter the number of rows and columns for the matrix:\n");
    scanf("%d%d", &row, &column);

    printf("Enter the number of elments for the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("The matrix\n");
    /* This is printing the matrix. */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of elments for the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("The matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    // To multiply the elements
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            for (k = 0; k < column; k++)
            {
                sum = sum + matrixA[i][k] * matrixB[k][j];
            }
            matrixC[i][j] = sum;
        }
    }

    printf("Matrix multiplication result is:\n");
   /* This is printing the matrix. */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}