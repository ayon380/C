#include <stdio.h>
void positive(int b, int arr[b]);
int main()
{
    int n;
    printf("Enter the length of array :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the no for pos %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    positive(n, a);
    return 0;
}
void positive(int b, int arr[b])
{
    int c=0;
    for(int i=0;i<b;i++)
    {
        if (arr[i]>0)
        {
            c++;
        }
    }
    printf("the no of positive integers : %d",c);
}