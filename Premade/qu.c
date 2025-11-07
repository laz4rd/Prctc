#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1) // first element
            front = 0;
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d dequeued from queue\n", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Front element is: %d\n", queue[front]);
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    peek();
    display();

    return 0;
}
