#include <stdio.h>

int main()
{
    int a ;
    printf("Enter the number n : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d  X  %d=%d\n",a,i,a*i);

    }
    return 0;
}