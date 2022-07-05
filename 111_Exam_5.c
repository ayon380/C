#include <stdio.h>
#include <string.h>
int main()
{
    int cus, age;
    float c,amt;
    char name[20], add[20], no[11];
    printf("1)Priviledge Customer\n2)SeniorCitizen Customer\n");
    printf("Enter Customer Type \n");
    scanf("%d", &cus);
    fflush(stdin);
    printf("Enter The Name\n");
    fgets(name,20,stdin);
    printf("Enter The Age\n");
    scanf("%d", &age);
    fflush(stdin);
    printf("Enter The Address\n");
    fgets(add,20,stdin);
    printf("Enter The Mobile Number \n");
    fgets(no,11,stdin);
    printf("Enter The Purchased Amount\n");
    scanf("%f",&amt);
    
    printf("Bill Details\n");
    printf("Name %s",name);
    printf("\nMobile %s",no);
    printf("\nAge %d",age);
    printf("\nAddress %s",add);
    printf("\nYour bill amount is Rs %.1f",amt);
if(cus==1)
    {
        c=0.3*amt;
        printf("  Your bill amount is discount under priviledge customer \nYou have to pay Rs %.2f",(amt-c));
    
    }
    else if(cus==2)
    {
        c=0.12*amt;
        printf(" Your bill amount is discount under Senior Citizen Customer\nYou have to pay Rs %.2f",(amt-c));
    } 
    return 0;
}