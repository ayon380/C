#include <stdio.h>

int main()
{
    int s=1,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s*=i;/* code */
    }
    printf("The factorial of %d : %d",n,s);
    return 0;
}