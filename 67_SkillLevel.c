#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of problems you have done :");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf("Beginner ");
        break;
    case 1:
        printf("Junior Developer ");
        break;
    case 2:
        printf("Middle Developer ");
        break;
    case 3:
        printf("Senior Developer ");
        break;
    case 4:
        printf("Hacker ");
        break;

    default:
        printf("Jeff Dean ");
        break;
    }
    return 0;
}