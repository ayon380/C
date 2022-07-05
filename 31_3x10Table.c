#include <stdio.h>

int main()
{
    printf("***Multiplication Table Matrix***\n");
    int row, column;
    printf("enter the no up to which u want the tables :");
    scanf("%d", &row);
    printf("Enter the no of tables u want :");
    scanf("%d", &column);
    int arr[row][column];
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr[i][j]=(i+1)*(j+1);
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d        ",arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}