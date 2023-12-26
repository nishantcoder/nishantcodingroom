#include <stdio.h>
#define N 15
int top=-1;


int stack[N];

void push(int x)
{
    if (top==N-1)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top]=x;
    }
    
    
}

int pop()
{
    int x=stack[top];
    top--;
    return x;
}

int main()
{
    int fact=1;
    int num=0;
    printf("Enter a number ");
    scanf("%d",&num);
    
    while (num!=0)
    {
        push(num);
        num--;
    }  
}