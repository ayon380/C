#include <stdio.h>

int main()
{
    int a = 0, n;
    int s = 0;
    printf("Enter the number \n");
    scanf("%d", &n);

    while (a <= n)
    {
        s += a;
        a++;
    }
    printf("The sum of n numbers : %d ", s);
    return 0;
}