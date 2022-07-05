#include <stdio.h>

int main()
{
    int n,d,l,f;
    printf("Enter the number :");
    scanf("%d",&n);
    l=n%10;
    f=n;
    while(n>=10)
    {
        n/=10;
    }
    f=n;
    printf("Sum of first and last digit = %d",(l+f));
    return 0;
}