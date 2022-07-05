#include <stdio.h>
typedef struct Rectangle
{
    int length;
    int breadth;
} Re;
int main()
{
    Re r1;
    int d, r, a;
    printf("Enter the length of the rectangle :");
    scanf("%d", &r1.length);
    printf("Enter the breadth of the rectangle :");
    scanf("%d", &r1.breadth);
    a = r1.length * r1.breadth;
    printf("\nThe Area of the Rectangle : %d", a);
    printf("\nEnter the value of d :");
    scanf("%d", &d);
    r = ((r1.length + d) * (r1.breadth + d));
    printf("\nThe new Area of the Rectangle : %d\n", r);
    if (d == a)
    {
        printf("Area is same ");
    }
    else
    {
        printf("Area not same ");
    }
    return 0;
}