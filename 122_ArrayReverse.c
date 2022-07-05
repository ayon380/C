#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int t=0,j=0;
    int f=num-1;
    while (j<f)
    {
        t=arr[j];
        arr[j]=arr[f];
        arr[f]=t;
        j++;
        f--;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}