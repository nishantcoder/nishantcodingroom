#include <iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    a=5;
    b=2;
    c=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<"\n";
    c=a*b;
    cout<<"Product of "<<a<<" and "<<b<<" is "<<c<<"\n" ;
    c=a/b;
    cout<<"Integer div is ion of "<<a<<" and "<<b<<" is "<<c<<"\n";
    c=(float)a/b;
    cout<<"Real div is ion of "<<a<<" and "<<b<<" is "<<c<<"\n";
    c=a-b;
    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<c<<"\n";
    c=a%b;
    cout<<"Modulus of "<<a<<" and "<<b<<" is "<<c<<"\n";
    return 0;
}