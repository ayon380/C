#include <stdio.h>

int main()
{
    int n, a[10], rem, bin = 0, i = 1;
    printf("Enter the no :");
    scanf("%d", &n);
    while (n != 0) 
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    printf("%d ", bin);
    return 0;
}