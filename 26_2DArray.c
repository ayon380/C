#include <stdio.h>
void display(int r, int c, int m[r][c]);
int main()
{
    int row, column;
    printf("****Matrix****\n");
    printf("enter the no of rows :");
    scanf("%d", &row);
    printf("Enter the no of columns :\n");
    scanf("%d", &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of position [%d,%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    display(row, column, matrix);
    return 0;
}
void display(int r, int c, int m[r][c])
{
    int i, j;
    printf("%d %d \n", r, c);
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}