#include <stdio.h>
#include <string.h>
int main()
{
    char p[20];
    int c = 0;
    char special[] = " !#$%&'()*+,-./:;<=>?@[\]^_`{|}~";
    printf("Enter the password :");
    scanf("%s", p);
    if (strlen(p) <= 8)
    {
        printf("Password Strengh is Weak ");
    }
    for (int i = 0; i < strlen(p); i++)
    {
        for (int j = 0; j < strlen(special); j++)
        {
            if(p[i]==special[j])
            {
                c=1;
                break;
            }
        }
    }
     if (strlen(p) > 8 && c==0)
    {
        printf("Password Strength is ok");
    }
    else if(strlen(p)>8 && c==1)
    {
        printf("Password Strength is good");
    }
    return 0;
}