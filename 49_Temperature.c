#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter the temperature in Celsius :");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("Celsius (C)   Fahrenheit (F)\n");
    printf("  %.2f       %.2f ",C,F);
    return 0;
}