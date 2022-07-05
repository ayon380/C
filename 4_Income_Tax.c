#include <stdio.h>

int main()
{
    int income;
    int tax;
    printf("Enter your income :\n");
    scanf("%d",&income);
    if(income<=250000)
    {
        printf("No Tax!!!");

    }
    if ((income>250000)&&(income<=500000))
    {
        tax=0.05*income;
        printf("The tax is %d \n",tax);

    }
    if((income>500000)&&(income<=1000000))
    {
        tax=0.2*income;
        printf("The tax is %d \n",tax);
    }
    if (income>1000000)
    {
        tax=0.3*income;
        printf("The tax is %d \n",tax);
    }
    
    return 0;
}