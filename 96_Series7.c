#include <stdio.h>

int main()
{
 float s = 1.0, w;
    int n, i = 0, k = 2, l=1;
    printf("enter the no of terms  :");
    scanf("%d", &n);
    while (i < n)
    {
        for (int a = 1; a <= k ; a++)
        {
            l *= a;
        }
        // printf(" %d",l);
        w = (1.0 / l);
        printf(" %g", w);
        s += w;
        l=1;
        k++;
        i++;
    }
    printf("\n The sum is  : %g", s);
    return 0;
}