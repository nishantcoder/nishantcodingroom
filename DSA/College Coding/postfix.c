#include <stdio.h>
#include <math.h>
#define N 30

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

int pop()
{
    if (top==-1)
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
    for (int i = top; i >=0; i--)
    {
        printf("%d  ",stack[i]);
    }
    printf("\n");
    
}

void evaluate(char exp[])
{
    for (int i = 0; i < N; i++)
    {
        if(isdigit(exp[i]))
            push(exp[i]);

        else
        {
            if(exp[i]=='+')
                {
                    int a=pop();
                    int b=pop();
                    push(b+a);
                }

                else if(exp[i]=='-')
                {
                    int a=pop();
                    int b=pop();
                    push(b-a);
                }

                else if(exp[i]=='*')
                {
                    int a=pop();
                    int b=pop();
                    push(b*a);
                }

                else if(exp[i]=='/')
                {
                    int a=pop();
                    int b=pop();
                    push(b/a);
                }
                else if(exp[i]=='^')
                {
                    int a=pop();
                    int b=pop();
                    int c=pow(b,a);
                    push(c);
                }
        }
        
    }
    
    printf("The value of expression is %d ",pop());
   
}

int main()
{
    char postfix[30];
    printf("Enter the Postfix expression ");
    scanf("%s",&postfix);
    evaluate(postfix);

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