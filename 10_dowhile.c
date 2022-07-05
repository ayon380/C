#include <stdio.h>

int main()
{
    int a=0 ,n;
    int s=0;
    printf("Enter the number :");
    scanf("%d",&n);
    do
    {
        s+=a;
        a++;/* code */
    } while (a<=n);
    printf("The sum is : %d",s);
    return 0;
}