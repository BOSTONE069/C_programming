#include <stdio.h>

int main()
{
    int matrixA[12][12], matrixB[12][12], matrixC[12][12];

    int i, j, row, column;

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

    // To add diagonal elements
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
        }
    }

    printf("Matrix addition result is:\n");
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