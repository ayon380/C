#include <stdio.h>

int main()
{
    float a,s=0;
    int n,i=0;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        a=(float)1/i;
        printf("%g ",a);
        s+=a;
    }
    printf("The sum is  : %f",s);
    return 0;
}