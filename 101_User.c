#include <stdio.h>
#include <string.h>
int main()
{
    struct user
    {
        char name[20];
        char city[10];
        char email[30];
        char no[11];
    };
    struct user a1, a2;
    printf("********1st User**********");
    printf("\nEnter your name  : ");
    fgets(a1.name, 20, stdin);
    printf("Enter your city :");
    fgets(a1.city, 10, stdin);
    printf("Enter your EMail : ");
    fgets(a1.email, 30, stdin);
    printf("Enter your Phone NO :");
    fgets(a1.no, 11, stdin);
    printf("*********2nd User**********");
    fflush(stdin);
    printf("\nEnter your name  : ");
    fgets(a2.name, 20, stdin);
    printf("Enter your city :");
    fgets(a2.city, 10, stdin);
    printf("Enter your EMail : ");
    fgets(a2.email, 30, stdin);
    printf("\n********1st User**********");
    printf("Name : %s", a1.name);
    printf("City : %s", a1.city);
    printf("Email ID : %s", a1.email);
    printf("Phone No : %s", a1.no);
    printf("\n*********2nd User**********");
    printf("Name : %s", a2.name);
    printf("City : %s", a2.city);
    printf("Email ID : %s", a2.email);
    int i = 0;
    while (i < 1)
    {
        printf("\nEnter your Phone NO :");
        fgets(a2.no, 11, stdin);
        if (strcmp(a1.no, a2.no) == 0)
        {
            printf("Same Number\n");
            i = 1;
        }
        else
        {
            printf("Different User\n");
        }
    }
    return 0;
}