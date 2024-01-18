//delete using key
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

void delete(int key)
{
    struct node *prev,*temp;
    prev=head;
    temp=head;
    int flag==0;
    if (prev==0)
    {
        printf("Empty list\n");
    }
    else if (prev->data==key)
    {
        struct node *temp;
        temp = head;
        head = temp->next;
        free(temp);
    }

    else if(prev->next->data==key)
    {
        prev->next=prev->next->next;
    }
    
    
    else
    {
        temp=prev->next;
        while (temp!=0)
        {
            if (temp->next->data==key)
            {
                prev=temp;
                temp=temp->next;
                flag=1;
                break;
            }
            else
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);        
    }  
    if (flag==0)
    {
        printf("Element is not present in the list\n");
    }
      
    
}

void display()
{
    struct node *temp;
    temp=head;
    if (temp==0)
    {
        printf("Linked List is  empty\n");
    }
    
    while (temp!=0)
    {
        printf("%d   ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    insert(89);
    insert(78);
    insert(50);
    insert(40);
    insert(56);
    insert(13);
    insert(5);
    display();
    delete(56);
    display();
    delete(13);
    display();
    delete(5);
    display();
}