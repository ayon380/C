#include <stdio.h>

int main()
{
    int a, b, c;
    float percent;
    printf("Enter the marks of first subject:\n");
    scanf("%d", &a);
    printf("Enter the marks of second subject :\n");
    scanf("%d", &b);
    printf("Enter the marks of third subject :\n");
    scanf("%d", &c);
    percent = (a + b + c) / 3;
    printf("your percentage is %f \n", percent);

    if ((percent >= 40) && ((a > 32) && (b > 32) && (c > 32)))
    {
        printf("You have passed !!\n");
    }
    else
    {
        printf("You have failed !!\n");
    }

    return 0;
}