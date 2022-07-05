#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is %f\n",area);
    float per=(a+b+c);
    printf("The perimeter is %f\n",per);
    return 0;
}