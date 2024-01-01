#include <stdio.h>
#define N 100

struct stack
{
    int top=-1;
    int Stack[N];
};
struct stack stk,*ptr=&stk;

int push(int x)
{
    if (ptr->top==N-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->Stack[ptr->top]=x;
    }
    
}

void pop()
{
    if (ptr->top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        ptr->top--;
    } 
}

void peek()
{
    printf("Top item %d \n",ptr->Stack[ptr->top]);
}

void display()
{
    for (int i = ptr->top; i >=0; i--)
    {
        printf("%d  ",ptr->Stack[i]);
    }
    printf("\n");
    
}

int main()
{
    push(9);
    push(40);
    push(50);
    push(27);
    push(6);
    display();
    pop();
    peek();
    pop();
    push(67);
    display();
    return 0;
}