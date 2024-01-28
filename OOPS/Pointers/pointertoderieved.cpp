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


int main()
{
    derived *dptr,d;
    dptr=&d;
    base *bptr;
    base b;
    bptr=&b;
    //dptr=&b; is a illegal expression 
    /*derived pointer cannot access base members*/
    bptr->get_ab();
    bptr->show_a();

    dptr->get_ab();
    dptr->mult();
    dptr->display();

    

    return 0;
    
}