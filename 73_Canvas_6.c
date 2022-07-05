#include <stdio.h>

int main()
{
    int km,min;
    scanf("%d%d",&km,&min);
    int m=km*1000;
    int s=m/min;
    printf("The speed in metre per minute is %d",s);
    return 0;
}