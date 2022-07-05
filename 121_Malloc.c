#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int*)calloc(n, sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&ptr[i]);
    }
    int s=0;
    for(int j=0;j<n;j++)
    {
        s+=ptr[j];
    }
    printf("%d",s);
    free(ptr);
    return 0;
}