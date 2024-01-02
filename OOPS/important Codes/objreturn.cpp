//this code demonstartes the concept of Returning objects

#include <iostream>
using namespace std;
 
class complex
{
    int real=0;
    int imag=0;       
    public:
    complex()
    {

    }
    complex(int x,int y)
    {
        real=x;
        imag=y;
    }
    complex add(complex a,complex b)
    {
        complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;
    }
    void display()
    {
        cout<<real<<" + j "<<imag<<endl;
    }
    
};


int main()
{
    complex comp1(3,5);         //calling the constructor implicitly
    complex comp2=complex(7,8); //calling the constructor explicitly
    complex obj;
    obj=obj.add(comp1,comp2);
    obj.display();
    
    return 0;
}