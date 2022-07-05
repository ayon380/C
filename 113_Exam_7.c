#include <stdio.h>
#include <string.h>
struct stall
{
    char name[20];
    char owner[20];
    char type[10];
};
int main()
{
    int n;
    printf("enter the no of stalls :");
    scanf("%d", &n);
    struct stall s[n];
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter the name :");
        fgets(s[i].name, 20, stdin);
        printf("Enter the owner :");
        fgets(s[i].owner, 20, stdin);
        printf("Enter the type of stall :");
        fgets(s[i].type, 10, stdin);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n\nStall Details\n");
        printf("Name : %s", s[i].name);
        printf("Owner : %s", s[i].owner);
        printf("Stall Type : %s", s[i].type);
    }
    return 0;
}