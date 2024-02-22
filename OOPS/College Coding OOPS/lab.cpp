#include <iostream>
using namespace std;
 
class a
{

    public:
    virtual void display()
    {
    cout<<"We are in base class\n";
    }
    
};

class b:public a
{

    public:
    void display()
    {
    cout<<"We are in derievd class\n";
    }
    
};
class c:public a
{

    public:
    void display()
    {
    cout<<"We are in derievd 2 class\n";
    }
    
};
int main()
{
    a a,*ptr;
    b b;
    
    ptr=&a;
    ptr->display();
    ptr=&b;
    ptr->display();
    c c;
    ptr=&c;
    ptr->display();

}

