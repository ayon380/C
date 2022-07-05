#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d ", i);
        if (i % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    return 0;
}