#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int q=*a+*b;
    int s=*a-*b;
    if (s < 0)
        s*=(-1);
    *a=q;
    *b=s;
    //     printf("%d",s);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}