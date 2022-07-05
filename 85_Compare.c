#include <stdio.h>

int main()
{
    int a, b, n;
    printf("Enter the first no (a):");
    scanf("%d", &a);
    printf("Enter the second no (b):");
    scanf("%d", &b);
    printf("Enter the third no (n):");
    scanf("%d", &n);
    if (a > n)
        printf("a is greater than n");
    else
        printf("n is greater than a");
    if (b > n)
        printf("\nb is greater than n");
    else
        printf("\nn is greater than b");
    return 0;
}