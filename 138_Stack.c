#include <stdio.h>
#include <stdlib.h>
int top = -1;
int arr[1000];
int isEmpty();
void push()
{
    int a;
    printf("Enter the no to be pushed : ");
    scanf("%d", &a);
    top++;
    arr[top] = a;
}
void pop()     
{
    int c = isEmpty();
    if (c == 0)
    {
        top--;
    }
}
void peek()
{
    printf("\nThe Top Element is : %d ",arr[top]);
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    printf("\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    while (1)
    {
        int a;
        printf("\nEnter 1 to push ,\n 2 to pop,\n 3 to display ,\n 4 to Peek,\n 5 to exit .");
        scanf("%d", &a);
        if (a == 1)
        {
            push();
        }
        else if(a == 2)
        {
            pop();
        }
        else if (a == 3)
        {
            display();
        }
        else if (a == 4)
        {
            peek();
        }
        else if (a == 5)
        {
            exit(0);
        }
        else
        {
            printf("Wrong input!!!!!!!1");
            continue;
        }
    }
    return 0;
}