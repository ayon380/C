#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the no of rows in the matrix  :");
    scanf("%d", &row);
    printf("Enter the no of columns in the matrix :");
    scanf("%d", &column);
    int m1[row][column], m2[row][column], sum[row][column], diff[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of the matrix(A) [%d][%d] :", i, j);
            scanf("%d", &m1[i][j]);
            printf("Enter the value of the matrix(B) [%d][%d] :", i, j);
            scanf("%d", &m2[i][j]);
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
    printf("\n Matrix B \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d  ", m2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
            diff[i][j]=m1[i][j]-m2[i][j];
        }
        printf("\n");
    }
    printf("\n Sum of the Matrices \n");
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d  ",sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference of the Matrices \n");
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d  ",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}