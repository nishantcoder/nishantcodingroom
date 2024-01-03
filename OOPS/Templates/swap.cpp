//demonstrating the Function template
//do not use swap() as function with templates it will give the overloading error
#include <iostream>
using namespace std;

template <class T>
void swap_num(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
   
}
int main()
{
    int a=40,b=50;
    cout << "Before Swapping\na = " << a << "\nb = " << b << "\n\n";
    swap_num(a,b);
    cout<<"After Swapping\na = "<<a<<"\nb = "<<b<<"\n\n";


    float p=9.78,q=7.89;
    cout << "Before Swapping\na = " << p << "\nb = " << q << "\n\n";
    swap_num(p,q);
    cout<<"After Swapping\na = "<<p<<"\nb = "<<q<<"\n\n";

    char x='A',y='B';
    cout << "Before Swapping\na = " << x << "\nb = " << y << "\n\n";
    swap_num(x,y);
    cout<<"After Swapping\na = "<<x<<"\nb = "<<y<<"\n\n";
    return 0;
}

/*
OUTPUT
Before Swapping
a = 40
b = 50

After Swapping
a = 50
b = 40

Before Swapping
a = 9.78
b = 7.89

After Swapping
a = 7.89
b = 9.78

Before Swapping
a = A
b = B

After Swapping
a = B
b = A
*/