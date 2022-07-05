#include <stdio.h>
float area,volume;
float getdata()
{
    float r;
    printf("Enter the Radius of the sphere :");
    scanf("%f",&r);    
    return r;
}
float findArea()
{
    float r=getdata();
    area=4.0*3.14*r*r;
    return r;
}
void findVolume()
{
    float r=findArea();
    volume=(4.0/3.0)*3.14*r*r*r;
}
void showResult()
{
    printf("The Area of the Sphere : %.3f\n",area);
    printf("The Volume of the Sphere : %.3f",volume);
}
int main()
{
   
    findVolume();
    showResult();
    return 0;
}