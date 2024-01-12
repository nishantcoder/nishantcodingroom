#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = 0;

int getlength()
{
    int i = 0;
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

void insert_beg(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void insert_end(int x)
{
    struct node *newnode, *temp;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert_pos(int pos, int x)
{
    struct node *newnode, *temp;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    int count = getlength();
    int i = 1;
    if (pos > count)
    {
        printf("invalid position\n");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newnode->data = x;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delete_beg()
{
    struct node *temp;
    temp = head;
    head = temp->next;
    free(temp);
}

void delete_end()
{
    struct node *temp, *prev;
    temp = head;
    while (temp->next != 0)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prev->next = 0;
    }
    free(temp);
}

void delete_pos(int pos)
{
    struct node *temp,*nextnode;
    temp=head;
    int len=getlength();
    int i=0;
    if (pos>len)
    {
        printf("Invalid Position\n");
    }
    else
    {
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    } 
}


void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    insert_beg(8);
    insert_beg(5);
    insert_beg(6);
    printf("After insertion at beginning \t");
    display();

    insert_end(11);
    insert_end(56);
    printf("After insertion at End \t");
    display();

    insert_pos(3, 78);
    printf("After insertion after position 3 \t");
    display();
    printf("After insertion after position 5 \t");
    insert_pos(5, 89);
    display();

    printf("After deleting from beginning\t");
    delete_beg();
    display();

    printf("After deleting from end \t");
    delete_end();
    display();
    
    printf("After deleting from position 3rd \t\t");
    delete_pos(3);
    display();
    return 0;
}

/*
Output
here position means the index
After insertion at beginning    6  5  8
After insertion at End  6  5  8  11  56
After insertion after position 3        6  5  8  78  11  56
After insertion after position 5        6  5  8  78  11  89  56
After deleting from beginning   5  8  78  11  89  56  
After deleting from end         5  8  78  11  89  
After deleting from position 3rd                5  8  78  89  
*/