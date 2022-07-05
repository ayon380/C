#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the no of rows in the matrix  :");
    scanf("%d", &row);
    printf("Enter the no of columns in the matrix :");
    scanf("%d", &column);
    int m1[row][column], t[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of the matrix(A) [%d][%d] :", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\n Matrix A\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d  ", m1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            t[j][i]=m1[i][j];
        }
    }
     printf("\n Transpose of Matrix A\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d  ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}