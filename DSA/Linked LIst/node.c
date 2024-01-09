#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*head=0;

void insert(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}

void delete()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}

void print()
{
    struct node *temp;
    temp=head;
    while (temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    insert(8);
    insert(6);
    insert(4);
    insert(5);
    print();
    delete();
    insert(2);
    print();
    return 0;
}