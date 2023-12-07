#include <iostream>
using namespace std;
 
struct complex
{
    int real=0;
    int imag=0;
};

complex add(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}


int main()
{
    complex x,y,z;
    cout<<"Enter the coedfficient of real ";
    cin>>x.real>>y.real;
    cout<<"Enter the coefyfciieunt of imaginary ";
    cin>>x.imag>>y.imag;
    z=add(x,y);
    cout<<z.real<<" + "<<z.imag<<" j";
    
    return 0;
}