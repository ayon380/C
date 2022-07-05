#include <stdio.h>
#include <string.h>
typedef struct baa
{
    int accno;
    char name[100];
    int age;

} bank;
void display(bank bn);
int main()
{
    bank b1;
    printf("Enter your account no :");
    scanf("%d",&b1.accno);
    printf("Enter your name :");
    scanf("%s",b1.name);
    printf("Enter your age :\n");
    scanf("%d",&b1.age);
    display(b1);
    return 0;
}
void display( bank bn)
{
    printf("%s    %d    %d",bn.name,bn.age,bn.accno );
}