#include <iostream>
using namespace std;


struct node
{
    int data;
    node *link;
} *top=0;


void push(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void display()
{
    node *temp;
    temp=top;
    if (top==0)
    {
        cout<<"Empty Stack\n";
    }
    else
    {
        while (temp!=0)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        } 
        cout<<"\n";
    }  
}

void push()
{
    if (top==0)
    {
        cout<<"Empty stack\n";
    }
    else
    {
        cout<<"top element "<<top->data<<endl;
    }
    
}

void pop()
{
    node *temp;
    temp=top;
    if (top==0)
    {
        cout<<"stack underflow\n";
    }
    else
    {
        cout<<"Popped item "<<top->data<<endl;
        top=top->link;
        delete temp;
    }  
}

int main()
{
    push(9);
    push(2);
    push(7);
    push(2);
    display();
    pop();
    display();
    return 0;

}

/*
output
2 7 2 9 
Popped item 2
7 2 9 
*/