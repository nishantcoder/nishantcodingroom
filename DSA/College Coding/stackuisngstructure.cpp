#include <stdio.h>
#define N 100

struct stack
{
    
    int top=-1;
    int Stack[N];
};
struct stack stk;

int push(int x)
{
    if (stk.top==N-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stk.top++;
        stk.Stack[stk.top]=x;
    }
    
}

void pop()
{
    if (stk.top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        stk.top--;
    } 
}

void peek()
{
    printf("Top item %d \n",stk.Stack[stk.top]);
}

void display()
{
    for (int i = stk.top; i >=0; i--)
    {
        printf("%d  ",stk.Stack[i]);
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