#include <stdio.h>

int main()
{
    int m, f;
    printf("Enter the age of the male :");
    scanf("%d", &m);
    printf("Enter the age of the Female :");
    scanf("%d", &f);
    if (m > 20 && f > 17)
    {
        printf("Eligible for marriage ");
    }
    else
    {
        printf("Not Eligible for marriage");
    }
    return 0;
}