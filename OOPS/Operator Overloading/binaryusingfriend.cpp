// overloading binary operators

#include <iostream>
using namespace std;

class complex
{
    int real = 0, imag = 0;

public:
    complex() // constructor 1
    {
    }
    complex(int a, int b) // constructor 2
    {
        real = a;
        imag = b;
    }
    void display(void)
    {
        cout << real << " +  j  " << imag << "\n";
    }
    friend complex operator+(complex, complex);
};

complex operator+(complex c, complex d)
{
    complex temp;
    temp.real = d.real + c.real;
    temp.imag = d.imag + c.imag;
    return temp;
}
int main()
{
    complex c1, c2, c3; // invokes constructor 1
    c1 = complex(8, 9); // invokes constructor 2
    c2 = complex(7, 5);
    c3 = c1 + c2;
    c1.display();
    c2.display(); // activates operator-() function
    c3.display();

    return 0;
}