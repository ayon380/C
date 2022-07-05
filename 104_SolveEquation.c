#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, xp, xn;
    printf("Form of Equation : ax^2 a + bx + c");
    printf("\nEnter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b :");
    scanf("%f", &b);
    printf("Enter the value of c : ");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("Roots are Real and Distinct \n");
        xp = (sqrt(d) - b) / 2 * a;
        xn = -((sqrt(d) + b) / 2 * a);
        printf("The Roots of the Equation are : %f and %f ", xp, xn);
    }
    else if (d == 0)
    {
        xp = xn = -(b / 2 * a);
        printf("Roots are Real and  Equal \n");
        printf("The Roots of the Equation are : %.2f and %.2f ", xp, xn);
    }
    else if (d < 0)
    {
        printf("Roots are Imaginary \n");
    }

    return 0;
}