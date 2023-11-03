//Stack using array

#include <iostream>
using namespace std;
#define size 10

class stack
{
    int top=-1;     //private by default
    int stack[size];

    public:
        void push()
        {
            if (top==size-1)
            {
                cout<<"Overflow!"<<endl;
            }

            else
            {
                int item=0;
                cout<<"Enter element to be pushed"<<endl<<"<<< ";
                cin>>item;

                top++;  //setting the index value to next index to insert new data item

                stack[top]=item;
            }   
        }

        void pop()
        {
            if(top==-1)
            {
                cout<<"Underflow"<<endl;
            }

            else
            {
                int item=stack[top];
                top--;
                cout<<"Top item popped"<<endl;
            }
        }
    
        void peek()
        {
            if (top==-1)
            {
                cout<<"Underflow"<<endl;
            }
            else
            {
                cout<<stack[top];
            }
        }

        void display()
        {
            int i;
            for ( i = top; i>=0; i--)
            {
                cout<<stack[i];
            }
            cout<<endl;
        }

        void isEmpty(void);
        void isFull(void);
};

void stack::isEmpty()
{
    if (top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
}
void stack::isFull()
{
    if (top==size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    
}

int main()
{
    stack stk;
    stk.isEmpty();
    stk.push();
    stk.push();
    stk.push();
    stk.display();
    stk.pop();
    stk.display();
}

/*
OUTPUT: 
Stack is empty
Enter element to be pushed
<<< 6
Enter element to be pushed
<<< 9
Enter element to be pushed
<<< 3
396
Top item popped
96
*/