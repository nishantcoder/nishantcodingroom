//using memory managament operator 
//new and delete

#include <iostream>


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

    int opr=0;
    cout<<"Enter no of nodes to be created inn linked list\t";
    cin>>opr;

    while (opr!=0)
    {
        newnode=new node;

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
        
        opr--;

    }
    
    temp=head;
    while (temp!=0)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;

    }
    delete newnode;
}