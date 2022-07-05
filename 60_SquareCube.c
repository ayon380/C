#include <stdio.h>
#include <math.h>
int main()
{
    printf("Value  Square Cube\n");
    for(int i=1;i<11;i++)
    {
printf("%d       %g      %g\n",i,(pow(i,2)),pow(i,3));
    }
    return 0;
}