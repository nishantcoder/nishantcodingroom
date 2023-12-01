#include <iostream>
using namespace std;
//insertion at the position
struct node
{
    int data;
    node *next;
};

void insert_node(node **head,int data)
{
    node *newnode=new node;
    
    newnode->data=data;
    node *temp=*head;
    newnode->next=0;

    if (*head==0)
    {
        *head=newnode;
        return;
    }

    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}

void print_node(node *temp)
{
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}

int coun(node *temp)
{
    int i=1;
    temp=temp->next;
    while (temp!=0)
    {
        temp=temp->next;
        i++;
    }   
    return i;
}
int main()
{
    node *head=0,*temp;
    insert_node(&head,2);
    insert_node(&head,8);
    insert_node(&head,6);
    insert_node(&head,4);
    insert_node(&head,1);
    print_node(head);
    cout<<coun(head)<<"\n";
    int pos=0,count;
    cout<<"Enter the position ";
    cin>>pos;
    if (pos>count)
    {
        cout<<"Invalid Poition \n";
    }
    else
    {
        int i=1;
        temp=head;
        while (i<pos)
        {
            temp=temp->next;
            i++;
        }

       node *newnode=new node;
       cout<<"Enter data ";
       cin>>newnode->data;
       newnode->next=temp->next;    //right most link
       temp->next=newnode;
        
    }

    print_node(head);
    
    
    return 0;
}

//2 8 6 4 1 