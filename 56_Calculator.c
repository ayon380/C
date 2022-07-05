#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, w;
    char a[10], b;
    printf("Enter 1 to perform Arithmetic operations or 2 to perform Trigonometric operations :");
    scanf("%d", &n);
    if (n == 1)
    {
        fflush(stdin);
        printf("Enter what operation you want to do(+,-,*,/,%%)");
        scanf("%c", &b);
        int c, v;
        printf("Enter the first no :");
        scanf("%d", &c);
        printf("Enter the second number :");
        scanf("%d", &v);
        switch (b)
        {
        case '+':
            printf("The sum is : %d", (c + v));
            break;
        case '-':
            printf("The Difference is : %d", (c - v));
            break;
        case '*':
            printf("The Product is : %d", (c * v));
            break;
        case '/':
            printf("The Quotient is : %d", (c / v));
            break;
        case '%':
            printf("The Remainder is : %d", (c % v));
            break;
        default:
            printf("Wrong Choice !!!!!");
            break;
        }
    }
    else if (n == 2)
    {
        double d, h;
        printf("Enter the operation you want to perform (sin,cos,tan,sec,cosec,cot)");
        scanf("%s",&a);
        printf("Enter the value in degrees :");
        scanf("%lf", &h);
        d =( h / 180)*3.14;
        
        if (strcmp(a, "sin") == 0)
        {
            printf("The sine value is : %lf", sin(d));
        }
        else if (strcmp(a, "cot") == 0)
        {
            printf("The cot value is : %lf", (1 / tan(d)));
        }
        else if (strcmp(a, "cos") == 0)
        {
            printf("The cos value is : %lf", cos(d));
        }
        else if (strcmp(a, "tan") == 0)
        {
            printf("The tan value is : %lf", tan(d)); /* code */
        }
        else if (strcmp(a, "sec") == 0)
        {
            printf("The sec value is : %lf", (1 / cos(d))); /* code */
        }
        else if (strcmp(a, "cosec") == 0)
        {
            printf("The cosec value is : %lf", (1 / sin(d)));
        }
        else
        {
            printf("Wrong choice !!!!");
        }
    }
    else
    {
        printf("Wrong choice !!"); /* code */
    }

    return 0;
}
