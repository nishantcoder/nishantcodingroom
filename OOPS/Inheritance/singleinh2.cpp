//SINGLE INHERITANCE : PRIAVTE

#include <iostream>
using namespace std;

class base
{
    int a;
    public:
        int b;
        void get_ab()
        {
            cout<<"Enter values of a and b\n";
            cin>>a>>b;
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
        get_ab();
        c=b*get_a();
    }
    
    void display()
    {
        show_a();
        cout<<"b = "<<b<<"\n";
        cout<<"c = "<<c<<"\n";
    }
};


int main()
{
    derived obj;
    
    
    obj.mult();
    obj.display();

    //obj.b=78; this will not work coz b become private
    obj.mult();
    obj.display();
    return 0;
}