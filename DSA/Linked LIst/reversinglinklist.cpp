#include <iostream>
using namespace std;

/*the linked list can be reversed using two methods 
1. Iterative methods
2. Recursive methods
here we have discusse the Iterative method
traversing the linked list as well as reversing the linked list
*/


struct node
{
    int data;
    node *next;
}*head=0;

void insert_node(int data)
{
    node *newnode=new node;
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}

void print_node(node *temp)
{
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
    cout<<"\n";
}

node reverse_linkedlist(node *temp)
{
    node *curnode,*prevnode,*nextnode;
    prevnode=0;
    curnode=temp;
    
    
    while (curnode)
    {
        nextnode=curnode->next;
        curnode->next=prevnode;
        prevnode=curnode;
        curnode=nextnode;
    }
    head=prevnode;  
}


int main()
{
    
    insert_node(2);
    insert_node(8);
    insert_node(6);
    insert_node(4);
    insert_node(1);

    print_node(head);
    reverse_linkedlist(head);
    print_node(head);
    return 0;
}


/*
jenny mam logic

node reverse_linkedlist(node *temp)
{
    node *curnode,*prevnode,*nextnode;
    prevnode=0;
    curnode=temp;
    
    
    while (nextnode!=0)
    {
        nextnode=nextnode->next;
        curnode->next=prevnode;
        prevnode=curnode;
        curnode=nextnode;
    }
    head=prevnode;  
}
output
1 4 6 8 2 
2 8 6 4 1

*/