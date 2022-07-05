#include <stdio.h>

int main()
{
    int l,b,a,p;
    printf("Enter the length of the rectangle  :");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle :");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if(a>p)
    {
        printf("The Area is greater than Perimeter of the Rectangle \n");
        printf("The Area of the Rectangle is %d",a);
    }
    if(p>a)
    {
        printf("The Perimeter is greater than Area of the Rectangle  \n");
        printf("The Perimeter of the Rectangle is %d",p);
    }
    if (p==a)
    {
        printf("The Area and Perimeter of the Rectangle are Equal \n");
        printf("The value is : %d",a);
    }
    return 0;
}