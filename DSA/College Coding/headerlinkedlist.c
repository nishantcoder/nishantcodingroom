#include <stdio.h>
#include <stdlib.h>


struct node 
{
    int data;
    struct node *next;
}*head;

int count=0;

void insert(int x)
{
    if (head==0)
    {
        struct node *header;
        header=(struct node *)malloc(sizeof(struct node));
        header->data=count;
        header->next=head;
        head=header;
    }
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    head->data=++count;
    newnode->next=head->next;
    head->next=newnode;
}

void display()
{
    struct node *temp;
    temp=head->next;
    while (temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

int main()
{
    insert(89);
    insert(67);
    insert(45);
    insert(56);
    display();
    printf("The length is %d \n",head->data);
}
