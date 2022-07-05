#include <stdio.h>
void gm();
void ga();
void gn();
int main()
{
    int n;
    printf("enter your choice :\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1 /* constant-expression */:
        gm();
        ga();
        gn(); /* code */
        break;
    case 2:
        gn();
        break;

    default:
        printf("Wrong choice ");

        break;
    }

    return 0;
}
void gm()
{
    printf("Good Morning !!\n");
}
void ga()
{
    printf("Good Afternoon !!\n");
}
void gn()
{
    printf("Good Night !!!\n");
}