#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
int score1, score2, no, q;        // to store the scores of each player
char name1[20] = "PC", name2[20]; // to store the name of each player
void person();
void personinput();
void result();
int random(int min, int max) // to generate a random no between a range
{
    srand(time(NULL));
    int num = (rand() % (max - min + 1)) + min;
    return num;
}
void print(int a, int s) // to print each round of the game
{
    if (a == s)
    {
        printf("Tie !!!!!\n");
    }
    else if (a != s)
    {
        printf(" %s        %s\n\n", name1, name2);
        if (a == 1 && s == 2)
        {
            score2++;
            printf(" 00000          00000000\n");
            printf("0000000   vs    00000000\n");
            printf(" 00000          00000000\n");
            printf("\n\n%s have won this round !!!\n", name2);
        }
        if (a == 2 && s == 1)
        {
            score1++;
            printf("00000000          00000 \n");
            printf("00000000    vs   0000000\n");
            printf("00000000          00000 \n");
            printf("\n\n%s have won this round\n", name1);
        }
        if (a == 1 && s == 3)
        {
            score1++;
            printf(" 00000           0000   0\n");
            printf("0000000   vs       00000 \n");
            printf(" 00000           0000   0\n");
            printf("\n\n%s have won this round\n", name1);
        }
        if (a == 3 && s == 1)
        {
            score2++;
            printf("0   0000         00000 \n");
            printf("00000      vs   0000000\n");
            printf("0   0000         00000 \n");
            printf("\n\n%s have won this round !!!\n", name2);
        }
        if (a == 2 && s == 3)
        {
            score2++;
            printf("0000000          0000   0\n");
            printf("0000000   vs       00000\n");
            printf("0000000          0000   0\n");
            printf("\n\n%s have won this round !!!\n", name2);
        }
        if (a == 3 && s == 2)
        {
            score1++;
            printf("0   0000        00000000\n");
            printf("00000     vs    00000000\n");
            printf("0   0000        00000000\n");
            printf("\n\n%s have won this round\n", name1);
        }
    }
    else
    {
        printf("Wrong Inputs !!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        exit(0);
    }
    printf("\n\nThe scores of %s and %s are : %d and %d\n", name1, name2, score1, score2);
    printf("\n\n**************************************************************************************\n\n");
    q++;
    if (q == no)
    {
        result();
    }
}
void result() // to display the final result
{
    Sleep(5000);
    system("cls");
    Beep(432, 1000);
    printf("\n\n**************************************************************************************\n\n");
    if (score1 > score2)
    {
        printf("\n");
        printf("Congratulations !!!!!!\n");
        printf("\n\n%s have won the game!!!!", name1);
    }
    if (score2 > score1)
    {
        printf("\n\n");
        printf("Congratulations !!!!!!\n");
        printf("\n\n%s have won the game!!!!", name2);
    }
    if (score1 == score2)
    {
        printf("\n\n");
        printf("It's a TIE!!!!!!!!!!");
    }
    printf("\n\n**************************************************************************************\n\n");
}
void person() // to play between two players
{
    fflush(stdin);
    printf("\nEnter the 1st person name  :");
    scanf("%[^\n]%*c", name1);
    fflush(stdin);
    printf("\nEnter the 2nd Person name :");
    scanf("%[^\n]%*c", name2);
    printf("\nEnter the no of rounds u want to play :");
    scanf("%d", &no);
    printf("\nSTARTING THE GAME..............\n");
    printf("\n\n**************************************************************************************\n\n");
    for (int i = 0; i < no; i++)
    {
        Sleep(5000);
        system("cls");
        Beep(432, 1000);
        printf("\n******************                    ROUND - %d                      *****************\n\n", i + 1);
        personinput();
    }
}
void personinput()
{
    int n, e1, e2;
    char c1, c2;
    printf("\n%sEnter 1 for Rock, 2 for Paper,3 for Scissor :\n", name1);
    c1 = getch();
    e1 = c1 - '0';
    printf("*\n");
    if (e1 > 3)
    {
        printf("\nWrong input!!!!!  Enter again......\n");
        personinput();
    }
    printf("\n%sEnter 1 for Rock, 2 for Paper,3 for Scissor :\n", name2);
    c2 = getch();
    printf("*\n\n\n");
    e2 = c2 - '0';
    if (e2 > 3)
    {
        printf("\nWrong input!!!!! Enter again.,,,,,,\n");
        personinput();
    }
    print(e1, e2);
}
void computer() // to play against the computer
{
    fflush(stdin);
    printf("\nEnter your Name :");
    scanf("%[^\n]%*c", name2);
    int f, q;
    printf("\nEnter the no of times u want to play :");
    scanf("%d", &no);
    printf("\nSTARTING THE GAME..............\n");
    printf("\n\n**************************************************************************************\n\n");
    for (int i = 0; i < no; i++)
    {
        Sleep(5000);
        system("cls");
        Beep(432, 1000);
        printf("\n*****************                     ROUND - %d                      *****************\n\n", i + 1);
        printf("\n%sEnter 1 for Rock, 2 for Paper,3 for Scissor :\n", name2);
        scanf("%d", &f);
        printf("\n\n");
        q = random(1, 3);
        print(q, f);
    }
}

int main() // main function
{
    printf("\n\n***************************WELCOME TO ROCK PAPER SCISSOR GAME***************************\n\n");
    int n, a;
    printf("\nEnter 1 to play against the computer or 2 to play with another person : ");
    scanf("%d", &n);
    if (n == 2)
    {
        person();
    }
    if (n == 1)
    {
        computer();
    }
    if (n > 2)
    {
        printf("Wrong choice enter 1 or 2 !!!!!!");
    }
    return 0;
}