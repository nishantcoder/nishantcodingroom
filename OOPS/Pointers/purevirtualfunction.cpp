#include <iostream>
using namespace std;
 
class Base
{
    
    public:
    void display()
    {
        cout<<"Display Base\n";
    }
    virtual void show()=0;      //pure virtual function
    
};

class derived:public Base
{
    public:
    void display()
    {
        cout<<"Display base\n";
    }
    void show()
    {
        cout<<"Show Derived\n";
    }
};

/*
We cannot create a base object like Base B; coz a function is made virtual in base,
but base pointer can point the derived 
*/

int main()
{
    
    derived D;
    Base *bptr;
   
    cout<<"bptr points to Derievd\n";
    bptr=&D;
    bptr->display();        //calls base Version
    bptr->show();           //calls derived Version 
    return 0;
}

/*
OUTPUT
bptr points to Derievd
Display Base
Show Derived
*/