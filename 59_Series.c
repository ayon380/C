#include <stdio.h>
#include<math.h>
int main()
{
    int n;   
    printf("Enter the max power  of n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%g ",pow(2.0,i));
    }
    
    return 0;
}