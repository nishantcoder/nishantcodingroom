#include <stdio.h>
#define N 100

int stack[N];
int top=-1;

void push(int x)
{
    if (top==N-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }  
}

void pop()
{
    if (top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped item : %d\n",stack[top]);
        top--;
    } 
}

void peek()
{
    printf("Top item is : %d\n",stack[top]);
}

void display()
{
    for (int i = top; i >=0; i--)
    {
        printf("%d  ",stack[i]);
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

/*
Output
6  27  50  40  9  
Popped item : 6
Top item is : 27
Popped item : 27
67  50  40  9  

*/