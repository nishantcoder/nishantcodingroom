#include <iostream>
using namespace std;
 
class alpha
{
    int data;
       
    public:
    alpha()
    {
        data=0;
    }
    alpha(int x)
    {
        data=x;
    }
    alpha(alpha &a)
    {
        data=a.data;
        cout<<"Copy constructor called\n";
    }
    void display()
    {
        cout<<"data = "<<data<<endl;
    }
};


int main()
{
    alpha a1(40);
    alpha a2(a1);
    a2.display();
    alpha a3;
    a3=a1;
    a3.display();
    return 0;
}