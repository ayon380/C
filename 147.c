#include <stdio.h>

int main()
{
    char arr[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char s[100];
    scanf("%s", s);
    int c=0;
    for(int i=0; i<100; i++)
    {
        c++;
        if(s[i]=='0')
        break;
    }
    printf("%d ", c);
    

    int f = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (s[i] != arr[j])
            {
                f = 1;
                break;
            }
        }
    }
    printf("%d", f);
    if (f == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
    return 0;
}