//Queue using Array

#include <iostream>
using namespace std;
#define N 100


class queue
{
    int front=-1;
    int rear=-1;
    int queue[N];

    public:
        void enqueue(int x)
        {
            if (rear==N-1)
            {
                cout<<"Queue Overrflow"<<endl;
            }
            
            else if (front==-1 && rear==-1)
            {
                front=0;
                rear=0;
                queue[rear]=x;
            }
            else
            {
                rear++;
                queue[rear]=x;
            }
        }

        void dequeue()
        {
            if (front==-1 && rear==-1)
            {
                cout<<"Queue Underflow"<<endl;
            }
            else if (front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front++;
            }   
        }

        void display()
        {
            if (front==-1 && rear==-1)
            {
                cout<<"Queue Underflow"<<endl;
            }
            else
            {
                for (int i = front; i <= rear; i++)
                {
                    cout<<queue[i]<<" ";
                }
                
            }   
            cout<<endl;
        }

        void peek()
        {
            if (front==-1 && rear==-1)
            {
                cout<<"Underflow"<<endl;
            }
            else
            {
                cout<<queue[front]<<endl;
            }
            
            
        }

};

int main()
{
    queue obj;
    obj.enqueue(3);
    obj.enqueue(5);
    obj.enqueue(8);
    obj.enqueue(9);
    obj.peek();
    obj.display();
    obj.dequeue();
    obj.peek();
    obj.display();
    return 0;
}

/*
OUTPUT
3
3 5 8 9 
5
5 8 9 
*/