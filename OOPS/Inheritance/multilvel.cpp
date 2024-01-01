//SINGLE INHERITANCE : PUBLIC

#include <iostream>
using namespace std;

class base
{
    int a;
    public:
        int b;
        void get_ab()
        {
            a=5;
            b=6;
        }

        int get_a()
        {
            return a;
        }

        void show_a()
        {
            cout<<"a = "<<a<<"\n";
        }
};

class derived:public base
{
    int c;
    public:
    void mult()
    {
        c=b*get_a();
    }
    
    void display()
    {
        cout<<"a = "<<get_a()<<"\n";
        cout<<"b = "<<b<<"\n";
        cout<<"c = "<<c<<"\n";
    }
};

class doublederived:public derived
{
    public:
    void display()
    {
        cout<<"Showing from doublederived class \n";
        derived::display();
    }
};


int main()
{
    derived obj;
    doublederived obj1;
    obj1.get_ab();
    obj1.mult();
    
    obj1.display();
    return 0;
}