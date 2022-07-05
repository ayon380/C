#include <stdio.h>

int main()
{
    int even, odd;
    printf("Enter the no of soldiers holding even no of weapons :");
    scanf("%d", &even);
    printf("Enter the no of soldiers holding odd no of weapons :");
    scanf("%d", &odd);
    if (even > odd)
    {
        printf("LUCKY");
    }
    else if (even == odd)
    {
        printf("Wrong Values !!");
    }
    else if (even < odd)
    {
        printf("NOT LUCKY");
    }
    return 0;
}