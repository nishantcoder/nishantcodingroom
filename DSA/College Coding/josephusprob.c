#include <stdio.h>
#include <stdlib.h>
struct solider
{
    char name;
    struct solider *next;
}*head=0;

void insert_solider(char x)
{
    struct solider *new,*temp;
    temp=head;
    new=(struct solider*)malloc(sizeof(struct solider));
    new->name=x;
    if (head==0)
    {
        head=new;
        new->next=head;
    }
    else
    {
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=head;
        
    }
}

void print()
{
    struct solider *temp;
    temp=head;
    printf("Soldiers in circle : ");
    do
    {
        printf("%c  ",temp->name);
        temp=temp->next;
    } while (temp!=head);
    printf("\n");
    
}

void josephus(int n)
{
    int i=5;
    struct solider *temp,*ptr;
    temp=head;
    while(i>=1)
    {
        if (i==1)
        {
            printf("Soldier escaped : %c\n",temp->name);
            break;
        }
        
        else
        {
            int count=1;
            while (count<n)
            {
                ptr=temp;
                temp=temp->next;
                count++;
            }
            printf("Eliminated %c \n",temp->name);
            ptr->next=temp->next;
            temp=ptr->next;
            
            i--;
        }
    }
    
}

int main()
{
    insert_solider('A');
    insert_solider('B');
    insert_solider('C');
    insert_solider('D');
    insert_solider('E');
    print();
    josephus(3);
}