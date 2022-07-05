#include <stdio.h>
int sum(int n);
int main()
{
    int a;
    printf("Enter the no of natural numbers :");
    scanf("%d", &a);
    printf("The sum is : %d", sum(a));
    return 0;
}
int sum(int n)
{

    if (n == 0)
    {
        return n;
    }
    else
    {

        return n + sum(n - 1);
    }
}