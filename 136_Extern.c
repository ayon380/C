#include <stdio.h>
int a = 8;
int main()
{
    int a = 9;
    {
        extern int a;
        printf("%d", a);
    }
    return 0;
}