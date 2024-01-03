// Input Restricted Double Eneded Queue
/*
In this DEQUEUE, Deletion is possible at both the Ends front and rear
but the Insertion is only possible from rear end
Implementation using Circular array
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

void dequeuefront()
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

void dequeuerear()
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
    else if (rear == 0)
    {
        rear = N - 1;
    }
    else
    {
        rear--;
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
    enquerear(7);
    enquerear(11);
    enquerear(4);
    enquerear(34); // Queue full condition
    display();
    printf("Deleting from Front End\n");
    dequeuefront();
    display();
    printf("Deleting from Rear End\n");
    dequeuerear();
    display();

    return 0;
}

/*
OUTPUT
Queue is full
5  7  8  1  7  11  4
Deleting from Front End
7  8  1  7  11  4
Deleting from Rear End
7  8  1  7  11

*/