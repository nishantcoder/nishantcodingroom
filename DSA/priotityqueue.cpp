/*
Types of priority queues
1. Ascending PQ - elements with lesser value have higher priority
2. Descending PQ -elements with graeter value have higher priority

    front-->    |  ||  ||  ||  ||  ||  ||  ||  ||  |  <-- rear


Two types of implementation
    1. Normal Insertion but value with higher priority gets deleted first
    2. Insertion with sorted  array and normal deletion           

*/

#include <iostream>
using namespace std;
#define N 10
//this implementation is in ascending order with 2nd type of implementation


class priority
{
    int front=-1;
    int rear=-1;
    int queue[N];
    void sort()
    {
        for (int i = 0; i < N-1; i++)
        {
            for (int j = 0; j < N-1; j++)
            {
                if(queue[j]>queue[j+1])
                {
                   int t= queue[j];
                   queue[j]=queue[j+1];
                   queue[j+1]=t;
                }
            }
            
        }
        
    }

    public:
        void enqueue(int x)         //insertion at rear end
        {
            int pos=0;
            
            if (rear==N-1)
            {
                cout<<"Queue Overflow"<<endl;
            }
            
            else if (front==-1 && rear==-1)
            {
                front=0;
                rear=0;
                queue[rear]=x;
            }
            else
            {
                pos=rear;
                rear++;
                while (pos>=0 && queue[pos]>=x)
                {
                    queue[pos+1]=queue[pos];
                    pos=pos-1;
                }
                queue[pos+1]=x;
                if (front==-1)
                {
                    front++;
                }
                
                
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
                front++;
            
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
    priority que;
    que.dequeue();
    que.enqueue(9);

    que.enqueue(6);
    que.enqueue(2);
    que.enqueue(1);

    que.enqueue(12);

    que.enqueue(13);
    que.enqueue(14);
    que.enqueue(15);

    que.display();
    que.dequeue();
    que.dequeue();
    que.display();
    return 0;
}

/*
Queue Underflow
1 2 6 9 12 13 14 15
6 9 12 13 14 15
*/