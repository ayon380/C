#include <stdio.h>
#define size 10000
int arr[size];
int rear = -1, front = 0;
void enqueue()
{
    if(rear ==size-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    rear++;
    arr[rear] = n;
    printf("Successfully Inserted !!\n");
}
void dequeue()
{
    if (front >rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    front++;
}
void display()
{

    if (front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    while (1)
    {
        int n;
        printf("Enter 1 to enqueue , 2 to dequeue , 3 to display , 4 to exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            enqueue();
        }
        else if (n == 2)
        {
            dequeue();
        }
        else if (n == 3)
        {
            display();
        }
        else if (n == 4)
        {
            return 0;
        }
        else
        {
            printf("Wrong input !!");
            continue;
        }
    }
    return 0;
}