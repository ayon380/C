#include <stdio.h>
#define n 3
int main()
{
    int m1[n][n];
    int m2[n][n];
    int m3[n][n];
    printf("***Matrix Multiplication***\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of the position [%d][%d]\n", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of the position [%d][%d]\n", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m < 3; m++)
        {
            printf("%d", m3[l][m]);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}