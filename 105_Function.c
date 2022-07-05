#include <stdio.h>
float area(float r);
float diameter(float r);
int main()
{
    float r;
    printf("Enter the Radius of the Circle :");
    scanf("%f",&r);
    printf("The Area of the Circle: %.2f",area(r));
    printf("\nThe  Volume of the Circle : %.2f",diameter(r));
    return 0;
}
float  area(float r)
{
    return(3.14*r*r);
}
float diameter(float r)
{
    return (2.0*r);
}