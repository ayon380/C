#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int c = 0;
    printf("Enter the string :");
    gets(a);
    printf("Enter the character to be searched in the string %s  :\n", a);
    char b = getchar();
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            c++; /* code */
        }
    }
    if (c>0)
    {
        printf("The character is found in the string !!!!!!!!!!!!\n");
        printf("The no of occurences in the string is : %d",c);
    }
    else
    {
        printf("Character not found in the string ");
    }
    return 0;
}