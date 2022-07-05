#include <stdio.h>

int main()
{
    int s = 0, n;
    printf("enter the no to be checked :");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            s = 1;

            break;
        }
    }
    if (s == 1)
    {
        printf("The no is not prime ");
    }
    else
    {
        printf("The no is prime");
    }

    return 0;
}