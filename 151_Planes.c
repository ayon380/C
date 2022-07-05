#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};
struct Queue *createQueue(unsigned capacity)
{
    struct Queue *queue = (struct Queue *)malloc(
        sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(
        queue->capacity * sizeof(int));
    return queue;
}
int isFull(struct Queue *queue)
{
    return (queue->size == queue->capacity);
}
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}
void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
int front(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
int rear(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
int main()
{
    struct Queue *departure = createQueue(1000);
    struct Queue *arrival = createQueue(1000);
    int time;
    printf("Enter the time : ");
    scanf("%d", &time);
    int de, ar;
    printf("Enter the no of planes for departing : ");
    scanf("%d", &de);
    printf("Enter the no of planes for arrival : ");
    scanf("%d", &ar);
    for (int i = 0; i < de; i++)
    {
        enqueue(departure, 1);
    }
    for (int i = 0; i < ar; i++)
    {
        enqueue(arrival, 1);
    }
    for (int i = 0; i < time; i++)
    {
        if (isEmpty(departure) && isEmpty(arrival))
        {
            printf("Runway IDLE \n");
            continue;
        } 
        if(!isEmpty(departure))
        {
            int a=dequeue(departure);
            printf("Aircraft LANDING \n");
            continue;
        }
        int a=dequeue(arrival);
        printf("Aircraft TAKING OFF \n");
    }
    return 0;
}
