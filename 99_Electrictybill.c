#include <stdio.h>
#include <string.h>
int main()
{
    float rate, surcharge;
    int units;
   
    char name[30],metreno[10];
    printf("Enter your Name : ");
    gets(name);
    printf("Enter the 10 digit Meter NO : ");
    gets(metreno);
    printf("Enter the no of units consumed :");
    scanf("%d", &units);
    if (units <= 50)
    {
        rate = 0.5 * units;
    }
    else if (units > 50 && units < 151)
    {
        rate = 0.5 * 50 + (0.75 * (units - 50));
    }
    else if (units > 150 && units < 251)
    {
        rate = 0.5 * 50 + 0.75 * 100 + (1.2 * (units - 150));
    }
    else if (units > 250)
    {
        rate = 0.5 * 50 + 0.75 * 100 + 1.2 * 100 + (1.5 * (units-250));
    }
    surcharge = 0.2 * rate;
    printf("****Electricity Bill****");
    printf("\n");
    printf("\nName : %s", name);
    printf("\nMetre No : %s", metreno);
    printf("\nUnits Consumed : %d", units);
    printf("\nSurcharge Cost : %.2f", surcharge);
    printf("\nThe Total Unit Cost  :  %.2f", rate);
    printf("\nTotal Bill Amount : %.2f", (rate + surcharge));
    return 0;
}