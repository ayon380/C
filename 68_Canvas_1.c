#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d ",&a,&b);
    int c=a/b;
    int d=a%b;
    printf("The quotient of %d and %d is %d with a remainder of %d",a,b,c,d);
    return 0;
}