#include <stdio.h>
#include <string.h>
void encryption(char *s)
{
    char *p = s;
    while (*p != '\0')
    {
        *p += 1;
        p++;
    }
    printf("After encrypting :");
    puts(s);
}
void decryption(char *b)
{
    char *p = b;
    while (*p != '\0')
    {
        *p -= 1;
        p++; /* code */
    }
    printf("After decrypting  :");
    puts(b);
}
int main()
{
    char s[100];
    printf("Enter the string :");
    gets(s);
    puts(s);
    encryption(s);
    decryption(s);
    return 0;
}