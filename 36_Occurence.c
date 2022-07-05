#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string :");
    gets(a);
    char b;
    int c = 0;
    printf("Enter the character to be counted in the string  : %s\n", a);
    b = getchar();
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            c++;
        }
    }
    printf("The amount of times '%c' has ocurred in the string '%s' is : %d", b, a, c);

    return 0;
}