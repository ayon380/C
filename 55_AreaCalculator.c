#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("***AREA CALCULATOR***\n");
    printf("Enter 1 to calculate areaa of circle , 2 to find area of triangle or 3 to find area of rectangle ");
    scanf("%d", &n);
    if (n == 1)
    {
        float r, a;
        printf("Enter the radius of the circle :");
        scanf("%f", &r);
        a = 3.14 * r * r;
        printf("The Area of the circle is : %f", a);
    }
    else if (n == 2)
    {
        float a, b, c;
        printf("Enter the length of 1st side :");
        scanf("%f",&a);
        printf("Enter the length of 2nd side :");
        scanf("%f",&b);
        printf("Enter the length of 3rd side :");
        scanf("%f",&c);
        float s = (a + b + c) / 2;
        printf("%f",s);
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area is %f\n", area);
        return 0;
    }
    else if(n==3)
    {
        int l,b;
        printf("Enter the length of the rectangle  :");
        scanf("%d",&l);
        printf("Enter the breadth of the rectangle  :");
        scanf("%d",&b);
        printf("The area is : %d",l*b);
    }
    return 0;
}