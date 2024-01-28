#include <iostream>
using namespace std;
 
class Base
{
    
    public:
    void display()
    {
        cout<<"Display Base\n";
    }
    virtual void show()
    {
        cout<<"Show Base\n";
    }
    
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
Virtual functions decides at run time which function is going to be executed
if we point object of derived class from base class pointer , if a function is declared 
virtual then only the Derievd version of that function will be executed otherwise the base
version will get executed  
*/

int main()
{
    Base B;
    derived D;
    Base *bptr;
    cout<<"bptr points to base \n";
    bptr=&B;
    bptr->display();        //calls Base Version
    bptr->show();           //calls base Version 

    cout<<"bptr points to Derievd\n";
    bptr=&D;
    bptr->display();        //calls base Version
    bptr->show();           //calls derived Version 
    return 0;
}

/*
OUTPUT
bptr points to base 
Display Base
Show Base
bptr points to Derievd
Display Base
Show Derived
*/