#include <stdio.h>
float temp1(float a);
float temp2(float b);
int main()
{
    int n;
    float d,k;
    printf("*****Temperature Converter******\n");
    printf("Enter your choice : 1 to convert celsisus to farhenheit or 2 to convert farhenheit to celsius \n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Enter the temperature in celsius :");
        scanf("%f",&d);
        k=temp1(d);
        printf("The temperature in fahrenheit is : %f",k);

    }
    else if (n==2)
    {
        printf("Enter the temperature in fahrenheit :");
        scanf("%f",&d);
        k=temp2(d);
        printf("The temperature in celsius is  : %f",k);
    }
    else
    {
        printf("Wrong choice !!!!!");
    }

    return 0;
}
float temp1(float a)
{
    float b;
    b=((a*9)/5) + 32;
    return b;
}
float temp2(float b)
{
    float c;
    c=((b-32)*5)/9;
    return c;
}