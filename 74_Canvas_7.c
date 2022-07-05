#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hra=0.1*n;
    int da=0.9*n;
    int ga=hra +da+n;
    printf("The Gross Salary is %d",ga);
    return 0;
}