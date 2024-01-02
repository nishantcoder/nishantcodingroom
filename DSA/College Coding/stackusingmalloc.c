#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top=0;


void push(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void display()
{
    struct node *temp;
    temp=top;
    if (top==0)
    {
        printf("Empty Stack\n");
    }
    else
    {
        while (temp!=0)
        {
            printf("%d   ",temp->data);
            temp=temp->link;
        } 
        printf("\n");
    }  
}

void peek()
{
    if (top==0)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Top item is :%d   \n",top->data);
    }
    
}

void pop()
{
    struct node *temp;
    temp=top;
    if (top==0)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Popped item is :%d   \n",top->data);
        top=top->link;
        free(temp);
    }  
}

int main()
{
    push(9);
    push(2);
    push(7);
    push(2);
    peek();
    display();
    pop();
    display();
    return 0;

}

/*
output
2 7 2 9 
Popped item 2
7 2 9 
*/