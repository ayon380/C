#include <stdio.h>
int fact(int r)
{
    int a=1;
    for(int i=1;i<=r;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    int number,factorial;
    printf("Enter the number  :");
    scanf("%d",&number);
    printf("The Factorial is  : %d",fact(number));
    return 0;
}