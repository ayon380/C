#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
char matrix[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void display(char n1[], char n2[], int p1, int p2, char matrix[]) // displaying the board
{
    printf("               TIC TAC TOE GAME     \n");
    printf("%s : %d \n", n1, p1);
    printf("%s : %d\n", n2, p2);
    printf("    %c    |    %c    |    %c\n", matrix[0], matrix[1], matrix[2]);
    printf("--------------------------------\n");
    printf("    %c    |    %c    |    %c\n", matrix[3], matrix[4], matrix[5]);
    printf("--------------------------------\n");
    printf("    %c    |    %c    |    %c\n", matrix[6], matrix[7], matrix[8]);
    printf("                              \n\n\n");
}
int random(int min, int max)
{
    srand(time(NULL));
    int num = (rand() % (max - min + 1)) + min;
    return num;
}
int algorithm1(int a)
{
    int r[8] = {1, 2, 3, 4, 6, 7, 8, 9}, s;
    if (a == 1 || a == 2 || a == 3 || a == 4 || a == 7 || a == 6 || a == 8 || a == 9)
    {
        s = 5;
    }
    else
    {
        int t = random(0, 7);
        s = r[t];
    }
    return s;
}
int algorithm2(int s, int a)
{
    int t, r[2];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matrix[i] == 'O')
            {
                
            }
        }
    }

}
int main()
{
    char matrix[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int n, t = 10;
    int p1 = 0, p2 = 0;        // choice
    char name1[20], name2[20]; // names of contestants
    printf("         Welcome to Tic Tac Toe Game    \n");
    printf("Enter 1 to play against the computer , 2 to play against other player  :");
    scanf("%d", &n);
    if (n == 1) // play against computer
    {
        printf("Enter your name :");
        scanf("%s", name1);
        char *name3 = "Computer";

        int a, c;
        display(name1, name3, p1, p2, matrix);
        // while (t-

        printf("Enter your choice :");
        scanf("%d", &a);
        a -= 1;
        matrix[a] = 'O';
        c = algorithm1(a);
        c -= 1;
        matrix[c] = 'X';

        display(name1, name3, p1, p2, matrix);
    }
    else if (n == 2) // play against other player
    {
        printf("Enter the 1st player name :\n");
        scanf("%s", name1);
        printf("Enter the 2nd player name :\n");
        scanf("%s", name2);
        display(name1, name2, 2, 3, matrix);
    }
    else // in case of error
    {
        printf("Wrong  choice!!!!!!!!");
    }
    return 0;
}