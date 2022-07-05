#include <stdio.h>
#include <string.h>
void strcpey(char *a, char *b)

{
    int al = strlen(a);
    int bl = strlen(b);
    int c = al + bl;
    for (int i = 0; i < c; i++)
    {
        a[al] = b[i];
        al++;
    }
    a[al] = '\0';
    printf("The concatenated string is :\n");
    puts(a);
}
int main()
{
    char c[100], d[100];
    printf("enter a string\n");
    gets(c);
    printf("Enter another string ");
    gets(d);
    strcpey(c, d);

    return 0;
}