//demonstrating the idea of copy constructor

#include <iostream>
using namespace std;
 
class integer
{
    int x=0;
       
    public:
    integer()
    {
    }
    integer(integer& s)
    {
        x=s.x;
    }
    integer(int t)
    {
        x=t;
    }
    void display()
    {
        cout<<"The value of X is "<<x<<"\n";
    }
};


int main()
{
    integer I1(40);
    integer I2=I1;      //dynamic initialization of objects
    I1.display();
    I2.display();   
    
    return 0;
}