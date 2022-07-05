#include <stdio.h>
#define n 3
int main()
{
    float arr1[n][n];
    float m2[n][n];
    float m3[n][n];
    float m4[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the value of position [%d][%d]", i, j);
            scanf("%f", &arr1[i][j]);
        }
    }
    float det;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            float r1, r2, r3;
            r1 = arr1[0][0] * ((arr1[1][1] * arr1[2][2]) - (arr1[2][1] * arr1[1][2]));
            r2 = arr1[1][0] * ((arr1[0][1] * arr1[2][2]) - (arr1[2][1] * arr1[0][2]));
            r3 = arr1[2][0] * ((arr1[0][1] * arr1[1][2]) - (arr1[1][1] * arr1[0][2]));
            det = r1 - r2 + r3;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m3[0][0]=((arr1[1][1]*arr1[2][2])-(arr1[2][1]*arr1[1][2]));
            m3[1][0]=-((arr1[0][1]*arr1[2][2])-(arr1[2][1]*arr1[0][2]));
            m3[2][0]=((arr1[0][1]*arr1[1][2])-(arr1[1][1]*arr1[0][2]));
            m3[0][1]=-((arr1[1][0]*arr1[2][2])-(arr1[2][0]*arr1[1][2]));
            m3[1][1]=((arr1[0][0]*arr1[2][2])-(arr1[2][0]*arr1[0][2]));
            m3[2][1]=-((arr1[0][0]*arr1[1][2])-(arr1[1][0]*arr1[0][2]));
            m3[0][2]=((arr1[1][0]*arr1[2][1])-(arr1[2][0]*arr1[1][1]));
            m3[1][2]=-((arr1[0][0]*arr1[2][1])-(arr1[2][0]*arr1[0][1]));
            m3[2][2]=((arr1[0][0]*arr1[1][1])-(arr1[1][0]*arr1[0][1]));
        }
    }
    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m < 3; m++)
        {
            printf("%.6f", m3[l][m]);
            printf("  ");
        }
        printf("\n");
    }
    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m < 3; m++)
        {
            m4[l][m]=m3[l][m]/det;
            printf("%f",&m4[l][m]);
            printf(" ");
        }
        printf("\n");
    }

    printf("%f", det);
    return 0;
}