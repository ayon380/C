#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    char c;
    int n=0;
    printf("enter the first string :\n");
    scanf("%s",a);
    printf("enter the second string :");
    while (c!=' ')
    {
        fflush(stdin);
        scanf("%c",&c);
        b[n]=c;
        n++;
    }
    printf("The first string is : %s\n",a);
    printf("The Second String is  : %s",b);
    return 0;
}