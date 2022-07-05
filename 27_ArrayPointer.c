#include <stdio.h>

int main()
{
    int m[10];
    for (int i=0;i<5;i++)
    {
        printf("enter a number :");
        scanf("%d",&m[i]);
    }
    int *ptr=m;
    ptr+=2;
    printf("The no is : %d",*ptr);
    return 0;
}