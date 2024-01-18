#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;

void push(int x)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = x;
    ptr->next = head;
    head = ptr;
}

void pop()
{
    int x;
    struct node *ptr;
    if (head == 0)
    {
        printf("stack underflow\n");
    }
    else
    {
        x = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("popped item is %d  ", x);
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (ptr != 0)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    push(5);
    push(6);
    push(9);
    push(10);
    push(11);
    display();
    pop();
    display();
    pop();
    display();
}