#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value :");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                printf(" Hi Five ");
            }
            else
                printf(" Hi ");
        }
        else if (i % 5 == 0)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                printf(" Hi Five ");
            }
            else
                printf(" Five ");
        }

        else
        {
            printf(" %d ", i);
        }
    }
    return 0;
}