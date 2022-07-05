#include <stdio.h>
typedef struct complex
{
    int x;
    int y;
}c;
int main()
{
    c c1;
    printf("Enter the x :");
    scanf("%d",&c1.x);
    printf("Enter the y :");
    scanf("%d",&c1.y);
    printf("The complex no is : %d + i%d",c1.x,c1.y);
    return 0;
}