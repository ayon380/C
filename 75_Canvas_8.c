#include <stdio.h>
#include<string.h>
int main()
{
    char name[10],class[10],sec[5];
    int roll;
    printf("Enter");
    scanf("%c\n",&name);
    int i1,i2,i3,i4,i5,e1,e2,e3,e4,e5,v1,v2,v3,v4,v5;
    printf("Enter");
    scanf("%d%d%d%d%d\n",&i1,&i2,&i3,&i4,&i5);
    scanf("%d%d%d%d%d\n",&e1,&e2,&e3,e4,&e5);
    scanf("%d%d%d%d%d\n",&v1,&v2,&v3,&v4,&v5);
    printf("**********************************************************************************\n");
    printf("MARKSHEET\n");
    printf("Name : %c\n",name);
    printf("             Class  %c\n",class);
    printf("SECTION %c\n",sec);
    printf("                                               ROLL No %d\n",roll);
    printf("**********************************************************************************\n");
    printf("Exam                      Internal Assessment                     End Sem \n");
    printf("Paper 1                                  %d                                                  %d\n",i1,e1);
    printf("Paper 2                                 %d                                                  %d\n",i2,e2);
    printf("Paper 3                                 %d                                                  %d\n ",i3,e3);
    printf("Paper 4                                 %d                                                  %d\n ",i4,e4);
    printf("Paper 5                                 %d                                                  %d\n",i5,e5);
    printf("***************************************************\n");
    printf("***************************************************\n");
    printf("Viva Marks \n");
    printf("%d   %d   %d   %d   %d\n",v1,v2,v3,v4,v5);
    printf("Total                                                                  Percentage\n");
    int t=(i1+i2+i3+i4+i5+e1+e2+e3+e4+e5+v1+v2+v3+v4+v5);
    double p=t/750;
    printf("  %d                                                                          %d      \n");
    printf("***********************************************************************************");
    return 0;
}