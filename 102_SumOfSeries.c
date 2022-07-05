#include <stdio.h>

int main()
{
    int n,i=1,s=0;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            s-=1;
        }
        else
        {
            s+=1;
        }
        i++;
    }
    printf("The Sum is : %d",s);
    return 0;
}