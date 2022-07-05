#include <stdio.h>

int main()
{
    int n;
    int s = 0;
    printf("Enter the no :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("The sum of n numbers is : %d", s);
    return 0;
}