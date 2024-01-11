#include <stdio.h>
#define N 7
struct circular
{
    int front=-1;
    int rear=-1;
    int queue[N];
}cq;

void enque(int x)
{
    if (cq.front==-1 && cq.rear==-1)
    {
        cq.front=0;
        cq.rear=0;
        cq.queue[cq.rear]=x;
    }
    else if ((cq.rear+1)%N==cq.front)
    {
        printf("Queue of full\n");
    }
    else
    {
        cq.rear=(cq.rear+1)%N;
        cq.queue[cq.rear]=x;
    } 
}

void deque()
{
    if (cq.front==-1 && cq.rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if (cq.front==cq.rear)
    {
        cq.front=-1;
        cq.rear=-1;
    }
    else
    {
        cq.front=(cq.front+1)%N;
    }  
}

void display()
{
    int i=cq.front;
    if (cq.front==-1 && cq.rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while (i!=cq.rear)
        {
            printf("%d  ",cq.queue[i]);
            i=(i+1)%N;
        }
        printf("%d  \n",cq.queue[cq.rear]);
    }
    
}

int main()
{
    enque(40);
    enque(50);
    enque(70);
    enque(80);
    enque(90);
    display();
    deque();
    display();
    return 0;
}