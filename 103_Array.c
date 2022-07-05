#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0,pos=0,neg=0,s=0;
    printf("Enter the no of numbers :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number [%d] :", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The no of Even numbers is : %d",even);
    printf("\nThe no of Odd numbers is : %d",odd);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        s+=a[i];
    }
    printf("\nThe no of Positive numbers is : %d",pos);
    printf("\nThe no of Negative numbers is : %d",neg);
    printf("\nThe Sum is : %d",s);
    printf("\nThe Square is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]);
    }
    printf("\nThe Cube is : ");
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]*a[i]);
    }
    int lar,sma;
    lar=sma=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>lar)
        {
            lar=a[i];
        }
        if(a[i]<sma)
        {
            sma=a[i];
        }
    }
    printf("\nThe largest number is : %d",lar);
    printf("\nThe smallest number is : %d",sma);
    return 0;
}