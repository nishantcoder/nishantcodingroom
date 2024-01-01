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
        return stack[top];
        top--;
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
    for (int i = 0; i != '\0'; i++)
    {
        if (isdigit(exp[i]))
            push(exp[i]);

        if (is(exp[i]))
        {
            int a = pop();
            int b = pop();
            push(b + a);
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
