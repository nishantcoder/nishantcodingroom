#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=0;

void insertion(int x)
{
    struct node *newnode,*temp=root;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=0;
    newnode->right=0;
    if (root==0)
    {
        root=newnode;
        return;
    }
    while(temp!=0)
    {
        if (x<temp->data)
        {
            if (temp->left==0)
            {
                temp->left=newnode;
                break;
            }
            else
            {
                temp=temp->left;
            }
        }
        else
        {
            if (temp->right==0)
            {
                temp->right=newnode;
                break;
            }
            else
            {
                temp=temp->right;
            }
        }
        
    }    
}

void preorder()
{
    if (root==0)
    {
        return;
    }
    struct node *stack[100];
    int top=-1;
    stack[++top]=root;
    while (top>=0)
    {
        struct node *ptr=stack[top--];
        printf("%d,",ptr->data);
        if (ptr->right!=0)
        {
            stack[++top]=ptr->right;
        }
        if (ptr->left!=0)
        {
            stack[++top]=ptr->left;
        }
    }
    printf("\n");
}



void leafnodes()
{
    int count=0;
    if (root==0)
    {
        return;
    }
    struct node *stack[100];
    int top=-1;
    stack[++top]=root;
    while (top>=0)
    {
        struct node *ptr=stack[top--];
        if (ptr->left==0 && ptr->right==0)
        {
            ++count;
        }
        if (ptr->right!=0)
        {
            stack[++top]=ptr->right;
        }
        if (ptr->left!=0)
        {
            stack[++top]=ptr->left;
        }
    }
    printf("No of leaf nodes in BST %d \n",count);
}



int main()
{
    insertion(8);
    insertion(3);
    insertion(1);
    insertion(10);
    insertion(6);
    insertion(14);
    insertion(4);
    insertion(7);
    insertion(13);
    insertion(22);
    insertion(5);
    preorder();
    leafnodes();
    
}