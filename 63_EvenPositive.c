#include <stdio.h>
void display(int b)
{
    printf("%d",b);
    if(b>=0)
    {
        printf("      Positive");
    }
    else
    {
        printf("      Negative");
    }
    if(b%2==0)
    {
        printf("           Even\n");
    }
    else
    {
        printf("           Odd\n");
    }
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the %d number :",i);
        scanf("%d",&a[i]);
    }
    printf("Value  Positive/Negative Even/Odd \n");
for (int i = 0; i < 5; i++)
{
    display(a[i]);
}

    return 0;
}