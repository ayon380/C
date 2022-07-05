#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[20];
    int c = 0, d = 0, v = 0, o = 0, n=0;
    printf("Enter the string :");
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            c++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            d++;
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            v++;
        else if (s[i] >= '0' && s[i] <= '9')
            n++;
        if(s[i]==' ')
        o++;
    }

    printf("The no of Capital letters in %s : %d", s, c);
    printf("\nThe no of Small letters in %s : %d", s, d);
    printf("\nThe no of Vowels in %s : %d", s, v);
    printf("\nThe no of Numbers in %s : %d", s, n);
    return 0;
}