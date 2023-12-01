//using malloc and free 

#include <iostream>
#include <stdlib.h>
struct node
{
    int data;
    node *next;
};




using namespace std;
int main()
{
    node *head,*newnode,*temp;
    head=0;

    int choice=1;

    while (choice)
    {
        newnode=(struct node *)malloc(sizeof(node));

        cout<<"Enter Data\t";
        cin>>newnode->data;
        newnode->next=0;

        if (head==0)
        {
            temp=newnode;
            head=temp;

        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        
        cout<<"Press 0 to stop the loop\n";
        cin>>choice;

    }
    
    temp=head;
    while (temp!=0)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;

    }
    free(newnode);
    
}