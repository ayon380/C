#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct s
{
    char username[20];
    char password[9];
    char firstname[10];
    char lastname[10];
    char mobileno[11];
    char emailid[30];
};
void write()
{
    struct s s1;
    FILE *f;
    f = fopen("register.txt", "wb");
    printf("Enter your user name :");
    scanf("%s", s1.username);
    printf("Enter your password :");
    scanf("%s", s1.password);
    printf("Enter your first name:");
    scanf("%s", s1.firstname);
    printf("Enter your last name :");
    scanf("%s", s1.lastname);
    printf("Enter your mobile number :");
    scanf("%s", s1.mobileno);
    printf("Enter your email id :");
    scanf("%s", s1.emailid);
    fwrite(&s1, sizeof(s1), 1, f);
    fclose(f);
}
void read()
{
    FILE *f;
    struct s s1;
    char user[20], pass[9];
    f = fopen("register.txt", "rb");
    printf("Enter your user name :");
    scanf("%s", user);
    printf("Enter your password :");
    scanf("%s", pass);
    fread(&s1, sizeof(s1), 1, f);
    if (strcmp(s1.username, user) == 0 && strcmp(s1.password, pass) == 0)
    {
        printf(" Login   Success");
        printf("\nWelcome, %s", s1.username);
        printf("\nFirst Name : %s", s1.firstname);
        printf("\nLast Name : %s", s1.lastname);
        printf("\nMobile No : %s", s1.mobileno);
        printf("\nEmail ID : %s", s1.emailid);
    }
    else
    {
        printf("\nInvalid login details\n");
        read();
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("\nenter 1 to enter a new user , 2 to login,3 to exit");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            write();
            break;
        case 2:
            read();
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}