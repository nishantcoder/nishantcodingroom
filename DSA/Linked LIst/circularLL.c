/*
This code demonstrates the working of circular linked list 
It has 5 operations 
1. Insertion at beginiing 
2. Insertion at End 
3. Deletion from beginning
4. Deletion from End 
5. Revering the circular linked List
*/


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *tail=0;

void insert_beg(int x)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    
    if (tail==0)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
    }  
}

void insert_end(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;

    if (tail==0)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    
}

void del_beg()
{
    struct node *temp;
    temp=tail->next;
    if (tail==0)
    {
        printf("List is empty");
    }
    else if (temp->next==temp)
    {
        tail=0;
        free(temp);
    }
    
    else
    {
        tail->next=temp->next;
        free(temp);
    }
    
    
}

void del_end()
{
    struct node *cur,*prev;
    cur=tail->next;
    if (tail==0)
    {
        printf("List is empty\n");
    }
    else if (cur->next==cur)
    {
        tail=0;
        free(cur);
    }
    else
    {
        while (cur->next!=tail->next)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=tail->next;
        tail=prev;
        free(cur);
        
    }
}


void display()
{
    struct node *temp;
    if (tail==0)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=tail->next;
        do
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
        while (temp->next!=tail->next);
        printf("%d",temp->data);
        
        printf("\n");
    }
}

void reverse()
{
    struct node *cur,*prev,*nextnode;
    cur=tail->next;
    nextnode=cur->next;
    if (tail==0)
    {
        printf("List is empty\n");
    }
    else
    {
        while (cur!=tail)
        {
            prev=cur;
            cur=nextnode;
            nextnode=cur->next;
            cur->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
        
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

    printf("After Reversing the Linked list\n");
    reverse();
    display();
}

/*
OUTPUT
45  3  12  8  67  87
After deleting from beginning
3  12  8  67  87
After deleting from end
3  12  8  67
After Reversing the Linked list
67  8  12  3
*/

