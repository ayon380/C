#include <stdio.h>

int main()
{
    float r;
    printf("Enter the radius :");
    scanf("%f\n",&r);
    float area=(3.14*r*r);
    printf("The area is %f\n",area);
    float cir=2*3.14*r;
    printf("The Circumference is %f\n",cir);
    float dia=2*r;
    printf("The diameter is %f",dia);
    return 0;
}