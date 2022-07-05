#include <stdio.h>
struct vectors
{
    int a;
    int b;
};

int main()
{
    struct vectors v1,v2,v3;
    printf("Enter the first vector ;");
    scanf("%d",&v1.a);
    fflush(stdin);
    printf("Enter the second vector :");
    scanf("%d",&v2.a);
    
    v3.a =v1.a +v2.a;
    printf("The sum of the vectors  : %d",v3.a);
    return 0;
}