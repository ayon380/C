#include <stdio.h>

int main()
{
    int bs,gs;
    printf("Enter the basic salary :");
    scanf("%d",&bs);
    if(bs<1500)
    {
        gs=bs+(0.1*bs)+(0.9*bs);
    }
    else
    {
        gs=bs+500+(0.98*bs);
    }
    printf("The Gross Salary is  : %d",gs);
    return 0;
}