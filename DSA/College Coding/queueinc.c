#include <stdio.h>
#define N 100

int queue[N];
int front=-1,rear=-1;

void enqueue(int x)
{
    if (rear==N-1)
    {
        printf("Queue is full\n");
    }
    
    else if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }  
}

void dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("Queue Underflow");
    }
    else
    {
        printf("dequeued item : %d\n",queue[front]);
        front++;
    } 
}

void peek()
{
    printf("Top item is : %d\n",queue[front]);
}

void display()
{
    for (int i = front; i <=rear; i++)
    {
        printf("%d  ",queue[i]);
    }
    printf("\n");
    
}

int main()
{
    enqueue(9);
    enqueue(40);
    enqueue(50);
    enqueue(27);
    enqueue(6);
    display();
    dequeue();
    peek();
    dequeue();
    enqueue(67);
    display();
    return 0;
}

