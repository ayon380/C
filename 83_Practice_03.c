#include <stdio.h>

int main()
{
    int n, q, w, m;
    int d = 0;
    printf("Enter the price per unit :");
    scanf("%d", &n);
    printf("Enter the quantity :");
    scanf("%d", &q);
    if (q > 50 && n == 100 && q <= 75)
    {
        d = 10;
    }
    if (q > 75)
    {
        d = 12;
    }
    w = n * q;
    if (w > 1000)
    {
        m = w * (d + 5);
        m /= 100;
    }
    else
    {
        m = w * d;
    }
    printf("Final cost : %d", (w - m));
    return 0;
}