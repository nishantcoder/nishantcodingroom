#include <iostream>
using namespace std;
//insertion at the end
struct node
{
    int data;
    node *next;
};

void insert_node(node **head,int data)
{
    node *newnode=new node;
    
    newnode->data=data;
    node *temp=*head;
    newnode->next=0;

    if (*head==0)
    {
        *head=newnode;
        return;
    }

    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}

void print_node(node *temp)
{
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}


int main()
{
    node *head=0;
    insert_node(&head,2);
    insert_node(&head,8);
    insert_node(&head,6);
    insert_node(&head,4);
    insert_node(&head,1);
    print_node(head);
    return 0;
}

//2 8 6 4 1 