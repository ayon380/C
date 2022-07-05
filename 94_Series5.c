#include <stdio.h>

int main()
{
    int n, i = 0, a = 2, c,e= 1,s=0;
    printf("enter the no of terms :");
    scanf("%d", &n);
    n -= 1;
    printf("1 ");
    while (i < n)
    {
        if (a % 2 == 0)
        {
            c=s + a;
            printf(" +%d", a);
        }
        else
        {
            c=s - a;
            printf(" -%d", a);
        }
        e+=c;
        a++;
        i++;
    }
    printf("The sum is  : %d", e);
    return 0;
}