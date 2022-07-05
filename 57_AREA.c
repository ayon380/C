#include <stdio.h>

int main()
{
    int i;
    for (int i = 20; i < 31; i++)
    {
        printf("%.2lf\n", (3.14 * i * i));
    }
    return 0;
}