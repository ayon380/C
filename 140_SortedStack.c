#include <stdio.h>
#include <stdlib.h>
int top = -1;
int top1 = -1;
int arr[1000];
int arr1[1000];
int arr2[2000];
int isEmpty();
int isEmpty1();
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
    printf("\nThe Top Element is : %d ", arr[top]);
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
void push1()
{
    int a;
    printf("Enter the no to be pushed : ");
    scanf("%d", &a);
    top1++;
    arr1[top1] = a;
}
void pop1()
{
    int c = isEmpty1();
    if (c == 0)
    {
        top1--;
    }
}
void peek1()
{
    printf("\nThe Top Element is : %d ", arr1[top1]);
}
int isEmpty1()
{
    if (top1 == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display1()
{
    printf("\n");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
void merge()
{
    for (int i = 0; i <= top; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = top + 1; i <= top1; i++)
    {
        arr2[i] = arr1[i];
    }
    int e = top + top1;
    for (int i = 0; i < e - 1; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (arr2[j] < arr2[i])
            {
                int t = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = t;
            }
        }
    }
}
void display2()
{
    merge();
    printf("\n");
    for (int i = 0; i <= (top1 + top); i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}
int main()
{
    while (1)
    {
        int a;
        printf("\nEnter 1 to push ,\n 2 to pop,\n 3 to display ,\n 4 to Peek,\n 5 to exit ,\n 6 to push in new arr,\n 7 to pop in new arr,\n 8 to display in new arr,\n 9 to peek in new arr,\n 10 to display merged array ");
        scanf("%d", &a);
        if (a == 1)
        {
            push();
        }
        else if (a == 2)
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
        else if (a == 6)
        {
            push1();
        }
        else if (a == 7)
        {
            pop1();
        }
        else if (a == 8)
        {
            display1();
        }
        else if (a == 9)
        {
            peek1();
        }
        else if (a == 10)
        {
            display2();
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