#include <stdio.h>

#define MAX 10

int stacc[MAX];
int top = -1;

void push(int val)
{
    if(top == MAX-1)
    {
        printf("Stacc Overflow\n");
    }
    else
    {
        top++;
        stacc[top] = val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stacc Underflow\n");
    }
    else
    {
        printf("%d popped from stack \n",stacc[top]);
        top--;
    }
    
}

void peek()
{
    if(top==-1)
    {
        printf("Stacc Empty\n");
    }
    else
    {
        printf("Element at top is: %d\n", stacc[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stacc Empty\n");
    }
    else
    {
        printf("Stacc element are: \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n", stacc[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    display();
}