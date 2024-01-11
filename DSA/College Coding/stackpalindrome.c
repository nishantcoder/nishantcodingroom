#include <stdio.h>
#include <string.h>
#define N 100

char stack[N];
int top=-1;

void push(char x)
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

char pop()
{
    if (top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        return stack[top--];
    } 
}

void palindrome(char str[])
{
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }
    int flag=-1;
    for (int i = 0; i < len; i++)
    {
        if(str[i]!=pop())
        flag=0;
    }
    if (flag==-1)
    {
        printf("String is a palondrome \n");
    }
    else
    {
        printf("String is not a palindrome \n");
    } 
}

int main()
{
    char str[26];
    printf("Enter a string \t");
    scanf("%s",&str);
    palindrome(str);
    return 0;
}

/*
Output
 

*/