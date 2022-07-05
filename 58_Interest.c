#include <stdio.h>

int main()
{
    int t;
    double r;
    printf("Enter the rate of interest :");
    scanf("%lf",&r);
    printf("Enter the time in years :");
    scanf("%d",&t);
    int i;
    for(i=1000;i<5000;i+=1000)
    {
        printf("%.2lf\n",(i*r*t*0.01));
    }
    return 0;
}