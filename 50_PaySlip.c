#include <stdio.h>

int main()
{
    int bs,hra,da,gs;
    printf("Enter the Basic Salary :");
    scanf("%d",&bs);
    hra=0.1*bs;
    da=0.9*bs;
    printf("Gross Salary = %d",(hra+da+bs));
    return 0;
}