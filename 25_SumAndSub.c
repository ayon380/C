#include <stdio.h>
void sumavg(int *q, int *w);
int main()
{
    int a, b;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    sumavg(&a, &b);
    printf("the values of a and b are  : %d and %d",a,b);
    return 0;
}
void sumavg(int *q,int *w)
{
    int a=*q + *w;
    int b=*q - *w;
    *q=a;
    *w=b;
}