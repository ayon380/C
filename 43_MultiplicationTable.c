#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("multiplication.txt", "w");
    int m, n;
    printf("Enter the no of which .multiplication table u want ?");
    scanf("%d", &n);
    printf("Enter upto which nop u want the multiplication table to be printed :");
    scanf("%d", &m);
    for (int i = 1; i < m+1; i++)
    {

        int h;
        h = n * i;
        fprintf(ptr, "%d  x  %d = %d\n", n, i, h);
    }
    fclose(ptr);
    return 0;
}