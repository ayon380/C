#include <stdio.h>
int area(int g);
int main()
{
    int side;
    printf("Enter the side of the square :");
    scanf("%d",&side);
    int a=area(side);
    printf("the area of the square is  : %d",a);
    return 0;
}
int area(int g)
{
    int a=g*g;
    return a;

}