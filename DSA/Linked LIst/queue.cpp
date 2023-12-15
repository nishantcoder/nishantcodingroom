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
        cout<<"Queue Empty\n";
    }
    else
    {
        node *temp;
        temp=front;
        front=front->next;
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
        while(temp!=0)
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
}