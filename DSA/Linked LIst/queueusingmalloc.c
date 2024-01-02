#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=0,*rear=0;

void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if (front==0 && rear==0)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void deque()
{
    if (front==0 && rear==0)
    {
        printf("Empty Queue\n");
    }
    else
    {
        struct node *temp;
        temp=front;
        front=front->next;
        free(temp);
    }
    
}

void display()
{
    struct node *temp;
    if (front==0 && rear==0)
    {
        printf("Empty Queue\n");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d   ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    } 
}

int main()
{
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(3);
    enqueue(1);
    display();
    deque();
    display();

    return 0;
}

/*
output
8 9 10 3 1 
9 10 3 1 
*/