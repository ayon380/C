#include <stdio.h>
void times(int *);
int main()
{
    int n;
    printf("enter a no :");
    scanf("%d", &n);
    times(&n);
    printf("The value after call by reference is  : %d\n", n);

    return 0;
}
void times(int *a)
{
    *a*=10;
    
}