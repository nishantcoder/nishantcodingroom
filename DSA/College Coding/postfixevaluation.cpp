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



void evaluate(char exp[])
{
    int a,b;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit(exp[i]))
            push(exp[i]-'0');

        switch (exp[i])
        {
        case '+':
            a=pop();
            b=pop();
            push(b+a);
            break;
        case '-':
            a=pop();
            b=pop();
            push(b-a);
            break;
        case '*':
            a=pop();
            b=pop();
            push(b*a);
            break;
        case '/':
            a=pop();
            b=pop();
            push(b/a);
            break;
        
        default:
            break;
        }
    }

    printf("The value of expression is %d ", pop());
}

int main()
{
    char postfix[30];
    printf("Enter the Postfix expression ");
    scanf("%s", &postfix);
    evaluate(postfix);

    return 0;
}

/*
OUTPUT
Enter the Postfix expression 456*+
The value of expression is 34
*/
