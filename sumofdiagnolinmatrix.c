//This program finds the sum of the digranls in a matrix
#include <stdio.h>

void main()
{
    int matrix[12][12];

    int i, j, row, column;

    int sum = 0;

    printf("Enter the number of rows and columns for the matrix:\n");
    scanf("%d%d", &row, &column);

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