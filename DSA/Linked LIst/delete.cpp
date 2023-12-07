#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};


void insert(Node **head, int data)
{
    Node *newnode = new Node;

    newnode->data = data;
    Node *temp = *head;
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


// Function to delete a node from the beginning of the linked list
Node *deleteFromBeginning(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

// Function to delete a node from the end of the linked list
Node *deleteFromEnd(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        head = NULL;
    }
    else
    {
        prev->next = NULL;
    }

    free(temp);

    return head;
}

// Function to delete a node from a random position in the linked list
Node *deleteFromRandomPosition(Node *head, int position)
{
    if (head == NULL || position < 0)
    {
        return NULL;
    }

    Node *temp = head;
    Node *prev = NULL;

    for (int i = 0; i < position; i++)
    {
        if (temp == NULL)
        {
            return NULL;
        }
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        head = head->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);

    return head;
}

// Function to print the linked list
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create the linked list
    Node *head = new Node;
    head->data = 10;
    head->next = new Node;
    head->next->data = 20;
    head->next->next = new Node;
    head->next->next->data = 30;
    head->next->next->next = NULL;
    


    cout << "Original linked list: ";
    printLinkedList(head);

    // Delete node from the beginning
    head = deleteFromBeginning(head);
    cout << "Linked list after deleting from beginning: ";
    printLinkedList(head);

    // Delete node from the end
    head = deleteFromEnd(head);
    cout << "Linked list after deleting from end: ";
    printLinkedList(head);

    // Delete node from a random position
    head = deleteFromRandomPosition(head, 1);
    cout << "Linked list after deleting from random position: ";
    printLinkedList(head);

    return 0;
}
