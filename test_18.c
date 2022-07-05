#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int front, rear, s;
    int *array;
    unsigned cap;
};

struct Queue *createQ(unsigned cap)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));

    queue->cap = cap;
    queue->front = queue->s = 0;
    queue->rear = cap - 1;
    queue->array = (int *)malloc(queue->cap * sizeof(int));

    return queue;
}

int isF(struct Queue *queue)
{
    return (queue->s == queue->cap);
}

int isE(struct Queue *queue)
{
    return (queue->s == 0);
}

void enQ(struct Queue *queue, int item)
{
    if (isF(queue))
    {
        return;
    }

    queue->rear = (queue->rear + 1) % queue->cap;
    queue->array[queue->rear] = item;
    queue->s = queue->s + 1;
}

int deQ(struct Queue *queue)
{
    if (isE(queue))
    {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->cap;
    queue->s = queue->s - 1;
    return item;
}

int front(struct Queue *queue)
{
    if (isE(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->front];
}

int rear(struct Queue *queue)
{
    if (isE(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main()
{
    struct Queue *dep = createQ(1000);
    struct Queue *arrival = createQ(1000);

    int t;

    printf("ENTER TIME : ");
    scanf("%d", &t);

    int d, a;
    printf("NUMBER THE PLANES FOR DEPARTURE : ");
    scanf("%d", &d);
    printf("NUMBER THE PLANES FOR ARRIVAL : ");
    scanf("%d", &a);

    for (int i = 0; i < d; i++)
    {
        enQ(dep, 1);
    }
    for (int i = 0; i < a; i++)
    {
        enQ(arrival, 1);
    }
    for (int i = 0; i < t; i++)
    {
        if (isE(dep) && isE(arrival))
        {
            printf("RUNWAY IS IDLE\n");
            continue;
        }
        if (isE(dep))
        {
            int a = deQ(dep);
            printf("AIRCRAFT LANDING\n");
            continue;
        }
        int a = deQ(arrival);
        printf("AIRCRAFT TAKING OFF\n");
    }
    return 0;
}