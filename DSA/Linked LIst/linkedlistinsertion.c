#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=0;

int getlength()
{
    int i=0;
    struct node *temp;
    temp=head;
    while (temp!=0)
    {
        i++;
        temp=temp->next;
    }
    return i;
}

void insert_beg(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}

void insert_end(int x)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insert_pos(int pos,int x)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    int count=getlength();
    int i=1;
    if (pos>count)
    {
        printf("invalid position\n");
    }
    else
    {
        temp=head;
        while (i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->data=x;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
    
}

void display()
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
    insert_beg(8);
    insert_beg(5);
    insert_beg(6);

    insert_end(11);
    insert_end(56);

    insert_pos(3,78);
    insert_pos(5,89);
    display();
    return 0;
}