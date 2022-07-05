#include <stdio.h>

int main()
{
    float r;
    printf("Enter the radius of the sphere :");
    scanf("%f",&r);
    printf("Area of Sphere : %.2f",(4.0*3.14*r*r));
    printf("\nVolume of Sphere : %.2f",((4.0/3.0)*3.14*r*r*r));
    return 0;
}