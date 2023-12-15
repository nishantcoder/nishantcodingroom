#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void insert(node **head, int data)
{
    node *newnode = new node;

    newnode->data = data;
    node *temp = *head;
    newnode->next = 0;

    if (*head == 0)
    {
        *head = newnode;
        return;
    }

    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insert_node(node **head,int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

}
node *del_beg(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *temp = head;
    head = head->next;
    delete (temp);

    return head;
}

int main()
{
    node *head = NULL;
    insert_node(&head,12);
    insert_node(&head,13);
    insert_node(&head,14);
    print(head);
    head=del_beg(head);
    print(head);

    return 0;
}