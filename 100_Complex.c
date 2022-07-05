#include <stdio.h>

int main()
{
    struct S
    {
        float x;
        float y;
    };
    struct S a1;
    struct S a2,sum,sub,mul;
    printf("Enter the real part of first complex no :");
    scanf("%f", &a1.x);
    printf("Enter the imaginary part of first complex no :");
    scanf("%f", &a1.y);
    printf("Enter the real part of second complex no :");
    scanf("%f", &a2.x);
    printf("Enter the imaginary part of second complex no :");
    scanf("%f", &a2.y);
    sum.x=(a1.x + a2.x);
    sum.y=(a1.y + a2.y);
    sub.x=(a1.x-a2.x);
    sub.y=(a1.y - a2.y);
    mul.x=a1.x*a2.x-a1.y*a2.y;
    mul.y=a1.x*a2.y+a2.x*a1.y;
    printf("The sum is : %g + %gi \n",sum.x,sum.y);
    printf("The difference is : %g + %gi\n",sub.x,sub.y);
    printf("The multilplication is : %g + %gi ",mul.x,mul.y);
    return 0;
}