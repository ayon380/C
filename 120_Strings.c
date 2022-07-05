#include <stdio.h>
#include <string.h>
#include <ctype.h>
int words(const char *a)
{
    int i = 0, c = 0;
    while (a[i] != '\0')
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            c++;
        }
        i++;
    }
    return c;
}
int capitalLetters(const char *a)
{
    int i = 0, c = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            c++;
        }
        i++;
    }
    return c;
}
int smallLetters(const char *a)
{
    int i = 0, c = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            c++;
        }
        i++;
    }
    return c;
}
int vowels(const char *a)
{
    int i = 0, c = 0;
    while (a[i] != '\0')
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'u' || a[i] == 'i' || a[i] == 'A' || a[i] == 'E' || a[i] == 'O' || a[i] == 'U' || a[i] == 'I')
            {
                c++;
            }
        }
        i++;
    }
    return c;
}
int consonants(const char *a)
{
    int i = 0, c = 0, e = 0;
    while (a[i] != '\0')
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'u' || a[i] == 'i' || a[i] == 'A' || a[i] == 'E' || a[i] == 'O' || a[i] == 'U' || a[i] == 'I')
            {
            }
            else
            {
                e++;
            }
        }
        i++;
    }
    return e;
}
void lower(const char *a)
{
    int i = 0;
    char s[100];
    printf("The String in Lower Case : ");
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            s[i] = tolower(a[i]);
        }
        else
        {
            s[i] = a[i];
        }
        putchar(s[i]);
        i++;
    }
}
void aupper(const char *a)
{
    int i = 0;
    char s[100];
    printf("The string in Upper Case : ");
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            s[i] = toupper(a[i]);
        }
        else
        {
            s[i] = a[i];
        }
        putchar(s[i]);
        i++;
    }
}
void change(char *a)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]=='R' || a[i]=='r')
        {
            a[i]='@';
        }
        i++;
    }
}
int main()
{
    char str[100];
    int upper = 0, small = 0, i = 0;
    printf("Enter the string :");
    fgets(str, 100, stdin);
    printf("The no of Words in the string is  : %d\n", words(str));
    printf("The no of Capital Letters in the String is : %d\n", capitalLetters(str));
    printf("The no of small letters in the string : %d\n", smallLetters(str));
    printf("The no of vowels in the string is  : %d\n", vowels(str));
    printf("The no of consonants in the string is  : %d\n", consonants(str));
    lower(str);
    aupper(str);
    change(str);
    printf("The changed String  : ");
    puts(str);
    return 0;
}