#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define N 30

int stack[N];
int top = -1;

void push(int x)
{
    if (top == N - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        return stack[top--];
        
    }
}

int peek()
{
    return stack[top];
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d  ", stack[i]);
    }
    printf("\n");
}

void evaluate(char exp[])
{
    int index=0;
    while (exp[index]!='\0')
    {
        index++;
    }
    
    
    int a,b;
    for (int i=index-1; i>=0; i--)
    {
        if (isdigit(exp[i]))
            push(exp[i]-'0');

        switch (exp[i])
        {
        case '+':
            a=pop();
            b=pop();
            push(a+b);
            break;
        case '-':
            a=pop();
            b=pop();
            push(a-b);
            break;
        case '*':
            a=pop();
            b=pop();
            push(a*b);
            break;
        case '/':
            a=pop();
            b=pop();
            push(a/b);
            break;
        
        default:
            break;
        }
    }

    printf("The value of expression is %d ", pop());
}

int main()
{
    char prefix[30];
    printf("Enter the prefix expression ");
    scanf("%s", &prefix);
    evaluate(prefix);

    return 0;
}

/*
OUTPUT
Enter the prefix expression -/*2*5+3652
The value of expression is 16 
*/
