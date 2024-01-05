#include <stdio.h>
#include <stdlib.h>
//Sum of Linked list elements
struct node
{
    int data;
    struct node *next;
}*head=0;

void insert_node(int data)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}

void print_node()
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

void getsum()
{
    struct node *temp;
    temp=head;
    int sum=0;
    while (temp!=0)
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    printf("The sum of Linked List %d\n",sum);
    
}

int main()
{
    insert_node(1);
    insert_node(2);
    insert_node(3);
    insert_node(4);
    insert_node(5);
    print_node();
    getsum();
    return 0;
}

/*
OUTPUT
5  4  3  2  1  
The sum of Linked List 15
*/