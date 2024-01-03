// OUTPUT Restricted Double Eneded Queue
/*
In this DEQUEUE, Insertion is possible at both the Ends front and rear
but the deletion is only possible from front end
*/
#include <stdio.h>
#define N 7

int dequeue[N];
int front = -1, rear = -1;

void enquerear(int x)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        dequeue[rear] = x;
    }
    else if (rear == N - 1)
    {
        rear = 0;
        dequeue[rear] = x;
    }
    else
    {
        rear++;
        dequeue[rear] = x;
    }
}

void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is in underflow condition\n");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == N - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void enquefront(int x) 
{
    if ((front==0 && rear==N-1) && (front==rear+1) )
    {
        printf("Queue is full\n");
    }
    else if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        dequeue[front]=x;
    }
    else if (front==0)
    {
        front=N-1;
        dequeue[front]=x;
    }
    else
    {
        front--;
        dequeue[front]=x;
    }
}

void display()
{
    int i = front;
    while (i != rear)
    {
        printf("%d  ", dequeue[i]);
        i = (i + 1) % N;
    }
    printf("%d  \n", dequeue[rear]);
}

int main()
{
    enquerear(5);
    enquerear(7);
    enquerear(8);
    enquerear(1);
    display();
    printf("Enqueue on Front End\n");

    enquefront(7);
    enquefront(11);
    enquefront(4);
    enquerear(34); // Queue full condition
    display();
    printf("Dequeue from Front End\n");
    deque();
    display();

    return 0;
}

/*
OUTPUT
5  7  8  1  
Enqueue on Front End
Queue is full
4  11  7  5  7  8  1  
Dequeue from Front End
11  7  5  7  8  1

*/