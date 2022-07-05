#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no :");
    scanf("%d",&n);
    int *a;
    a=&n;
    printf("The adress of the variable is : %u\n",a);
    printf("the value of the variable is  : %d",*a);

    return 0;
}