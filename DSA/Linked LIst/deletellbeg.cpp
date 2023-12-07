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

node *del_beg(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *temp = head;
    head->next = head->next;
    free(temp);

    return head;
}

int main()
{
    node *head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 30;
    head->next->next->next = NULL;
    del_beg(head);
    print(head);

    return 0;
}