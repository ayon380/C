#include <stdio.h>
int prime()
{
    int n,c=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a=prime();
    if(a==1)
    {
        printf("The no is prime ");
    }
    else
    {
        printf("The no is not prime  ");
    }
    return 0;
}