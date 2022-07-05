#include <stdio.h>
#include <math.h>
int main()
{
    float a, b=0;
    int n, i = 0, x, e=1;
    printf("Enter the no of terms :");
    scanf("%d", &n);
    printf("Enter the value of x :");
    scanf("%d", &x);
    while (i < n)
    {
        a = (float)(1 / pow(x, e));
        printf(" %g",a);
        b+=a;
        e++;
        i++;
    }
    printf("The sum is : %g",b);
    return 0;
}