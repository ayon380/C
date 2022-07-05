#include <stdio.h>

int main()
{
    int a[10], b[10], s = 0, d = 0;
    float per;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the max marks in Question No : %d :", i + 1);
        scanf("%d", &a[i]);
        printf("Enter the marks scored by Ram : ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        s += a[i];
        d += b[i];
    }
    
    printf("\nQuestion No     Full Marks     Ram's Score\n ");
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d                %d                %d\n",(i+1),a[i],b[i]);
    }
    printf("Total Marks Scored : %d\n",d);
    d*=100;
    printf("Percentage Scored : %d",(d/s));
    return 0;
}