#include <iostream>
using namespace std;
#define N 10

class circularqueue
{
private:
    int queue[N];
    int front=-1,rear=-1;

public:
    void enqueue(int x)
    {
        if (front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            queue[rear]=x;
        }
        else if((rear+1)%N==front)
        {
            cout<<"Queue is full \n";
        }
        else
        {
            rear=(rear+1)%N;
            queue[rear]=x;
        }  
    }

    void dequeue()
    {
        if (front==-1 && rear==-1)
        {
            cout<<"Queue is empty";
        }
        else if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%N;
        }
    }

    void display()
    {
        int i=front;
        if (front==-1 && rear==-1)
        {
            cout<<"Queue is empty";
        }

        else
        {
            while (i!=rear)
            {
                cout<<queue[i]<<" ";
                i=(i+1)%N;
            }
            cout<<queue[rear];
            
        }        
    }
};


int main()
{
    circularqueue cq;
    cq.enqueue(6);
    cq.enqueue(7);
    cq.enqueue(9);
    cq.enqueue(-1);
    cq.enqueue(6);
    cq.enqueue(7);
    cq.enqueue(9);
    cq.enqueue(-1);
    cq.enqueue(6);
    cq.enqueue(7);
    cq.dequeue();
    cq.display();
    return 0;
}
