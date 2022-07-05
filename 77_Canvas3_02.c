#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    char c;
    printf("Enter the character :");
    scanf("%c", &c);
    if (c == '@')
    {
        int r;
        printf("Enter the radius of the circle :");
        scanf("%d", &r);
        int a = (int)(3.14 * r * r);
        printf("The area of the circle : %d\n", a);
        printf("The Diameter of the circle : %d", (2 * r));
    }
    else
    {
        float a, b, c;
        printf("enter the length of first side :");
        scanf("%f",&a);
        printf("enter the length of second side :");
        scanf("%f",&b);
        printf("enter the length of the third side :");
        scanf("%f",&c);
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area is %f\n", area);
        float per = (a + b + c);
        printf("The perimeter is %f\n", per);
        return 0;
    }
    return 0;
}