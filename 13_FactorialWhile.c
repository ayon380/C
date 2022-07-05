#include <stdio.h>

int main()
{
    int s=1,n,i=1;
    printf("Enter the number  :");
    scanf("%d",&n);
    while(i<=n)
    {
        s*=i;
        i++;


    }
    printf("the factorial is : %d",s);
    return 0;
}