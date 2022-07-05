#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of 1st Angle :");
    scanf("%d", &a);
    printf("Enter the value of 2nd Angle :");
    scanf("%d", &b);
    printf("Enter the value of 3rd Angle :");
    scanf("%d", &c);
    if ((a + b + c) == 180)
    {
        printf("The Triangle is Valid ");
    }
    else
    {
        printf("The Triangle is not valid");
    }
    return 0;
}