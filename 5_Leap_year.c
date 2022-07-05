#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the year to be checked as leap year : \n");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("This is a leap year \n");
    }
    else
    {
        printf("This is not a leap year \n");
    }

    return 0;
}