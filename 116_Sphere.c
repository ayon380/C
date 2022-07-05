#include <stdio.h>
float getData()
{
    float radius, area, volume;
    printf("Enter the radius of the sphere :");
    scanf("%f", &radius);
    return radius;
}
float findArea()
{
    float r = getData();
    return (4.0 * 3.14 * r * r);
}
float findVolume()
{
    float r = getData();
    return ((4.0 / 3.0) * 3.14 * r * r * r);
}
void showResult()
{
    printf("The Area of the Sphere : %.3f\n", findArea());
    printf("The Volume of the Sphere : %.3f", findVolume());
}
int main()
{
    showResult();
    return 0;
}