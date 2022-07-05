#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};
void display(struct node *q)
{
    while (q != NULL)
    {
        printf("%d -> ", q->data);
        q = q->ptr;
    }
    printf("NULL");
}
int main()
{
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    first->data = 10;
    first->ptr = second;
    second->data = 20;
    second->ptr = third;
    third->data = 30;
    third->ptr = fourth;
    fourth->data = 40;
    fourth->ptr =NULL;
    display(first);
    return 0;
}
