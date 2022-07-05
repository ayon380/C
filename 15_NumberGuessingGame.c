#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int t,n,c=0;
    srand(time(NULL));
    t=rand()%10+1;
    printf("*****NUMBER GUESSING GAME******\n");
    
    do
    {
        c++;

        printf("Enter a number :");
        scanf("%d",&n);
        if (n==t)
        {
            printf("Correct!!!!!!!!!!\n");
            printf("You have won the game!!!!!\n");
            break;
        }
        if(n<t)
        {
            printf("Higher number plss\n");
            continue;
        }
        if(n>t)
        {
            printf("Lower number plssss\n");
            continue;

        }
        printf("The no is prime");

        
    } while (t>0);
    printf("The no of guesses u have taken are : %d",c);
    
   
    return 0;
}