#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head=0;

int len()
{
    struct node *temp;
    int count=0;
    temp=head;
    while (temp!=0)
    {
        count++;
        temp=temp->next;
    }
    return count;
}


void insert_beg(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=0;                                                                                                            
    newnode->next=head;

    if (head!=0)
    {
        head->prev=newnode;
    }
    
    head=newnode;
}

void insert_end(int x)
{
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
     

    if (temp==0)    //insertion at beginning
    {
        newnode->prev=0;                                                                                                            
        newnode->next=head;
        head=newnode;
    }
    
    
    else
    {
        while (temp->next!=0)
        {
            temp=temp->next;
        }
        newnode->next=0;
        newnode->prev=temp;
        temp->next=newnode;                                                                                                         
    }
}


void insert_pos(int pos,int x)
{
    if (pos>len() && pos<1)
    {
        printf("Inalid position \n");
        return;
    }
    if (pos==1)
    {
        insert_beg(x);
    }
    

    int i=1;
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->data=x;

    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
 
}

void delete_beg()
{
    if (head==0)
    {
        printf("No List\n");
        return;
    }
    struct node *temp;
    temp=head;
    head->next->prev=head;
    head=head->next;
    free(temp);
    
}

void delete_end()
{
    if (head==0)
    {
        printf("No List\n");
        return;
    }
    struct node *temp,*back;
    temp=head;
    while (temp->next!=0)
    {
        back=temp;
        temp=temp->next;
    }
    back->next=0;
    free(temp);
    

}

void delete_pos(int pos)
{
    if (pos>len() && pos<1)
    {
        printf("Inavlid position");
        return;
    }
    if(head==0)
    {
        printf("No list\n");
        return;
    }
    if (pos==1)
    {
        delete_beg();
        return;
    }
    struct node *temp;
    temp=head;
    int i=1;
    while (i<pos)
    {
        temp=temp->next;
        i++;   
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
      
    
}


void print()
{
    struct node *temp;
    temp=head;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

int main()
{
    insert_end(90);
    insert_beg(89);
    insert_beg(67);
    insert_beg(40);
    insert_beg(50);
    insert_end(45);
    
    print();
    
    insert_pos(4,56);
    print();

    delete_beg();
    print();

    delete_end();
    print();

    delete_pos(3);
    print();
    return 0;
}

/*
OUTPUT
50 40 67 89 90 45 
50 40 67 56 89 90 45 
40 67 56 89 90 45 
40 67 56 89 90 
40 67 89 90 
*/
