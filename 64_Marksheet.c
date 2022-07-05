#include <stdio.h>
#include <string.h>
int main()
{
    int i[5], f[5], v[5], class, roll,c=0, total=0;
    char name[20], sec;
    printf("Enter the students name :");
    gets(name);
    printf("Enter the studets class :");
    scanf("%d", &class);
    fflush(stdin);
    printf("Enter the stidents sec :");
    scanf("%c", &sec);
    printf("Enter the students roll no :");
    scanf("%d", &roll);
    for (int q = 0; q < 5; q++)
    {
        printf("Enter the marks for Internal assessment  for paper %d :", q + 1);
        scanf("%d", &i[q]);
        printf("Enter the marks for Final Examination Score  for paper %d :", q + 1);
        scanf("%d", &f[q]);
        printf("Enter the marks for Viva  for paper %d :", q + 1);
        scanf("%d", &v[q]);
    }
    printf("************************************************************\n");
    printf("MARKSHEET\n");
    printf("************************************************************\n");
    printf("Name : %s                          Class : %d \n", name, class);
    printf("Section : %c                         Roll No ; %d\n", sec, roll);
    printf("       InternalAssessment   EndSemExam   VivaMarks\n");
    for (int q = 0; q < 5; q++)
    {
        printf("Paper %d :         %d          %d         %d\n", q + 1, i[q], f[q], v[q]);
    }
    printf("************************************************************\n");
    for (int q = 0; q < 5; q++)
    {
        total += (i[q] + f[q] + v[q]);
    }
    int per = total / 7.5;
    printf("Total : %d     ", total);
    printf("Percentage : %d   ", per);
    printf("Division :  ");
    if (per > 60)
    {
        printf("I\n");
    }
    else if (per>50 && per<=60)
    {
        printf("II\n");
    }
    else if (per > 40 && per <= 50)
    {
        printf("III\n");
    }
    else
    {
        c=1;
        printf("FAIL \n");
    }
    printf("************************************************************\n");
    printf("RESULT : ");
    if(c==1)
    {
        printf("FAIL \n");
    }
    else
    {
        printf("PASS \n");
    }
    printf("************************************************************\n");
    return 0;
}