/*
This code demonstrates the working of Doubly circular linked list 
It has 4 operations 
1. Insertion at beginiing 
2. Insertion at End 
3. Deletion from beginning
4. Deletion from End 
*/


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head=0,*tail=0;

void insert_beg(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    
    if (head==0)
    {
        head=newnode;
        tail=newnode;
        newnode->prev=tail;
        newnode->next=head;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=tail;
        tail->next=newnode;
        head=newnode;
    }  
}

void insert_end(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;

    if (head==0)
    {
        head=newnode;
        tail=newnode;
        newnode->prev=tail;
        newnode->next=head;
    }
    else
    {
        newnode->prev=tail;
        tail->next=newnode;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
    
}

void del_beg()
{
    struct node *temp;
    temp=head;
    if (head==0)
    {
        printf("List is empty");
    }
    else if (temp->next==temp)
    {
        head=0;
        tail=0;
        free(temp);
    }
    
    else
    {
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
    
    
}

void del_end()
{
    struct node *temp;
    temp=tail;
    if (tail==0)
    {
        printf("List is empty\n");
    }
    else if (head->next==head)
    {
        head=0;
        tail=0;
        free(temp);
    }
    else
    {
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
        
    }
}


void display()
{
    struct node *temp;
    temp=head;
    if (temp==0)
    {
        printf("List is empty\n");
    }
    else
    {
        while (temp!=tail)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
        
        printf("%d",temp->data);
        
        printf("\n");
    }
}



int main()
{
    insert_beg(8);
    insert_beg(12);
    insert_beg(3);
    insert_beg(45);
    insert_end(67);
    insert_end(87);
    display();
    printf("After deleting from beginning\n");
    del_beg();
    display();
    printf("After deleting from end\n");
    del_end();
    display();

   

    return 0;
}

/*
OUTPUT
45  3  12  8  67  87
After deleting from beginning
3  12  8  67  87
After deleting from end
3  12  8  67
*/

