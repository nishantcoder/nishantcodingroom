//Circular Queue using linked list

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*front=0,*rear=0;

void enqueue(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->next=0;
    if (rear==0)
    {
        front=newnode;
        rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void deque()
{
    node *temp;
    temp=front;
    if (front==0 && rear==0)
    {
        cout<<"Queue Empty\n";
    }
    else if (front==rear)
    {
        front=0;
        rear=0;
        delete temp;
    }
    else
    {
        front=front->next;
        rear->next=front;
        delete temp;
    }
}

void display()
{
    node *temp;
    if (front==0 && rear==0)
    {
        cout<<"Queue Empty\n";
    }
    else
    {
        temp=front;
        while(temp->next!=front)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
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