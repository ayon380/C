#include <stdio.h>

int main()
{
    int a[10];
    int n;
    printf("Enter the no :");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        a[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]); 
    }
    return 0;
}