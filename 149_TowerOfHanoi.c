#include <stdio.h>
void towers_of_hanoi(int n, char sou, char aux, char des)
{
    if (n == 1)
    {
        printf("\nShift disk no. %d from %c to %c", n, sou, des);
        return;
    }
    else
    {
        towers_of_hanoi(n - 1, sou, des, aux);
        printf("\nShift disk no. %d from %c to %c", n, sou, des);
        towers_of_hanoi(n - 1, aux, sou, des);
    }
}
void main()
{
    int n;
    char sou = 'A', aux = 'B', des = 'C';
    printf("Enter no. of disks: ");
    scanf("%d", &n);
    towers_of_hanoi(n, sou, aux, des);
}