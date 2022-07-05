#include <stdio.h>

int main()
{
    int a, b, c, d, min, max;
    printf("Enter the age of Sita :");
    scanf("%d", &a);
    printf("Enter the age of Gita :");
    scanf("%d", &b);
    printf("Enter the age of Mita :");
    scanf("%d", &c);
    printf("Enter the age of Rita :");
    scanf("%d", &d);
    min = a;
    max = a;
    if (min > b) // checking 1st and 2nd number
        min = b;
    else if (max < b)
        max = b;
    if (min > c) // checking 1st and 3rd number
        min = c;
    else if (max < c)
        max = c;
    if (min > d) // checking 1st and 4th number
        min = d;
    else if (max < d)
        max = d;
    if (min == a)
        printf("Sita is the youngest, he is younger than Gita by %d  , younger than Rita by %d and younger than Mita by %d", (b - a), (c - a), (d - a));
    else if (min == b)
        printf("Gita is the youngest, he is younger than Sita by %d  , younger than Rita by %d and younger than Mita by %d", (a - b), (c - b), (d - b));
    else if (min == c)
        printf("Rita is the youngest, he is younger than Gita by %d  , younger than Sita by %d and younger than Mita by %d", (b - c), (a - c), (d - c));
    else if (min == d)
        printf("Mita is the youngest, he is younger than Gita by %d  , younger than Rita by %d and younger than Mita by %d", (b - d), (c - d), (a - d));
    return 0;
}