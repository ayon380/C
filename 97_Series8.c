#include <stdio.h>

int main()
{
    float s, w;
    int n, i = 0, a = 1, b = 2, c = 2;
    printf("Enter the no of terms : ");
    scanf("%d", &n);
    while (i < n)
    {
        w = (float)(a+0.0) / (c+0.0);
        s+=w;
        printf("%g ", w);
        b += 2;
        c += b;
        a++;
        i++;
    }
    printf("\n the sum is : %g",s);
    return 0;
}