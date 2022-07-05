#include <stdio.h>

int main()
{
    int bs, hra, da, gs;
    printf("Enter the Basic Salary :");
    scanf("%d", &bs);
    if (bs < 1500)
    {
        hra = 0.1 * bs;
        da = 0.9 * bs;
    }
    if (bs >= 1500)
    {
        hra=500;
        da=0.98*bs;
    }
    gs=(hra+da+bs);
    printf("Gross Salary = %d",gs);
    return 0;
}