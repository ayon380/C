#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int a;
    struct node *b;
} stack;
stack *c;
void push()
{
    int v;
    stack *ptr = (stack *)malloc(sizeof(stack));
    printf("Enter the value :");
    scanf("%d", &v);
    if (c == NULL)
    {
        ptr->a = v;
        ptr->b = NULL;
        c = ptr;
    }
    else
    {
        ptr->a = v;
        ptr->b = c;
        c = ptr;
    }
    printf("Item pushed \n");
}
void pop()
{
    stack *ptr;
    if (c == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int q = c->a;
        ptr = c;
        c = c->b;
        free(ptr);
    }
    printf("Item popped \n");
}
void display()
{
    stack *ptr;
    ptr = c;
    printf("\nThe stack is as follows : ");
    if (ptr == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->a);
            ptr = ptr->b;
        }
    }
    printf("\n");
}
void peek()
{
    printf("\nTop Element: %d\n", c->a);
}

int main()
{
    printf("*******STACK OPERATIONS USING LINKED LIST*********\n\n");
    while (1)
    {
        printf("Enter :\n1. to push\n2.to pop\n3.to peek\n4.to display\n5.to Exit");
        int a;
        scanf("%d", &a);
        if (a == 1)
        {
            push();
            printf("\n");
        }
        else if (a == 2)
        {
            pop();
            printf("\n");
        }
        else if (a == 3)
        {
            peek();
            printf("\n");
        }
        else if (a == 4)
        {
            display();
            printf("\n");
        }
        else if (a == 5)
        {
            exit(0);
        }
        else
        {
            printf("Wrong input!!!!!!!!!!!!!!!!!!\n");
        }
    }
    return 0;
}