#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char *line = NULL, *tmp = NULL;
    size_t size = 0, index = 0;
    int ch = EOF;

    while (ch) {
        ch = getc(stdin);

        /* Check if we need to stop. */
        if (ch == EOF || ch == '\n')
            ch = 0;

        /* Check if we need to expand. */
        if (size <= index) {
            size +=ch;
            tmp = realloc(line, size);
            if (!tmp) {
                free(line);
                line = NULL;
                break;
            }
            line = tmp;
        }

        /* Actually store the thing. */
        line[index++] = ch;
    }
    int n=strlen(line);
    int c = 0;
    char no[] = "0123456789";
    int s[10];
    for (int j = 0; j < 10; j++)
    {
        c=0;
        for (int i = 0; i < n; i++)
        {
            if (no[j]==line[i])
            {
                c++;
            }
        }
        s[j]=c;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}