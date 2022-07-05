#include <stdio.h>

int main()
{
    int r,s,d;
    printf("Enter the age of Ram :");
    scanf("%d",&r);
    printf("Enter the age of Shyam :");
    scanf("%d",&s);
    if(r>s)
    {
        printf("Ram is older than Shyam by %d",(r-s));
    }
    else
    {
        printf("Shyam is older than Ram by %d",(s-r));
    }
    return 0;
}