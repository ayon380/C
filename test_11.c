#include<stdio.h>
#include<math.h>
float area, volume;
void findarea(float radius)
{ 
    area=4.0*3.1423*radius*radius;

}
void findvolume(float radius)
{
    volume=1.33*3.1432*radius*radius*radius;
}
void showresult()
   {
       printf("area of sphereb =%.3f\n",area);
       printf("volume of sphereb =%.3f",volume);

}
int main(){

    float radius;
    printf("enter radius of sphere");
    scanf("%f",& radius);
    findarea(radius);
    findvolume(radius);
    showresult();

    return 0;
}
   