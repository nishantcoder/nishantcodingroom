#include <iostream>
using namespace std;
 
class counter 
{
    private:
    int count;
       
    public:
    counter()
    {
        count=0;
    }
    void display()
    {
        cout<<count<<"\n";
    }

    counter operator++()
    {
        counter temp;
        temp.count=++count;
        return temp;
    }
    counter operator++(int)
    {
        counter temp;
        temp.count=count++;
        return temp;
    }
};


int main()
{
    counter c1,c2,c3;
    cout<<"The value of C1 is ";
    c1.display();
    cout<<"The value of C2 is ";
    c2.display();
    cout<<"The value of C3 is ";
    c3.display();

    ++c1;
    cout<<"The value of C1 is ";
    c1.display();
    ++c2;
    c3=++c2;
    cout<<"The value of C2 is ";
    c2.display();
    cout<<"The value of C3 is ";
    c3.display();
    c3++;
    cout<<"The value of C3 is ";
    c3.display();
    return 0;
}

/*
OUTPUT
The value of C1 is 0
The value of C2 is 0
The value of C3 is 0
The value of C1 is 1
The value of C2 is 2
The value of C3 is 2
The value of C3 is 3
*/