/*
Types of priority queues
1. Ascending PQ - elements with lesser value have higher priority
2. Descending PQ -elements with graeter value have higher priority

    front-->    |  ||  ||  ||  ||  ||  ||  ||  ||  |  <-- rear


Two types of implementation
    1. Normal Insertion but value with higher priority gets deleted first
    2. Insertion with sorted  array and normal deletion

*/

#include <stdio.h>

#define N 7
// this implementation is in ascending order with 2nd type of implementation

int front = -1;
int rear = -1;
int queue[N];


void enqueue(int x) // insertion at rear end
{
    int pos = 0;

    if (rear == N - 1)
    {
        printf("Queue is full\n");
    }

    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        pos = rear;
        rear++;
        while (pos >= 0 && queue[pos] >= x)
        {
            queue[pos + 1] = queue[pos];
            pos = pos - 1;
        }
        queue[pos + 1] = x;
        if (front == -1)
        {
            front++;
        }
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }

    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }

    else
        front++;
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d   ",queue[i]);
        }
    }
    printf("\n");
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("%d   \n",queue[front]);
    }
}

int main()
{
   
    dequeue();
    enqueue(9);

    enqueue(6);
    enqueue(2);
    enqueue(1);

    enqueue(12);

    enqueue(13);
    enqueue(14);
    enqueue(15);    //queue is full

    display();
    dequeue();
    dequeue();
    display();
    return 0;
}

/*
Queue is Empty
Queue is full
1 2 6 9 12 13 14 15
6 9 12 13 14 15
*/