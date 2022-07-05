#include <stdio.h>
float avg(int d , int e , int f);
int main()
{
    int a,b,c;
    printf("Enter the first number  :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);
    float f=avg(a,b,c);
    printf("the avg of the numbers is : %f",f);
    return 0;
}
float avg(int d ,int e,int f)
{
    float h =(d+e+f)/3;
    return h;
}