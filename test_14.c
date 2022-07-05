#include <stdio.h>
#include<conio.h>
int main()
{
    FILE *p;
    char ch[6],c[6];
    
    p=fopen("password.txt","r");
    
    fgets(ch,7,p);
    puts(ch);
    
    fclose(p);
    return 0;
}