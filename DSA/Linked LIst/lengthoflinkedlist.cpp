#include <iostream>
using namespace std;
//insertion at the beginning
struct node
{
    int data;
    node *next;
};

void insert_node(node **head,int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

}

void print_node(node *temp)
{
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}

void getlength(node *head)
{
    node *temp;
    temp=head;
    int count=0;
    while (temp!=0)
    {
        count++;
        temp=temp->next;
    }
    cout<<"\nThe length of linked list is "<<count;
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
    getlength(head);
    return 0;
}