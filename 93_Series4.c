#include <stdio.h>

int main()
{
    int n, i = 0, a = 1, b = 2;
    float d, s = 0;
    printf("Enter the no of terms :");
    scanf("%d", &n);
    while (i < n)
    {
        d = (float)a / b;
        printf(" %g ", d);
        s += d;
        a+=2;
        b+=2;
        i++;
    }
    printf("The sum is  : %g", s);
    return 0;
}