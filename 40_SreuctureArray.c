#include <stdio.h>
typedef struct complex
{
    int x;
    int y;
} co;
void display(co *ct)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d + i%d\n", ct[i].x, ct[i].y);
    }printf("\n");
}
int main()
{
    co ca[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the x coordinate for %d variable :", i + 1);
        scanf("%d", &ca[i].x);
        printf("Enter the y coordinate for %d variable : ", i + 1);
        scanf("%d", &ca[i].y);
    }

    display(ca);

    return 0;
}