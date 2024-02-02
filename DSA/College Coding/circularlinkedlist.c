#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

int len()
{
    struct node *temp;
    temp=head;
    int count=0;
    do
    {
        ++count;
        temp=temp->next;
    } while (temp!=head);
    return count;
    
}

void insert_beg(int x)
{
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    if(head==0)
    {
        head=newnode;
        newnode->next=head;
        return;
    }
    else
    {
        while (temp->next!=head)
        {
            temp=temp->next;
           
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;

    }
}

void insert_end(int x)
{
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}

void insert_pos(int pos,int x)
{
    if (pos<1 && pos>len())
    {
        printf("Invalid position\n");
        return;
    }
    if (pos==1)
    {
        insert_beg(x);
        return;
    }
    struct node *temp,*prev,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    temp=head;
    int i=1;
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->data=x;
    newnode->next=temp->next;
    temp->next=newnode;

}

void delete_beg()
{
    if (head==0)
    {
        printf("List is empty\n");
        return;
    }
    if (head==head->next)
    {
        free(head);
        head=0;
        return;
    }
    
    struct node *temp,*ptr;
    temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    ptr=head;
    head=head->next;
    
    free(ptr);
    
}

void delete_end()
{
    if (head==0)
    {
        printf("List is empty\n");
        return;
    }
    if (head==head->next)
    {
        free(head);
        head=0;
        return;
    }
    
    struct node *temp,*ptr;
    temp=head;
    while (temp->next->next!=head)
    {
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next=head;
    free(ptr);
    
}

void delete_pos(int pos)
{
    if (pos>len() && pos<1)
    {
        printf("Inalid position\n");
        return;
    }
    if (head==0)
    {
        printf("List is empty\n");
        return;
    }
    if (pos==1)
    {
        delete_beg();
        return;
    }
    

    
    int i=1;
    struct node *temp=head,*ptr;

    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    ptr=temp->next;
    temp->next=temp->next->next;
    free(ptr);
    
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);

    //or use the do while loop
    /*
    do
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    */
}

int main()
{
    insert_beg(78);
    insert_beg(67);
    insert_beg(69);
    insert_beg(56);
    display();

    insert_end(40);
    insert_end(50);
    display();
    insert_pos(3,12);
    display();
    
    delete_beg();
    display();

    delete_end();
    display();
    
    delete_pos(3);
    display();
}

/*
OUTPUT
56  69  67  78
56  69  67  78  40  50
56  69  12  67  78  40  50
69  12  67  78  40  50
69  12  67  78  40
69  12  78  40
*/