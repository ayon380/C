#include <stdio.h>
//array reverser
int main()
{

    int n;
    printf("Enter the array no :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rra[n];
    for (int i = 0; i < n; i++)
    {
        rra[i] = arr[(n - 1) - i];
    }
    printf("The array in reverse order is  \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", rra[i]);
    }
    return 0;
}