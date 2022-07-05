#include <stdio.h>
int e,d;
void swap(int a ,int  b)
{
    int c=a;
    a=b;
    b=c;
    d=a;
    e=b;
}
int main()
{
    int a,b;
    printf("enter the first no :");
    scanf("%d",&a);
    printf("enter the second no :");
    scanf("%d",&b);
    printf("Before Swapping\n");
    printf("%d %d\n",a,b);
    swap(a,b);
    printf("After Swapping\n");
    printf("%d %d\n",d,e);
    
    return 0;
}