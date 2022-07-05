#include <stdio.h>

int main()
{
    int R;
    printf("Enter your Rank :");
    scanf("%d", &R);
    if (R <= 50)
    {
        printf("Congratulations , you have got 100 percent Scholarship !!");
    }
    else if (R > 50 && R < 101)
    {
        printf("Congratulations , you have got 50 percent Scholarship !!");
    }
    else
    {
        printf("No Scholarship!!");
    }
    return 0;
}