#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the x axis:");
    scanf("%d",&a);
    printf("Enter the y axis :");
    scanf("%d",&b);
    printf("Enter the z axis :");
    scanf("%d",&c);
    int arr[a][b][c];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf("enter the no for position(%d,%d,%d) :",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    int *p=arr;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf("%d \n",&arr[i][j][k]);
               
            }
        }
    }

    return 0;
}