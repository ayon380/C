#include <stdio.h>

int main()
{
    int s=0 ,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        s+=(i*n);


    }
    printf("The sum is : %d",s);
    return 0;
}