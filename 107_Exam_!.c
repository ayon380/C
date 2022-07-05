#include <stdio.h>
#include<string.h>
int main()
{
    char name[16];
    printf("HELLO!");
    printf("\nHI, WHAT'S YOUR NAME?");
    fgets(name,15,stdin);
    printf("\n\n");
    printf("Welcome %s",name);
    printf("Eat. Sleep. Code. Repeat.");
    return 0;
}