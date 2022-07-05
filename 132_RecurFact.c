#include <stdio.h>
int sum(int  n)
{
    if (n <= 1)
        return n;
    return n * sum(n - 1);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}