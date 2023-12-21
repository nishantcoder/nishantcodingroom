#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
} *head=0;

void insert(int x)
{
    node *newnode=new node;
    node *temp;
    newnode->data=x;
    newnode->next=head;
    newnode->prev=0;
  
    if(head!=0)
    {
        head->prev=newnode;
    }
    head=newnode;
    
}

void end_insert(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->next=0;

    node *temp=head;
    if (head==0)
    {
        newnode->prev=0;
        head=newnode;
        return;
    }
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}


void display()
{
    node *temp;
    temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main()
{
    insert(6);
    insert(4);
    insert(8);
    insert(56);
    insert(478);
    insert(56);
    end_insert(5);
    display();
}



