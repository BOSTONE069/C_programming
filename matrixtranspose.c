//This is a program for doing a transpose of a matrix

#include <stdio.h>
/**
 * The function takes a matrix and returns the transpose of the matrix
 *
 * @return The transpose of the matrix.
 */
int main()
{
    int m, n, i, j, matrix[10][10], transpose[10][10];

    printf("Enter rows and columns :\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of the matrix\n");
    /* Taking the input from the user and storing it in the matrix. */
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");

    /* This is printing the transpose of the matrix. */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    return 0;
}