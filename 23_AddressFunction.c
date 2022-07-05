#include <stdio.h>
void address(int *a);
int main()
{
    int n;
    printf("Enter a no :");
    scanf("%d",&n);
    printf("The address of variable %d is : %u\n",n,&n);
    int *k=&n;
    address(k);
    return 0;
}
void address(int *a)
{
    printf("The adress ot the variable %d is : %u",a,&a);
}