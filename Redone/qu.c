#include <stdio.h>

#define MAX 10

int queue[MAX];
int front= -1;
int rear = -1;

void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("Queue is full \n");
    }

    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("Element has been enqueued\n");
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d has been dequeued.\n",queue[front]);
        front++;
    }
}

void peek()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Element at the top is %d \n",queue[front]);
    }
}

void traverse()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}

void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    peek();
    traverse();
}