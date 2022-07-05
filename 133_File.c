#include <stdio.h>
struct student
{
    int m1;
    int m2;
    int m3;
};
int main()
{
    struct student a;
    FILE *fp;
    fp = fopen("marks.txt", "w");
    printf("enter the marks :");
    scanf("%d", &a.m1);
    printf("enter the marks :");
    scanf("%d", &a.m2);
    printf("enter the marks :");
    scanf("%d", &a.m3);
    fprintf( fp,"%d %d %d",a.m1,a.m2,a.m3 );
    fclose(fp);
    return 0;
}