#include <stdio.h>

int main()
{
    int row, column;
    printf("enter the number of rows");
    scanf("%d", &row);
    printf("enter the number of columns");
    scanf("%d", &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the element of the matrix (%d,%d)", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The Matrix is : \n");
    int a = (row * column) / 2;
    int c = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                c++;
            }
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    if (c > a)
    {
        printf("The Matrix is a SPARSE Matrix");
    }
    else
    {
        printf("The Matrix is NOT  a SPARSE Matrix");
    }
    return 0;
}