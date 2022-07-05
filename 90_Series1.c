#include <stdio.h>

int main()
{
    int n, i = 1, s = 1, t = 1;
    printf("Enter the no of terms  :");
    scanf("%d", &n);
    printf("The terms are : 1");
    while (i < n)
    {
        t += 2;
        s += t;
        printf(" %d", t);
        i++;
    }
    printf("\n The Sum of the Series  is  : %d", s);
    return 0;
}